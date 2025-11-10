/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/CreateEndpointDetails.h>

#include <utility>

namespace Aws {
namespace GroundStation {
namespace Model {

/**
 */
class CreateDataflowEndpointGroupV2Request : public GroundStationRequest {
 public:
  AWS_GROUNDSTATION_API CreateDataflowEndpointGroupV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataflowEndpointGroupV2"; }

  AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Dataflow endpoint group's endpoint definitions</p>
   */
  inline const Aws::Vector<CreateEndpointDetails>& GetEndpoints() const { return m_endpoints; }
  inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
  template <typename EndpointsT = Aws::Vector<CreateEndpointDetails>>
  void SetEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints = std::forward<EndpointsT>(value);
  }
  template <typename EndpointsT = Aws::Vector<CreateEndpointDetails>>
  CreateDataflowEndpointGroupV2Request& WithEndpoints(EndpointsT&& value) {
    SetEndpoints(std::forward<EndpointsT>(value));
    return *this;
  }
  template <typename EndpointsT = CreateEndpointDetails>
  CreateDataflowEndpointGroupV2Request& AddEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints.emplace_back(std::forward<EndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amount of time, in seconds, before a contact starts that the Ground Station
   * Dataflow Endpoint Group will be in a <code>PREPASS</code> state. A Ground
   * Station Dataflow Endpoint Group State Change event will be emitted when the
   * Dataflow Endpoint Group enters and exits the <code>PREPASS</code> state.</p>
   */
  inline int GetContactPrePassDurationSeconds() const { return m_contactPrePassDurationSeconds; }
  inline bool ContactPrePassDurationSecondsHasBeenSet() const { return m_contactPrePassDurationSecondsHasBeenSet; }
  inline void SetContactPrePassDurationSeconds(int value) {
    m_contactPrePassDurationSecondsHasBeenSet = true;
    m_contactPrePassDurationSeconds = value;
  }
  inline CreateDataflowEndpointGroupV2Request& WithContactPrePassDurationSeconds(int value) {
    SetContactPrePassDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amount of time, in seconds, after a contact ends that the Ground Station
   * Dataflow Endpoint Group will be in a <code>POSTPASS</code> state. A Ground
   * Station Dataflow Endpoint Group State Change event will be emitted when the
   * Dataflow Endpoint Group enters and exits the <code>POSTPASS</code> state.</p>
   */
  inline int GetContactPostPassDurationSeconds() const { return m_contactPostPassDurationSeconds; }
  inline bool ContactPostPassDurationSecondsHasBeenSet() const { return m_contactPostPassDurationSecondsHasBeenSet; }
  inline void SetContactPostPassDurationSeconds(int value) {
    m_contactPostPassDurationSecondsHasBeenSet = true;
    m_contactPostPassDurationSeconds = value;
  }
  inline CreateDataflowEndpointGroupV2Request& WithContactPostPassDurationSeconds(int value) {
    SetContactPostPassDurationSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags of a V2 dataflow endpoint group.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDataflowEndpointGroupV2Request& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDataflowEndpointGroupV2Request& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CreateEndpointDetails> m_endpoints;
  bool m_endpointsHasBeenSet = false;

  int m_contactPrePassDurationSeconds{0};
  bool m_contactPrePassDurationSecondsHasBeenSet = false;

  int m_contactPostPassDurationSeconds{0};
  bool m_contactPostPassDurationSecondsHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
