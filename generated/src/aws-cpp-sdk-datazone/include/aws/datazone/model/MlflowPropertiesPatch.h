/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The MLflow properties of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MlflowPropertiesPatch">AWS
   * API Reference</a></p>
   */
  class MlflowPropertiesPatch
  {
  public:
    AWS_DATAZONE_API MlflowPropertiesPatch() = default;
    AWS_DATAZONE_API MlflowPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MlflowPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tracking server ARN as part of the MLflow properties of a connection.</p>
     */
    inline const Aws::String& GetTrackingServerArn() const { return m_trackingServerArn; }
    inline bool TrackingServerArnHasBeenSet() const { return m_trackingServerArnHasBeenSet; }
    template<typename TrackingServerArnT = Aws::String>
    void SetTrackingServerArn(TrackingServerArnT&& value) { m_trackingServerArnHasBeenSet = true; m_trackingServerArn = std::forward<TrackingServerArnT>(value); }
    template<typename TrackingServerArnT = Aws::String>
    MlflowPropertiesPatch& WithTrackingServerArn(TrackingServerArnT&& value) { SetTrackingServerArn(std::forward<TrackingServerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tracking server as part of the MLflow properties of a
     * connection.</p>
     */
    inline const Aws::String& GetTrackingServerName() const { return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    template<typename TrackingServerNameT = Aws::String>
    void SetTrackingServerName(TrackingServerNameT&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::forward<TrackingServerNameT>(value); }
    template<typename TrackingServerNameT = Aws::String>
    MlflowPropertiesPatch& WithTrackingServerName(TrackingServerNameT&& value) { SetTrackingServerName(std::forward<TrackingServerNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerArn;
    bool m_trackingServerArnHasBeenSet = false;

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
