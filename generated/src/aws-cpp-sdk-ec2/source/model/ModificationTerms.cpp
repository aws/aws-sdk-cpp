/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ModificationTerms.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ModificationTerms::ModificationTerms(const XmlNode& xmlNode) { *this = xmlNode; }

ModificationTerms& ModificationTerms::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode reservationUpdateNode = resultNode.FirstChild("reservationUpdate");
    if (!reservationUpdateNode.IsNull()) {
      m_reservationUpdate = reservationUpdateNode;
      m_reservationUpdateHasBeenSet = true;
    }
  }

  return *this;
}

void ModificationTerms::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_reservationUpdateHasBeenSet) {
    Aws::StringStream reservationUpdateLocationAndMemberSs;
    reservationUpdateLocationAndMemberSs << location << index << locationValue << ".ReservationUpdate";
    m_reservationUpdate.OutputToStream(oStream, reservationUpdateLocationAndMemberSs.str().c_str());
  }
}

void ModificationTerms::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_reservationUpdateHasBeenSet) {
    Aws::String reservationUpdateLocationAndMember(location);
    reservationUpdateLocationAndMember += ".ReservationUpdate";
    m_reservationUpdate.OutputToStream(oStream, reservationUpdateLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
