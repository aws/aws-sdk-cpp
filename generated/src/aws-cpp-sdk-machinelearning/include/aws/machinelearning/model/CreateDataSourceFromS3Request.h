/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/S3DataSpec.h>
#include <utility>

namespace Aws
{
namespace MachineLearning
{
namespace Model
{

  /**
   */
  class CreateDataSourceFromS3Request : public MachineLearningRequest
  {
  public:
    AWS_MACHINELEARNING_API CreateDataSourceFromS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSourceFromS3"; }

    AWS_MACHINELEARNING_API Aws::String SerializePayload() const override;

    AWS_MACHINELEARNING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline CreateDataSourceFromS3Request& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline CreateDataSourceFromS3Request& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline CreateDataSourceFromS3Request& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }
    inline CreateDataSourceFromS3Request& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}
    inline CreateDataSourceFromS3Request& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}
    inline CreateDataSourceFromS3Request& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data specification of a <code>DataSource</code>:</p> <ul> <li>
     * <p>DataLocationS3 - The Amazon S3 location of the observation data.</p> </li>
     * <li> <p>DataSchemaLocationS3 - The Amazon S3 location of the
     * <code>DataSchema</code>.</p> </li> <li> <p>DataSchema - A JSON string
     * representing the schema. This is not required if <code>DataSchemaUri</code> is
     * specified. </p> </li> <li> <p>DataRearrangement - A JSON string that represents
     * the splitting and rearrangement requirements for the <code>Datasource</code>.
     * </p> <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline const S3DataSpec& GetDataSpec() const{ return m_dataSpec; }
    inline bool DataSpecHasBeenSet() const { return m_dataSpecHasBeenSet; }
    inline void SetDataSpec(const S3DataSpec& value) { m_dataSpecHasBeenSet = true; m_dataSpec = value; }
    inline void SetDataSpec(S3DataSpec&& value) { m_dataSpecHasBeenSet = true; m_dataSpec = std::move(value); }
    inline CreateDataSourceFromS3Request& WithDataSpec(const S3DataSpec& value) { SetDataSpec(value); return *this;}
    inline CreateDataSourceFromS3Request& WithDataSpec(S3DataSpec&& value) { SetDataSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the <code/>DataSource<code/>
     * needs to be used for <code>MLModel</code> training.</p>
     */
    inline bool GetComputeStatistics() const{ return m_computeStatistics; }
    inline bool ComputeStatisticsHasBeenSet() const { return m_computeStatisticsHasBeenSet; }
    inline void SetComputeStatistics(bool value) { m_computeStatisticsHasBeenSet = true; m_computeStatistics = value; }
    inline CreateDataSourceFromS3Request& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    S3DataSpec m_dataSpec;
    bool m_dataSpecHasBeenSet = false;

    bool m_computeStatistics;
    bool m_computeStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
