/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SageMakerRunConfigurationInput">AWS
   * API Reference</a></p>
   */
  class SageMakerRunConfigurationInput
  {
  public:
    AWS_DATAZONE_API SageMakerRunConfigurationInput();
    AWS_DATAZONE_API SageMakerRunConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SageMakerRunConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tracking assets of the Amazon SageMaker run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTrackingAssets() const{ return m_trackingAssets; }
    inline bool TrackingAssetsHasBeenSet() const { return m_trackingAssetsHasBeenSet; }
    inline void SetTrackingAssets(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets = value; }
    inline void SetTrackingAssets(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets = std::move(value); }
    inline SageMakerRunConfigurationInput& WithTrackingAssets(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetTrackingAssets(value); return *this;}
    inline SageMakerRunConfigurationInput& WithTrackingAssets(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetTrackingAssets(std::move(value)); return *this;}
    inline SageMakerRunConfigurationInput& AddTrackingAssets(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(key, value); return *this; }
    inline SageMakerRunConfigurationInput& AddTrackingAssets(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(std::move(key), value); return *this; }
    inline SageMakerRunConfigurationInput& AddTrackingAssets(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(key, std::move(value)); return *this; }
    inline SageMakerRunConfigurationInput& AddTrackingAssets(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(std::move(key), std::move(value)); return *this; }
    inline SageMakerRunConfigurationInput& AddTrackingAssets(const char* key, Aws::Vector<Aws::String>&& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(key, std::move(value)); return *this; }
    inline SageMakerRunConfigurationInput& AddTrackingAssets(const char* key, const Aws::Vector<Aws::String>& value) { m_trackingAssetsHasBeenSet = true; m_trackingAssets.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_trackingAssets;
    bool m_trackingAssetsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
