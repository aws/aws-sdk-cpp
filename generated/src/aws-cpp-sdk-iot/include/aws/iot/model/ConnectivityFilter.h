/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/FleetIndexingApi.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>Provides connectivity filter selections for the fleet indexing
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ConnectivityFilter">AWS
 * API Reference</a></p>
 */
class ConnectivityFilter {
 public:
  AWS_IOT_API ConnectivityFilter() = default;
  AWS_IOT_API ConnectivityFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API ConnectivityFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of fleet indexing APIs for which to enable socket information
   * retrieval. Currently, the only supported value is
   * <code>GET_THING_CONNECTIVITY_DATA</code>.</p>
   */
  inline const Aws::Vector<FleetIndexingApi>& GetIncludeSocketInformation() const { return m_includeSocketInformation; }
  inline bool IncludeSocketInformationHasBeenSet() const { return m_includeSocketInformationHasBeenSet; }
  template <typename IncludeSocketInformationT = Aws::Vector<FleetIndexingApi>>
  void SetIncludeSocketInformation(IncludeSocketInformationT&& value) {
    m_includeSocketInformationHasBeenSet = true;
    m_includeSocketInformation = std::forward<IncludeSocketInformationT>(value);
  }
  template <typename IncludeSocketInformationT = Aws::Vector<FleetIndexingApi>>
  ConnectivityFilter& WithIncludeSocketInformation(IncludeSocketInformationT&& value) {
    SetIncludeSocketInformation(std::forward<IncludeSocketInformationT>(value));
    return *this;
  }
  inline ConnectivityFilter& AddIncludeSocketInformation(FleetIndexingApi value) {
    m_includeSocketInformationHasBeenSet = true;
    m_includeSocketInformation.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FleetIndexingApi> m_includeSocketInformation;
  bool m_includeSocketInformationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
