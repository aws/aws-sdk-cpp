/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class ListSensorStatisticsRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListSensorStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSensorStatistics"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the dataset associated with the list of Sensor Statistics. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p> The name of the dataset associated with the list of Sensor Statistics. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p> The name of the dataset associated with the list of Sensor Statistics. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p> The name of the dataset associated with the list of Sensor Statistics. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p> The name of the dataset associated with the list of Sensor Statistics. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p> The name of the dataset associated with the list of Sensor Statistics. </p>
     */
    inline ListSensorStatisticsRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p> The name of the dataset associated with the list of Sensor Statistics. </p>
     */
    inline ListSensorStatisticsRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p> The name of the dataset associated with the list of Sensor Statistics. </p>
     */
    inline ListSensorStatisticsRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p> The ingestion job id associated with the list of Sensor Statistics. To get
     * sensor statistics for a particular ingestion job id, both dataset name and
     * ingestion job id must be submitted as inputs. </p>
     */
    inline const Aws::String& GetIngestionJobId() const{ return m_ingestionJobId; }

    /**
     * <p> The ingestion job id associated with the list of Sensor Statistics. To get
     * sensor statistics for a particular ingestion job id, both dataset name and
     * ingestion job id must be submitted as inputs. </p>
     */
    inline bool IngestionJobIdHasBeenSet() const { return m_ingestionJobIdHasBeenSet; }

    /**
     * <p> The ingestion job id associated with the list of Sensor Statistics. To get
     * sensor statistics for a particular ingestion job id, both dataset name and
     * ingestion job id must be submitted as inputs. </p>
     */
    inline void SetIngestionJobId(const Aws::String& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = value; }

    /**
     * <p> The ingestion job id associated with the list of Sensor Statistics. To get
     * sensor statistics for a particular ingestion job id, both dataset name and
     * ingestion job id must be submitted as inputs. </p>
     */
    inline void SetIngestionJobId(Aws::String&& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = std::move(value); }

    /**
     * <p> The ingestion job id associated with the list of Sensor Statistics. To get
     * sensor statistics for a particular ingestion job id, both dataset name and
     * ingestion job id must be submitted as inputs. </p>
     */
    inline void SetIngestionJobId(const char* value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId.assign(value); }

    /**
     * <p> The ingestion job id associated with the list of Sensor Statistics. To get
     * sensor statistics for a particular ingestion job id, both dataset name and
     * ingestion job id must be submitted as inputs. </p>
     */
    inline ListSensorStatisticsRequest& WithIngestionJobId(const Aws::String& value) { SetIngestionJobId(value); return *this;}

    /**
     * <p> The ingestion job id associated with the list of Sensor Statistics. To get
     * sensor statistics for a particular ingestion job id, both dataset name and
     * ingestion job id must be submitted as inputs. </p>
     */
    inline ListSensorStatisticsRequest& WithIngestionJobId(Aws::String&& value) { SetIngestionJobId(std::move(value)); return *this;}

    /**
     * <p> The ingestion job id associated with the list of Sensor Statistics. To get
     * sensor statistics for a particular ingestion job id, both dataset name and
     * ingestion job id must be submitted as inputs. </p>
     */
    inline ListSensorStatisticsRequest& WithIngestionJobId(const char* value) { SetIngestionJobId(value); return *this;}


    /**
     * <p>Specifies the maximum number of sensors for which to retrieve statistics.
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the maximum number of sensors for which to retrieve statistics.
     * </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the maximum number of sensors for which to retrieve statistics.
     * </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the maximum number of sensors for which to retrieve statistics.
     * </p>
     */
    inline ListSensorStatisticsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline ListSensorStatisticsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline ListSensorStatisticsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token indicating where to continue the listing of sensor
     * statistics. </p>
     */
    inline ListSensorStatisticsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_ingestionJobId;
    bool m_ingestionJobIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
