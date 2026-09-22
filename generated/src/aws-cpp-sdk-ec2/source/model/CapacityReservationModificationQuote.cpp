/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityReservationModificationQuote.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityReservationModificationQuote::CapacityReservationModificationQuote(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityReservationModificationQuote& CapacityReservationModificationQuote::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode capacityReservationModificationQuoteIdNode = resultNode.FirstChild("capacityReservationModificationQuoteId");
    if (!capacityReservationModificationQuoteIdNode.IsNull()) {
      m_capacityReservationModificationQuoteId =
          Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationModificationQuoteIdNode.GetText());
      m_capacityReservationModificationQuoteIdHasBeenSet = true;
    }
    XmlNode capacityReservationIdNode = resultNode.FirstChild("capacityReservationId");
    if (!capacityReservationIdNode.IsNull()) {
      m_capacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationIdNode.GetText());
      m_capacityReservationIdHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if (!createTimeNode.IsNull()) {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode expirationTimeNode = resultNode.FirstChild("expirationTime");
    if (!expirationTimeNode.IsNull()) {
      m_expirationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationTimeNode.GetText()).c_str()).c_str(),
                                  Aws::Utils::DateFormat::ISO_8601);
      m_expirationTimeHasBeenSet = true;
    }
    XmlNode quoteStateNode = resultNode.FirstChild("quoteState");
    if (!quoteStateNode.IsNull()) {
      m_quoteState = CapacityReservationModificationQuoteStateMapper::GetCapacityReservationModificationQuoteStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(quoteStateNode.GetText()).c_str()));
      m_quoteStateHasBeenSet = true;
    }
    XmlNode currentConfigurationNode = resultNode.FirstChild("currentConfiguration");
    if (!currentConfigurationNode.IsNull()) {
      m_currentConfiguration = currentConfigurationNode;
      m_currentConfigurationHasBeenSet = true;
    }
    XmlNode modificationTermsNode = resultNode.FirstChild("modificationTerms");
    if (!modificationTermsNode.IsNull()) {
      m_modificationTerms = modificationTermsNode;
      m_modificationTermsHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if (!tagsNode.IsNull()) {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while (!tagsMember.IsNull()) {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationModificationQuote::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                          const char* locationValue) const {
  if (m_capacityReservationModificationQuoteIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".CapacityReservationModificationQuoteId=" << StringUtils::URLEncode(m_capacityReservationModificationQuoteId.c_str())
            << "&";
  }

  if (m_capacityReservationIdHasBeenSet) {
    oStream << location << index << locationValue << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str())
            << "&";
  }

  if (m_createTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_expirationTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_quoteStateHasBeenSet) {
    oStream << location << index << locationValue << ".QuoteState="
            << StringUtils::URLEncode(
                   CapacityReservationModificationQuoteStateMapper::GetNameForCapacityReservationModificationQuoteState(m_quoteState))
            << "&";
  }

  if (m_currentConfigurationHasBeenSet) {
    Aws::StringStream currentConfigurationLocationAndMemberSs;
    currentConfigurationLocationAndMemberSs << location << index << locationValue << ".CurrentConfiguration";
    m_currentConfiguration.OutputToStream(oStream, currentConfigurationLocationAndMemberSs.str().c_str());
  }

  if (m_modificationTermsHasBeenSet) {
    Aws::StringStream modificationTermsLocationAndMemberSs;
    modificationTermsLocationAndMemberSs << location << index << locationValue << ".ModificationTerms";
    m_modificationTerms.OutputToStream(oStream, modificationTermsLocationAndMemberSs.str().c_str());
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

void CapacityReservationModificationQuote::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_capacityReservationModificationQuoteIdHasBeenSet) {
    oStream << location
            << ".CapacityReservationModificationQuoteId=" << StringUtils::URLEncode(m_capacityReservationModificationQuoteId.c_str())
            << "&";
  }
  if (m_capacityReservationIdHasBeenSet) {
    oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }
  if (m_createTimeHasBeenSet) {
    oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_expirationTimeHasBeenSet) {
    oStream << location
            << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_quoteStateHasBeenSet) {
    oStream << location << ".QuoteState="
            << StringUtils::URLEncode(
                   CapacityReservationModificationQuoteStateMapper::GetNameForCapacityReservationModificationQuoteState(m_quoteState))
            << "&";
  }
  if (m_currentConfigurationHasBeenSet) {
    Aws::String currentConfigurationLocationAndMember(location);
    currentConfigurationLocationAndMember += ".CurrentConfiguration";
    m_currentConfiguration.OutputToStream(oStream, currentConfigurationLocationAndMember.c_str());
  }
  if (m_modificationTermsHasBeenSet) {
    Aws::String modificationTermsLocationAndMember(location);
    modificationTermsLocationAndMember += ".ModificationTerms";
    m_modificationTerms.OutputToStream(oStream, modificationTermsLocationAndMember.c_str());
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
