/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/HealthCheckPathDestinationResponseObject.h>
#include <aws/ec2/model/HealthCheckPathSourceResponseObject.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a health check path for an application status check.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HealthCheckPathResponseObject">AWS
 * API Reference</a></p>
 */
class HealthCheckPathResponseObject {
 public:
  AWS_EC2_API HealthCheckPathResponseObject() = default;
  AWS_EC2_API HealthCheckPathResponseObject(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API HealthCheckPathResponseObject& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The source for the health check path.</p>
   */
  inline const HealthCheckPathSourceResponseObject& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = HealthCheckPathSourceResponseObject>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = HealthCheckPathSourceResponseObject>
  HealthCheckPathResponseObject& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destinations for the health check path.</p>
   */
  inline const Aws::Vector<HealthCheckPathDestinationResponseObject>& GetDestinations() const { return m_destinations; }
  inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
  template <typename DestinationsT = Aws::Vector<HealthCheckPathDestinationResponseObject>>
  void SetDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations = std::forward<DestinationsT>(value);
  }
  template <typename DestinationsT = Aws::Vector<HealthCheckPathDestinationResponseObject>>
  HealthCheckPathResponseObject& WithDestinations(DestinationsT&& value) {
    SetDestinations(std::forward<DestinationsT>(value));
    return *this;
  }
  template <typename DestinationsT = HealthCheckPathDestinationResponseObject>
  HealthCheckPathResponseObject& AddDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations.emplace_back(std::forward<DestinationsT>(value));
    return *this;
  }
  ///@}
 private:
  HealthCheckPathSourceResponseObject m_source;

  Aws::Vector<HealthCheckPathDestinationResponseObject> m_destinations;
  bool m_sourceHasBeenSet = false;
  bool m_destinationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
