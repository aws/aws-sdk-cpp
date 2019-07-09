/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/KeyPairInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

KeyPairInfo::KeyPairInfo() : 
    m_keyFingerprintHasBeenSet(false),
    m_keyNameHasBeenSet(false)
{
}

KeyPairInfo::KeyPairInfo(const XmlNode& xmlNode) : 
    m_keyFingerprintHasBeenSet(false),
    m_keyNameHasBeenSet(false)
{
  *this = xmlNode;
}

KeyPairInfo& KeyPairInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyFingerprintNode = resultNode.FirstChild("keyFingerprint");
    if(!keyFingerprintNode.IsNull())
    {
      m_keyFingerprint = keyFingerprintNode.GetText();
      m_keyFingerprintHasBeenSet = true;
    }
    XmlNode keyNameNode = resultNode.FirstChild("keyName");
    if(!keyNameNode.IsNull())
    {
      m_keyName = keyNameNode.GetText();
      m_keyNameHasBeenSet = true;
    }
  }

  return *this;
}

void KeyPairInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_keyFingerprintHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyFingerprint=" << StringUtils::URLEncode(m_keyFingerprint.c_str()) << "&";
  }

  if(m_keyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

}

void KeyPairInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_keyFingerprintHasBeenSet)
  {
      oStream << location << ".KeyFingerprint=" << StringUtils::URLEncode(m_keyFingerprint.c_str()) << "&";
  }
  if(m_keyNameHasBeenSet)
  {
      oStream << location << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
