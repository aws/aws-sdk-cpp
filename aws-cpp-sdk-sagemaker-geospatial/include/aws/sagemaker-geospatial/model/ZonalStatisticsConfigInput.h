/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/ZonalStatistics.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/ZonalStatisticsConfigInput">AWS
   * API Reference</a></p>
   */
  class ZonalStatisticsConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API ZonalStatisticsConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::Vector<ZonalStatistics>& GetStatistics() const{ return m_statistics; }

    /**
     * <p/>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStatistics(const Aws::Vector<ZonalStatistics>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p/>
     */
    inline void SetStatistics(Aws::Vector<ZonalStatistics>&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& WithStatistics(const Aws::Vector<ZonalStatistics>& value) { SetStatistics(value); return *this;}

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& WithStatistics(Aws::Vector<ZonalStatistics>&& value) { SetStatistics(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& AddStatistics(const ZonalStatistics& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& AddStatistics(ZonalStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetTargetBands() const{ return m_targetBands; }

    /**
     * <p/>
     */
    inline bool TargetBandsHasBeenSet() const { return m_targetBandsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetBands(const Aws::Vector<Aws::String>& value) { m_targetBandsHasBeenSet = true; m_targetBands = value; }

    /**
     * <p/>
     */
    inline void SetTargetBands(Aws::Vector<Aws::String>&& value) { m_targetBandsHasBeenSet = true; m_targetBands = std::move(value); }

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& WithTargetBands(const Aws::Vector<Aws::String>& value) { SetTargetBands(value); return *this;}

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& WithTargetBands(Aws::Vector<Aws::String>&& value) { SetTargetBands(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& AddTargetBands(const Aws::String& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& AddTargetBands(Aws::String&& value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& AddTargetBands(const char* value) { m_targetBandsHasBeenSet = true; m_targetBands.push_back(value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetZoneS3Path() const{ return m_zoneS3Path; }

    /**
     * <p/>
     */
    inline bool ZoneS3PathHasBeenSet() const { return m_zoneS3PathHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetZoneS3Path(const Aws::String& value) { m_zoneS3PathHasBeenSet = true; m_zoneS3Path = value; }

    /**
     * <p/>
     */
    inline void SetZoneS3Path(Aws::String&& value) { m_zoneS3PathHasBeenSet = true; m_zoneS3Path = std::move(value); }

    /**
     * <p/>
     */
    inline void SetZoneS3Path(const char* value) { m_zoneS3PathHasBeenSet = true; m_zoneS3Path.assign(value); }

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& WithZoneS3Path(const Aws::String& value) { SetZoneS3Path(value); return *this;}

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& WithZoneS3Path(Aws::String&& value) { SetZoneS3Path(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ZonalStatisticsConfigInput& WithZoneS3Path(const char* value) { SetZoneS3Path(value); return *this;}

  private:

    Aws::Vector<ZonalStatistics> m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetBands;
    bool m_targetBandsHasBeenSet = false;

    Aws::String m_zoneS3Path;
    bool m_zoneS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
