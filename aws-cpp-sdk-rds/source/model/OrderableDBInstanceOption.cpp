/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/OrderableDBInstanceOption.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

OrderableDBInstanceOption::OrderableDBInstanceOption() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_multiAZCapable(false),
    m_multiAZCapableHasBeenSet(false),
    m_readReplicaCapable(false),
    m_readReplicaCapableHasBeenSet(false),
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
    m_multiAZCapable(false),
    m_multiAZCapableHasBeenSet(false),
    m_readReplicaCapable(false),
    m_readReplicaCapableHasBeenSet(false),
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
      m_engine = StringUtils::Trim(engineNode.GetText().c_str());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = StringUtils::Trim(engineVersionNode.GetText().c_str());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = StringUtils::Trim(dBInstanceClassNode.GetText().c_str());
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = StringUtils::Trim(licenseModelNode.GetText().c_str());
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
    XmlNode multiAZCapableNode = resultNode.FirstChild("MultiAZCapable");
    if(!multiAZCapableNode.IsNull())
    {
      m_multiAZCapable = StringUtils::ConvertToBool(StringUtils::Trim(multiAZCapableNode.GetText().c_str()).c_str());
      m_multiAZCapableHasBeenSet = true;
    }
    XmlNode readReplicaCapableNode = resultNode.FirstChild("ReadReplicaCapable");
    if(!readReplicaCapableNode.IsNull())
    {
      m_readReplicaCapable = StringUtils::ConvertToBool(StringUtils::Trim(readReplicaCapableNode.GetText().c_str()).c_str());
      m_readReplicaCapableHasBeenSet = true;
    }
    XmlNode vpcNode = resultNode.FirstChild("Vpc");
    if(!vpcNode.IsNull())
    {
      m_vpc = StringUtils::ConvertToBool(StringUtils::Trim(vpcNode.GetText().c_str()).c_str());
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
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location << index << locationValue << ".AvailabilityZone";
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }
  if(m_multiAZCapableHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZCapable=" << m_multiAZCapable << "&";
  }
  if(m_readReplicaCapableHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReadReplicaCapable=" << m_readReplicaCapable << "&";
  }
  if(m_vpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".Vpc=" << m_vpc << "&";
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
      for(auto& item : m_availabilityZones)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".AvailabilityZone";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_multiAZCapableHasBeenSet)
  {
      oStream << location << ".MultiAZCapable=" << m_multiAZCapable << "&";
  }
  if(m_readReplicaCapableHasBeenSet)
  {
      oStream << location << ".ReadReplicaCapable=" << m_readReplicaCapable << "&";
  }
  if(m_vpcHasBeenSet)
  {
      oStream << location << ".Vpc=" << m_vpc << "&";
  }
}
