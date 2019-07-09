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

#include <aws/iam/model/AttachedPolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace Model
{

AttachedPolicy::AttachedPolicy() : 
    m_policyNameHasBeenSet(false),
    m_policyArnHasBeenSet(false)
{
}

AttachedPolicy::AttachedPolicy(const XmlNode& xmlNode) : 
    m_policyNameHasBeenSet(false),
    m_policyArnHasBeenSet(false)
{
  *this = xmlNode;
}

AttachedPolicy& AttachedPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyNameNode = resultNode.FirstChild("PolicyName");
    if(!policyNameNode.IsNull())
    {
      m_policyName = policyNameNode.GetText();
      m_policyNameHasBeenSet = true;
    }
    XmlNode policyArnNode = resultNode.FirstChild("PolicyArn");
    if(!policyArnNode.IsNull())
    {
      m_policyArn = policyArnNode.GetText();
      m_policyArnHasBeenSet = true;
    }
  }

  return *this;
}

void AttachedPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }

  if(m_policyArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PolicyArn=" << StringUtils::URLEncode(m_policyArn.c_str()) << "&";
  }

}

void AttachedPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyNameHasBeenSet)
  {
      oStream << location << ".PolicyName=" << StringUtils::URLEncode(m_policyName.c_str()) << "&";
  }
  if(m_policyArnHasBeenSet)
  {
      oStream << location << ".PolicyArn=" << StringUtils::URLEncode(m_policyArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
