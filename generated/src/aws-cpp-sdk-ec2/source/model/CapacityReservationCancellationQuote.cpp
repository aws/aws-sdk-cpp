/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/CapacityReservationCancellationQuote.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

CapacityReservationCancellationQuote::CapacityReservationCancellationQuote(const XmlNode& xmlNode) { *this = xmlNode; }

CapacityReservationCancellationQuote& CapacityReservationCancellationQuote::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode capacityReservationCancellationQuoteIdNode = resultNode.FirstChild("capacityReservationCancellationQuoteId");
    if (!capacityReservationCancellationQuoteIdNode.IsNull()) {
      m_capacityReservationCancellationQuoteId =
          Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationCancellationQuoteIdNode.GetText());
      m_capacityReservationCancellationQuoteIdHasBeenSet = true;
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
      m_quoteState = CapacityReservationCancellationQuoteStateMapper::GetCapacityReservationCancellationQuoteStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(quoteStateNode.GetText()).c_str()));
      m_quoteStateHasBeenSet = true;
    }
    XmlNode currentConfigurationNode = resultNode.FirstChild("currentConfiguration");
    if (!currentConfigurationNode.IsNull()) {
      m_currentConfiguration = currentConfigurationNode;
      m_currentConfigurationHasBeenSet = true;
    }
    XmlNode cancellationTermsNode = resultNode.FirstChild("cancellationTermSet");
    if (!cancellationTermsNode.IsNull()) {
      XmlNode cancellationTermsMember = cancellationTermsNode.FirstChild("item");
      m_cancellationTermsHasBeenSet = !cancellationTermsMember.IsNull();
      while (!cancellationTermsMember.IsNull()) {
        m_cancellationTerms.push_back(cancellationTermsMember);
        cancellationTermsMember = cancellationTermsMember.NextNode("item");
      }

      m_cancellationTermsHasBeenSet = true;
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

void CapacityReservationCancellationQuote::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                          const char* locationValue) const {
  if (m_capacityReservationCancellationQuoteIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".CapacityReservationCancellationQuoteId=" << StringUtils::URLEncode(m_capacityReservationCancellationQuoteId.c_str())
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
                   CapacityReservationCancellationQuoteStateMapper::GetNameForCapacityReservationCancellationQuoteState(m_quoteState))
            << "&";
  }

  if (m_currentConfigurationHasBeenSet) {
    Aws::StringStream currentConfigurationLocationAndMemberSs;
    currentConfigurationLocationAndMemberSs << location << index << locationValue << ".CurrentConfiguration";
    m_currentConfiguration.OutputToStream(oStream, currentConfigurationLocationAndMemberSs.str().c_str());
  }

  if (m_cancellationTermsHasBeenSet) {
    unsigned cancellationTermsIdx = 1;
    for (auto& item : m_cancellationTerms) {
      Aws::StringStream cancellationTermsSs;
      cancellationTermsSs << location << index << locationValue << ".CancellationTermSet." << cancellationTermsIdx++;
      item.OutputToStream(oStream, cancellationTermsSs.str().c_str());
    }
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

void CapacityReservationCancellationQuote::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_capacityReservationCancellationQuoteIdHasBeenSet) {
    oStream << location
            << ".CapacityReservationCancellationQuoteId=" << StringUtils::URLEncode(m_capacityReservationCancellationQuoteId.c_str())
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
                   CapacityReservationCancellationQuoteStateMapper::GetNameForCapacityReservationCancellationQuoteState(m_quoteState))
            << "&";
  }
  if (m_currentConfigurationHasBeenSet) {
    Aws::String currentConfigurationLocationAndMember(location);
    currentConfigurationLocationAndMember += ".CurrentConfiguration";
    m_currentConfiguration.OutputToStream(oStream, currentConfigurationLocationAndMember.c_str());
  }
  if (m_cancellationTermsHasBeenSet) {
    unsigned cancellationTermsIdx = 1;
    for (auto& item : m_cancellationTerms) {
      Aws::StringStream cancellationTermsSs;
      cancellationTermsSs << location << ".CancellationTermSet." << cancellationTermsIdx++;
      item.OutputToStream(oStream, cancellationTermsSs.str().c_str());
    }
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
