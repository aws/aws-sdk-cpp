/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The Amazon SageMaker run configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SageMakerRunConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class SageMakerRunConfigurationOutput
  {
  public:
    AWS_DATAZONE_API SageMakerRunConfigurationOutput() = default;
    AWS_DATAZONE_API SageMakerRunConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SageMakerRunConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon SageMaker account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    SageMakerRunConfigurationOutput& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SageMaker Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    SageMakerRunConfigurationOutput& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tracking assets of the Amazon SageMaker.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTrackingAssets() const { return m_trackingAssets; }
    inline bool TrackingAssetsHasBeenSet() const { return m_trackingAssetsHasBeenSet; }
    template<typename TrackingAssetsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetTrackingAssets(TrackingAssetsT&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets = std::forward<TrackingAssetsT>(value); }
    template<typename TrackingAssetsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    SageMakerRunConfigurationOutput& WithTrackingAssets(TrackingAssetsT&& value) { SetTrackingAssets(std::forward<TrackingAssetsT>(value)); return *this;}
    template<typename TrackingAssetsKeyT = Aws::String, typename TrackingAssetsValueT = Aws::Vector<Aws::String>>
    SageMakerRunConfigurationOutput& AddTrackingAssets(TrackingAssetsKeyT&& key, TrackingAssetsValueT&& value) {
      m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(std::forward<TrackingAssetsKeyT>(key), std::forward<TrackingAssetsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_trackingAssets;
    bool m_trackingAssetsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
