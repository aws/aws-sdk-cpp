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

#include <aws/route53/model/LinkedService.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

LinkedService::LinkedService() : 
    m_servicePrincipalHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

LinkedService::LinkedService(const XmlNode& xmlNode) : 
    m_servicePrincipalHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

LinkedService& LinkedService::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode servicePrincipalNode = resultNode.FirstChild("ServicePrincipal");
    if(!servicePrincipalNode.IsNull())
    {
      m_servicePrincipal = servicePrincipalNode.GetText();
      m_servicePrincipalHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void LinkedService::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_servicePrincipalHasBeenSet)
  {
   XmlNode servicePrincipalNode = parentNode.CreateChildElement("ServicePrincipal");
   servicePrincipalNode.SetText(m_servicePrincipal);
  }

  if(m_descriptionHasBeenSet)
  {
   XmlNode descriptionNode = parentNode.CreateChildElement("Description");
   descriptionNode.SetText(m_description);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
