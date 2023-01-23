/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/OrderableDBInstanceOption.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDB
{
namespace Model
{

OrderableDBInstanceOption::OrderableDBInstanceOption() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_vpc(false),
    m_vpcHasBeenSet(false)
{
}

OrderableDBInstanceOption::OrderableDBInstanceOption(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_vpc(false),
    m_vpcHasBeenSet(false)
{
  *this = xmlNode;
}

OrderableDBInstanceOption& OrderableDBInstanceOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceClassNode.GetText());
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = Aws::Utils::Xml::DecodeEscapedXmlText(licenseModelNode.GetText());
      m_licenseModelHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember);
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode vpcNode = resultNode.FirstChild("Vpc");
    if(!vpcNode.IsNull())
    {
      m_vpc = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcNode.GetText()).c_str()).c_str());
      m_vpcHasBeenSet = true;
    }
  }

  return *this;
}

void OrderableDBInstanceOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_licenseModelHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }

  if(m_vpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".Vpc=" << std::boolalpha << m_vpc << "&";
  }

}

void OrderableDBInstanceOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if(m_licenseModelHasBeenSet)
  {
      oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location <<  ".AvailabilityZone." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }
  if(m_vpcHasBeenSet)
  {
      oStream << location << ".Vpc=" << std::boolalpha << m_vpc << "&";
  }
}

} // namespace Model
} // namespace DocDB
} // namespace Aws
