/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/OrganizationsDecisionDetail.h>
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

OrganizationsDecisionDetail::OrganizationsDecisionDetail() : 
    m_allowedByOrganizations(false),
    m_allowedByOrganizationsHasBeenSet(false)
{
}

OrganizationsDecisionDetail::OrganizationsDecisionDetail(const XmlNode& xmlNode) : 
    m_allowedByOrganizations(false),
    m_allowedByOrganizationsHasBeenSet(false)
{
  *this = xmlNode;
}

OrganizationsDecisionDetail& OrganizationsDecisionDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allowedByOrganizationsNode = resultNode.FirstChild("AllowedByOrganizations");
    if(!allowedByOrganizationsNode.IsNull())
    {
      m_allowedByOrganizations = StringUtils::ConvertToBool(StringUtils::Trim(allowedByOrganizationsNode.GetText().c_str()).c_str());
      m_allowedByOrganizationsHasBeenSet = true;
    }
  }

  return *this;
}

void OrganizationsDecisionDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allowedByOrganizationsHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowedByOrganizations=" << std::boolalpha << m_allowedByOrganizations << "&";
  }

}

void OrganizationsDecisionDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allowedByOrganizationsHasBeenSet)
  {
      oStream << location << ".AllowedByOrganizations=" << std::boolalpha << m_allowedByOrganizations << "&";
  }
}

} // namespace Model
} // namespace IAM
} // namespace Aws
