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

#include <aws/redshift/model/ClusterIamRole.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ClusterIamRole::ClusterIamRole() : 
    m_iamRoleArnHasBeenSet(false),
    m_applyStatusHasBeenSet(false)
{
}

ClusterIamRole::ClusterIamRole(const XmlNode& xmlNode) : 
    m_iamRoleArnHasBeenSet(false),
    m_applyStatusHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterIamRole& ClusterIamRole::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode iamRoleArnNode = resultNode.FirstChild("IamRoleArn");
    if(!iamRoleArnNode.IsNull())
    {
      m_iamRoleArn = iamRoleArnNode.GetText();
      m_iamRoleArnHasBeenSet = true;
    }
    XmlNode applyStatusNode = resultNode.FirstChild("ApplyStatus");
    if(!applyStatusNode.IsNull())
    {
      m_applyStatus = applyStatusNode.GetText();
      m_applyStatusHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterIamRole::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_iamRoleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }

  if(m_applyStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplyStatus=" << StringUtils::URLEncode(m_applyStatus.c_str()) << "&";
  }

}

void ClusterIamRole::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_iamRoleArnHasBeenSet)
  {
      oStream << location << ".IamRoleArn=" << StringUtils::URLEncode(m_iamRoleArn.c_str()) << "&";
  }
  if(m_applyStatusHasBeenSet)
  {
      oStream << location << ".ApplyStatus=" << StringUtils::URLEncode(m_applyStatus.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
