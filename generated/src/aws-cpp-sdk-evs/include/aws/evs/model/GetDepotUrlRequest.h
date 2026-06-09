/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVSRequest.h>
#include <aws/evs/EVS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EVS {
namespace Model {

/**
 */
class GetDepotUrlRequest : public EVSRequest {
 public:
  AWS_EVS_API GetDepotUrlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDepotUrl"; }

  AWS_EVS_API Aws::String SerializePayload() const override;

  AWS_EVS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique ID of the Amazon EVS environment to get the depot URL for.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  GetDepotUrlRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Revokes the current authentication token and returns a new depot URL with a
   * new token. Previously issued depot URLs will stop working within 5 minutes of
   * rotation.</p>
   */
  inline bool GetRotate() const { return m_rotate; }
  inline bool RotateHasBeenSet() const { return m_rotateHasBeenSet; }
  inline void SetRotate(bool value) {
    m_rotateHasBeenSet = true;
    m_rotate = value;
  }
  inline GetDepotUrlRequest& WithRotate(bool value) {
    SetRotate(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  bool m_rotate{false};
  bool m_environmentIdHasBeenSet = false;
  bool m_rotateHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
