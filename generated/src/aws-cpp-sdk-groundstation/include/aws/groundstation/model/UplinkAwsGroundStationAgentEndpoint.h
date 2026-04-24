/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/UplinkDataflowDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Definition for an uplink agent endpoint</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UplinkAwsGroundStationAgentEndpoint">AWS
 * API Reference</a></p>
 */
class UplinkAwsGroundStationAgentEndpoint {
 public:
  AWS_GROUNDSTATION_API UplinkAwsGroundStationAgentEndpoint() = default;
  AWS_GROUNDSTATION_API UplinkAwsGroundStationAgentEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API UplinkAwsGroundStationAgentEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Uplink dataflow endpoint name</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UplinkAwsGroundStationAgentEndpoint& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Dataflow details for the uplink endpoint</p>
   */
  inline const UplinkDataflowDetails& GetDataflowDetails() const { return m_dataflowDetails; }
  inline bool DataflowDetailsHasBeenSet() const { return m_dataflowDetailsHasBeenSet; }
  template <typename DataflowDetailsT = UplinkDataflowDetails>
  void SetDataflowDetails(DataflowDetailsT&& value) {
    m_dataflowDetailsHasBeenSet = true;
    m_dataflowDetails = std::forward<DataflowDetailsT>(value);
  }
  template <typename DataflowDetailsT = UplinkDataflowDetails>
  UplinkAwsGroundStationAgentEndpoint& WithDataflowDetails(DataflowDetailsT&& value) {
    SetDataflowDetails(std::forward<DataflowDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  UplinkDataflowDetails m_dataflowDetails;
  bool m_nameHasBeenSet = false;
  bool m_dataflowDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
