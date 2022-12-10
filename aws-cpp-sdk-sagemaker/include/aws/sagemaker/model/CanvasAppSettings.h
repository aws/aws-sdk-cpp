/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TimeSeriesForecastingSettings.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The SageMaker Canvas app settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CanvasAppSettings">AWS
   * API Reference</a></p>
   */
  class CanvasAppSettings
  {
  public:
    AWS_SAGEMAKER_API CanvasAppSettings();
    AWS_SAGEMAKER_API CanvasAppSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CanvasAppSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time series forecast settings for the Canvas app.</p>
     */
    inline const TimeSeriesForecastingSettings& GetTimeSeriesForecastingSettings() const{ return m_timeSeriesForecastingSettings; }

    /**
     * <p>Time series forecast settings for the Canvas app.</p>
     */
    inline bool TimeSeriesForecastingSettingsHasBeenSet() const { return m_timeSeriesForecastingSettingsHasBeenSet; }

    /**
     * <p>Time series forecast settings for the Canvas app.</p>
     */
    inline void SetTimeSeriesForecastingSettings(const TimeSeriesForecastingSettings& value) { m_timeSeriesForecastingSettingsHasBeenSet = true; m_timeSeriesForecastingSettings = value; }

    /**
     * <p>Time series forecast settings for the Canvas app.</p>
     */
    inline void SetTimeSeriesForecastingSettings(TimeSeriesForecastingSettings&& value) { m_timeSeriesForecastingSettingsHasBeenSet = true; m_timeSeriesForecastingSettings = std::move(value); }

    /**
     * <p>Time series forecast settings for the Canvas app.</p>
     */
    inline CanvasAppSettings& WithTimeSeriesForecastingSettings(const TimeSeriesForecastingSettings& value) { SetTimeSeriesForecastingSettings(value); return *this;}

    /**
     * <p>Time series forecast settings for the Canvas app.</p>
     */
    inline CanvasAppSettings& WithTimeSeriesForecastingSettings(TimeSeriesForecastingSettings&& value) { SetTimeSeriesForecastingSettings(std::move(value)); return *this;}

  private:

    TimeSeriesForecastingSettings m_timeSeriesForecastingSettings;
    bool m_timeSeriesForecastingSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
