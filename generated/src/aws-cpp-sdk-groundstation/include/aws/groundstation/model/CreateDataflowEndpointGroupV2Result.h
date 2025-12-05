/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {
class CreateDataflowEndpointGroupV2Result {
 public:
  AWS_GROUNDSTATION_API CreateDataflowEndpointGroupV2Result() = default;
  AWS_GROUNDSTATION_API CreateDataflowEndpointGroupV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GROUNDSTATION_API CreateDataflowEndpointGroupV2Result& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Dataflow endpoint group ID</p>
   */
  inline const Aws::String& GetDataflowEndpointGroupId() const { return m_dataflowEndpointGroupId; }
  template <typename DataflowEndpointGroupIdT = Aws::String>
  void SetDataflowEndpointGroupId(DataflowEndpointGroupIdT&& value) {
    m_dataflowEndpointGroupIdHasBeenSet = true;
    m_dataflowEndpointGroupId = std::forward<DataflowEndpointGroupIdT>(value);
  }
  template <typename DataflowEndpointGroupIdT = Aws::String>
  CreateDataflowEndpointGroupV2Result& WithDataflowEndpointGroupId(DataflowEndpointGroupIdT&& value) {
    SetDataflowEndpointGroupId(std::forward<DataflowEndpointGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateDataflowEndpointGroupV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataflowEndpointGroupId;

  Aws::String m_requestId;
  bool m_dataflowEndpointGroupIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
