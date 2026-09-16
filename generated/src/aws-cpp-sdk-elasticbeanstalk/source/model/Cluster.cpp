/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticbeanstalk/model/Cluster.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {

Cluster::Cluster(const XmlNode& xmlNode) { *this = xmlNode; }

Cluster& Cluster::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode clusterArnNode = resultNode.FirstChild("ClusterArn");
    if (!clusterArnNode.IsNull()) {
      m_clusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(clusterArnNode.GetText());
      m_clusterArnHasBeenSet = true;
    }
  }

  return *this;
}

void Cluster::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_clusterArnHasBeenSet) {
    oStream << location << index << locationValue << ".ClusterArn=" << StringUtils::URLEncode(m_clusterArn.c_str()) << "&";
  }
}

void Cluster::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_clusterArnHasBeenSet) {
    oStream << location << ".ClusterArn=" << StringUtils::URLEncode(m_clusterArn.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
