/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IntegrateServices.h>
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

IntegrateServices::IntegrateServices() : 
    m_athenaIntegrationsHasBeenSet(false)
{
}

IntegrateServices::IntegrateServices(const XmlNode& xmlNode) : 
    m_athenaIntegrationsHasBeenSet(false)
{
  *this = xmlNode;
}

IntegrateServices& IntegrateServices::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode athenaIntegrationsNode = resultNode.FirstChild("AthenaIntegration");
    if(!athenaIntegrationsNode.IsNull())
    {
      XmlNode athenaIntegrationsMember = athenaIntegrationsNode.FirstChild("item");
      while(!athenaIntegrationsMember.IsNull())
      {
        m_athenaIntegrations.push_back(athenaIntegrationsMember);
        athenaIntegrationsMember = athenaIntegrationsMember.NextNode("item");
      }

      m_athenaIntegrationsHasBeenSet = true;
    }
  }

  return *this;
}

void IntegrateServices::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_athenaIntegrationsHasBeenSet)
  {
      unsigned athenaIntegrationsIdx = 1;
      for(auto& item : m_athenaIntegrations)
      {
        Aws::StringStream athenaIntegrationsSs;
        athenaIntegrationsSs << location << index << locationValue << ".AthenaIntegration." << athenaIntegrationsIdx++;
        item.OutputToStream(oStream, athenaIntegrationsSs.str().c_str());
      }
  }

}

void IntegrateServices::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_athenaIntegrationsHasBeenSet)
  {
      unsigned athenaIntegrationsIdx = 1;
      for(auto& item : m_athenaIntegrations)
      {
        Aws::StringStream athenaIntegrationsSs;
        athenaIntegrationsSs << location <<  ".AthenaIntegration." << athenaIntegrationsIdx++;
        item.OutputToStream(oStream, athenaIntegrationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
