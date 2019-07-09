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

#include <aws/ec2/model/BlobAttributeValue.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

BlobAttributeValue::BlobAttributeValue() : 
    m_valueHasBeenSet(false)
{
}

BlobAttributeValue::BlobAttributeValue(const XmlNode& xmlNode) : 
    m_valueHasBeenSet(false)
{
  *this = xmlNode;
}

BlobAttributeValue& BlobAttributeValue::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode valueNode = resultNode.FirstChild("value");
    if(!valueNode.IsNull())
    {
      m_value = HashingUtils::Base64Decode(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
  }

  return *this;
}

void BlobAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_value).c_str()) << "&";
  }

}

void BlobAttributeValue::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_value).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
