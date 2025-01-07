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
    AWS_DATAZONE_API SageMakerRunConfigurationOutput();
    AWS_DATAZONE_API SageMakerRunConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SageMakerRunConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon SageMaker account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline SageMakerRunConfigurationOutput& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline SageMakerRunConfigurationOutput& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline SageMakerRunConfigurationOutput& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SageMaker Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline SageMakerRunConfigurationOutput& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline SageMakerRunConfigurationOutput& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline SageMakerRunConfigurationOutput& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tracking assets of the Amazon SageMaker.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTrackingAssets() const{ return m_trackingAssets; }
    inline bool TrackingAssetsHasBeenSet() const { return m_trackingAssetsHasBeenSet; }
    inline void SetTrackingAssets(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets = value; }
    inline void SetTrackingAssets(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets = std::move(value); }
    inline SageMakerRunConfigurationOutput& WithTrackingAssets(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetTrackingAssets(value); return *this;}
    inline SageMakerRunConfigurationOutput& WithTrackingAssets(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetTrackingAssets(std::move(value)); return *this;}
    inline SageMakerRunConfigurationOutput& AddTrackingAssets(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(key, value); return *this; }
    inline SageMakerRunConfigurationOutput& AddTrackingAssets(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(std::move(key), value); return *this; }
    inline SageMakerRunConfigurationOutput& AddTrackingAssets(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(key, std::move(value)); return *this; }
    inline SageMakerRunConfigurationOutput& AddTrackingAssets(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(std::move(key), std::move(value)); return *this; }
    inline SageMakerRunConfigurationOutput& AddTrackingAssets(const char* key, Aws::Vector<Aws::String>&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(key, std::move(value)); return *this; }
    inline SageMakerRunConfigurationOutput& AddTrackingAssets(const char* key, const Aws::Vector<Aws::String>& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(key, value); return *this; }
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
