/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityBlockExtensionOffering.h>
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

CapacityBlockExtensionOffering::CapacityBlockExtensionOffering(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityBlockExtensionOffering& CapacityBlockExtensionOffering::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityBlockExtensionOfferingIdNode = resultNode.FirstChild("capacityBlockExtensionOfferingId");
    if(!capacityBlockExtensionOfferingIdNode.IsNull())
    {
      m_capacityBlockExtensionOfferingId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockExtensionOfferingIdNode.GetText());
      m_capacityBlockExtensionOfferingIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if(!availabilityZoneIdNode.IsNull())
    {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if(!startDateNode.IsNull())
    {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode capacityBlockExtensionStartDateNode = resultNode.FirstChild("capacityBlockExtensionStartDate");
    if(!capacityBlockExtensionStartDateNode.IsNull())
    {
      m_capacityBlockExtensionStartDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockExtensionStartDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_capacityBlockExtensionStartDateHasBeenSet = true;
    }
    XmlNode capacityBlockExtensionEndDateNode = resultNode.FirstChild("capacityBlockExtensionEndDate");
    if(!capacityBlockExtensionEndDateNode.IsNull())
    {
      m_capacityBlockExtensionEndDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockExtensionEndDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_capacityBlockExtensionEndDateHasBeenSet = true;
    }
    XmlNode capacityBlockExtensionDurationHoursNode = resultNode.FirstChild("capacityBlockExtensionDurationHours");
    if(!capacityBlockExtensionDurationHoursNode.IsNull())
    {
      m_capacityBlockExtensionDurationHours = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockExtensionDurationHoursNode.GetText()).c_str()).c_str());
      m_capacityBlockExtensionDurationHoursHasBeenSet = true;
    }
    XmlNode upfrontFeeNode = resultNode.FirstChild("upfrontFee");
    if(!upfrontFeeNode.IsNull())
    {
      m_upfrontFee = Aws::Utils::Xml::DecodeEscapedXmlText(upfrontFeeNode.GetText());
      m_upfrontFeeHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = Aws::Utils::Xml::DecodeEscapedXmlText(currencyCodeNode.GetText());
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = CapacityReservationTenancyMapper::GetCapacityReservationTenancyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenancyNode.GetText()).c_str()));
      m_tenancyHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityBlockExtensionOffering::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityBlockExtensionOfferingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockExtensionOfferingId=" << StringUtils::URLEncode(m_capacityBlockExtensionOfferingId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_startDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_capacityBlockExtensionStartDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockExtensionStartDate=" << StringUtils::URLEncode(m_capacityBlockExtensionStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_capacityBlockExtensionEndDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockExtensionEndDate=" << StringUtils::URLEncode(m_capacityBlockExtensionEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_capacityBlockExtensionDurationHoursHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockExtensionDurationHours=" << m_capacityBlockExtensionDurationHours << "&";
  }

  if(m_upfrontFeeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpfrontFee=" << StringUtils::URLEncode(m_upfrontFee.c_str()) << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Tenancy=" << StringUtils::URLEncode(CapacityReservationTenancyMapper::GetNameForCapacityReservationTenancy(m_tenancy)) << "&";
  }

}

void CapacityBlockExtensionOffering::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityBlockExtensionOfferingIdHasBeenSet)
  {
      oStream << location << ".CapacityBlockExtensionOfferingId=" << StringUtils::URLEncode(m_capacityBlockExtensionOfferingId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if(m_startDateHasBeenSet)
  {
      oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_capacityBlockExtensionStartDateHasBeenSet)
  {
      oStream << location << ".CapacityBlockExtensionStartDate=" << StringUtils::URLEncode(m_capacityBlockExtensionStartDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_capacityBlockExtensionEndDateHasBeenSet)
  {
      oStream << location << ".CapacityBlockExtensionEndDate=" << StringUtils::URLEncode(m_capacityBlockExtensionEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_capacityBlockExtensionDurationHoursHasBeenSet)
  {
      oStream << location << ".CapacityBlockExtensionDurationHours=" << m_capacityBlockExtensionDurationHours << "&";
  }
  if(m_upfrontFeeHasBeenSet)
  {
      oStream << location << ".UpfrontFee=" << StringUtils::URLEncode(m_upfrontFee.c_str()) << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }
  if(m_tenancyHasBeenSet)
  {
      oStream << location << ".Tenancy=" << StringUtils::URLEncode(CapacityReservationTenancyMapper::GetNameForCapacityReservationTenancy(m_tenancy)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
