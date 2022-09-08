/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/PhoneNumberInformation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace Model
{

PhoneNumberInformation::PhoneNumberInformation() : 
    m_createdAtHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_iso2CountryCodeHasBeenSet(false),
    m_routeType(RouteType::NOT_SET),
    m_routeTypeHasBeenSet(false),
    m_numberCapabilitiesHasBeenSet(false)
{
}

PhoneNumberInformation::PhoneNumberInformation(const XmlNode& xmlNode) : 
    m_createdAtHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_iso2CountryCodeHasBeenSet(false),
    m_routeType(RouteType::NOT_SET),
    m_routeTypeHasBeenSet(false),
    m_numberCapabilitiesHasBeenSet(false)
{
  *this = xmlNode;
}

PhoneNumberInformation& PhoneNumberInformation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode phoneNumberNode = resultNode.FirstChild("PhoneNumber");
    if(!phoneNumberNode.IsNull())
    {
      m_phoneNumber = Aws::Utils::Xml::DecodeEscapedXmlText(phoneNumberNode.GetText());
      m_phoneNumberHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode iso2CountryCodeNode = resultNode.FirstChild("Iso2CountryCode");
    if(!iso2CountryCodeNode.IsNull())
    {
      m_iso2CountryCode = Aws::Utils::Xml::DecodeEscapedXmlText(iso2CountryCodeNode.GetText());
      m_iso2CountryCodeHasBeenSet = true;
    }
    XmlNode routeTypeNode = resultNode.FirstChild("RouteType");
    if(!routeTypeNode.IsNull())
    {
      m_routeType = RouteTypeMapper::GetRouteTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(routeTypeNode.GetText()).c_str()).c_str());
      m_routeTypeHasBeenSet = true;
    }
    XmlNode numberCapabilitiesNode = resultNode.FirstChild("NumberCapabilities");
    if(!numberCapabilitiesNode.IsNull())
    {
      XmlNode numberCapabilitiesMember = numberCapabilitiesNode.FirstChild("member");
      while(!numberCapabilitiesMember.IsNull())
      {
        m_numberCapabilities.push_back(NumberCapabilityMapper::GetNumberCapabilityForName(StringUtils::Trim(numberCapabilitiesMember.GetText().c_str())));
        numberCapabilitiesMember = numberCapabilitiesMember.NextNode("member");
      }

      m_numberCapabilitiesHasBeenSet = true;
    }
  }

  return *this;
}

void PhoneNumberInformation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_createdAtHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_phoneNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".PhoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_iso2CountryCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Iso2CountryCode=" << StringUtils::URLEncode(m_iso2CountryCode.c_str()) << "&";
  }

  if(m_routeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RouteType=" << RouteTypeMapper::GetNameForRouteType(m_routeType) << "&";
  }

  if(m_numberCapabilitiesHasBeenSet)
  {
      unsigned numberCapabilitiesIdx = 1;
      for(auto& item : m_numberCapabilities)
      {
        oStream << location << index << locationValue << ".NumberCapabilities.member." << numberCapabilitiesIdx++ << "=" << NumberCapabilityMapper::GetNameForNumberCapability(item) << "&";
      }
  }

}

void PhoneNumberInformation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_createdAtHasBeenSet)
  {
      oStream << location << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_phoneNumberHasBeenSet)
  {
      oStream << location << ".PhoneNumber=" << StringUtils::URLEncode(m_phoneNumber.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_iso2CountryCodeHasBeenSet)
  {
      oStream << location << ".Iso2CountryCode=" << StringUtils::URLEncode(m_iso2CountryCode.c_str()) << "&";
  }
  if(m_routeTypeHasBeenSet)
  {
      oStream << location << ".RouteType=" << RouteTypeMapper::GetNameForRouteType(m_routeType) << "&";
  }
  if(m_numberCapabilitiesHasBeenSet)
  {
      unsigned numberCapabilitiesIdx = 1;
      for(auto& item : m_numberCapabilities)
      {
        oStream << location << ".NumberCapabilities.member." << numberCapabilitiesIdx++ << "=" << NumberCapabilityMapper::GetNameForNumberCapability(item) << "&";
      }
  }
}

} // namespace Model
} // namespace SNS
} // namespace Aws
