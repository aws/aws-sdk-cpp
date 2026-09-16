/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElasticBeanstalk {
namespace Model {

/**
 * <p>Describes the Amazon EKS cluster that an environment runs on.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/Cluster">AWS
 * API Reference</a></p>
 */
class Cluster {
 public:
  AWS_ELASTICBEANSTALK_API Cluster() = default;
  AWS_ELASTICBEANSTALK_API Cluster(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICBEANSTALK_API Cluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                               const char* locationValue) const;
  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon EKS cluster.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  Cluster& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;
  bool m_clusterArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
