/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The MLflow properties of a connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MlflowPropertiesOutput">AWS
 * API Reference</a></p>
 */
class MlflowPropertiesOutput {
 public:
  AWS_DATAZONE_API MlflowPropertiesOutput() = default;
  AWS_DATAZONE_API MlflowPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API MlflowPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tracking server ARN as part of the MLflow properties of a connection.</p>
   */
  inline const Aws::String& GetTrackingServerArn() const { return m_trackingServerArn; }
  inline bool TrackingServerArnHasBeenSet() const { return m_trackingServerArnHasBeenSet; }
  template <typename TrackingServerArnT = Aws::String>
  void SetTrackingServerArn(TrackingServerArnT&& value) {
    m_trackingServerArnHasBeenSet = true;
    m_trackingServerArn = std::forward<TrackingServerArnT>(value);
  }
  template <typename TrackingServerArnT = Aws::String>
  MlflowPropertiesOutput& WithTrackingServerArn(TrackingServerArnT&& value) {
    SetTrackingServerArn(std::forward<TrackingServerArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trackingServerArn;
  bool m_trackingServerArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
