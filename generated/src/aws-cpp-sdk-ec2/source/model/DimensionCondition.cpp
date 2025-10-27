/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/DimensionCondition.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

DimensionCondition::DimensionCondition(const XmlNode& xmlNode) { *this = xmlNode; }

DimensionCondition& DimensionCondition::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode dimensionNode = resultNode.FirstChild("Dimension");
    if (!dimensionNode.IsNull()) {
      m_dimension = FilterByDimensionMapper::GetFilterByDimensionForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dimensionNode.GetText()).c_str()));
      m_dimensionHasBeenSet = true;
    }
    XmlNode comparisonNode = resultNode.FirstChild("Comparison");
    if (!comparisonNode.IsNull()) {
      m_comparison = ComparisonMapper::GetComparisonForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(comparisonNode.GetText()).c_str()));
      m_comparisonHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Value");
    if (!valuesNode.IsNull()) {
      XmlNode valuesMember = valuesNode.FirstChild("item");
      m_valuesHasBeenSet = !valuesMember.IsNull();
      while (!valuesMember.IsNull()) {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("item");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void DimensionCondition::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_dimensionHasBeenSet) {
    oStream << location << index << locationValue
            << ".Dimension=" << StringUtils::URLEncode(FilterByDimensionMapper::GetNameForFilterByDimension(m_dimension)) << "&";
  }

  if (m_comparisonHasBeenSet) {
    oStream << location << index << locationValue
            << ".Comparison=" << StringUtils::URLEncode(ComparisonMapper::GetNameForComparison(m_comparison)) << "&";
  }

  if (m_valuesHasBeenSet) {
    unsigned valuesIdx = 1;
    for (auto& item : m_values) {
      oStream << location << index << locationValue << ".Value." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

void DimensionCondition::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_dimensionHasBeenSet) {
    oStream << location << ".Dimension=" << StringUtils::URLEncode(FilterByDimensionMapper::GetNameForFilterByDimension(m_dimension))
            << "&";
  }
  if (m_comparisonHasBeenSet) {
    oStream << location << ".Comparison=" << StringUtils::URLEncode(ComparisonMapper::GetNameForComparison(m_comparison)) << "&";
  }
  if (m_valuesHasBeenSet) {
    unsigned valuesIdx = 1;
    for (auto& item : m_values) {
      oStream << location << ".Value." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
