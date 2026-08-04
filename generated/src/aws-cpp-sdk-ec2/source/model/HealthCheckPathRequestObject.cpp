/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/HealthCheckPathRequestObject.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

HealthCheckPathRequestObject::HealthCheckPathRequestObject(const XmlNode& xmlNode) { *this = xmlNode; }

HealthCheckPathRequestObject& HealthCheckPathRequestObject::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sourceNode = resultNode.FirstChild("Source");
    if (!sourceNode.IsNull()) {
      m_source = sourceNode;
      m_sourceHasBeenSet = true;
    }
    XmlNode destinationsNode = resultNode.FirstChild("Destination");
    if (!destinationsNode.IsNull()) {
      XmlNode destinationsMember = destinationsNode.FirstChild("item");
      m_destinationsHasBeenSet = !destinationsMember.IsNull();
      while (!destinationsMember.IsNull()) {
        m_destinations.push_back(destinationsMember);
        destinationsMember = destinationsMember.NextNode("item");
      }

      m_destinationsHasBeenSet = true;
    }
  }

  return *this;
}

void HealthCheckPathRequestObject::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                  const char* locationValue) const {
  if (m_sourceHasBeenSet) {
    Aws::StringStream sourceLocationAndMemberSs;
    sourceLocationAndMemberSs << location << index << locationValue << ".Source";
    m_source.OutputToStream(oStream, sourceLocationAndMemberSs.str().c_str());
  }

  if (m_destinationsHasBeenSet) {
    unsigned destinationsIdx = 1;
    for (auto& item : m_destinations) {
      Aws::StringStream destinationsSs;
      destinationsSs << location << index << locationValue << ".Destination." << destinationsIdx++;
      item.OutputToStream(oStream, destinationsSs.str().c_str());
    }
  }
}

void HealthCheckPathRequestObject::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_sourceHasBeenSet) {
    Aws::String sourceLocationAndMember(location);
    sourceLocationAndMember += ".Source";
    m_source.OutputToStream(oStream, sourceLocationAndMember.c_str());
  }
  if (m_destinationsHasBeenSet) {
    unsigned destinationsIdx = 1;
    for (auto& item : m_destinations) {
      Aws::StringStream destinationsSs;
      destinationsSs << location << ".Destination." << destinationsIdx++;
      item.OutputToStream(oStream, destinationsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
