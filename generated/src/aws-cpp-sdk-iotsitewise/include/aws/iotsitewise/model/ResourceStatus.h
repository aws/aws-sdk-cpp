/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ResourceError.h>
#include <aws/iotsitewise/model/ResourceState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Contains information about the current status of a resource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ResourceStatus">AWS
 * API Reference</a></p>
 */
class ResourceStatus {
 public:
  AWS_IOTSITEWISE_API ResourceStatus() = default;
  AWS_IOTSITEWISE_API ResourceStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ResourceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains associated error information, if any.</p>
   */
  inline const ResourceError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ResourceError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ResourceError>
  ResourceStatus& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the resource.</p>
   */
  inline ResourceState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ResourceState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ResourceStatus& WithState(ResourceState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  ResourceError m_error;

  ResourceState m_state{ResourceState::NOT_SET};
  bool m_errorHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
