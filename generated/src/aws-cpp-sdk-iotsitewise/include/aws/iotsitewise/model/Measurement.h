/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/MeasurementProcessingConfig.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an asset measurement property. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-properties.html#measurements">Measurements</a>
   * in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Measurement">AWS
   * API Reference</a></p>
   */
  class Measurement
  {
  public:
    AWS_IOTSITEWISE_API Measurement();
    AWS_IOTSITEWISE_API Measurement(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Measurement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The processing configuration for the given measurement property. You can
     * configure measurements to be kept at the edge or forwarded to the Amazon Web
     * Services Cloud. By default, measurements are forwarded to the cloud.</p>
     */
    inline const MeasurementProcessingConfig& GetProcessingConfig() const{ return m_processingConfig; }

    /**
     * <p>The processing configuration for the given measurement property. You can
     * configure measurements to be kept at the edge or forwarded to the Amazon Web
     * Services Cloud. By default, measurements are forwarded to the cloud.</p>
     */
    inline bool ProcessingConfigHasBeenSet() const { return m_processingConfigHasBeenSet; }

    /**
     * <p>The processing configuration for the given measurement property. You can
     * configure measurements to be kept at the edge or forwarded to the Amazon Web
     * Services Cloud. By default, measurements are forwarded to the cloud.</p>
     */
    inline void SetProcessingConfig(const MeasurementProcessingConfig& value) { m_processingConfigHasBeenSet = true; m_processingConfig = value; }

    /**
     * <p>The processing configuration for the given measurement property. You can
     * configure measurements to be kept at the edge or forwarded to the Amazon Web
     * Services Cloud. By default, measurements are forwarded to the cloud.</p>
     */
    inline void SetProcessingConfig(MeasurementProcessingConfig&& value) { m_processingConfigHasBeenSet = true; m_processingConfig = std::move(value); }

    /**
     * <p>The processing configuration for the given measurement property. You can
     * configure measurements to be kept at the edge or forwarded to the Amazon Web
     * Services Cloud. By default, measurements are forwarded to the cloud.</p>
     */
    inline Measurement& WithProcessingConfig(const MeasurementProcessingConfig& value) { SetProcessingConfig(value); return *this;}

    /**
     * <p>The processing configuration for the given measurement property. You can
     * configure measurements to be kept at the edge or forwarded to the Amazon Web
     * Services Cloud. By default, measurements are forwarded to the cloud.</p>
     */
    inline Measurement& WithProcessingConfig(MeasurementProcessingConfig&& value) { SetProcessingConfig(std::move(value)); return *this;}

  private:

    MeasurementProcessingConfig m_processingConfig;
    bool m_processingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
