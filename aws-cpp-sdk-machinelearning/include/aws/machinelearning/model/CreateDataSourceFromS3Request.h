/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MACHINELEARNING_API CreateDataSourceFromS3Request : public MachineLearningRequest
  {
  public:
    CreateDataSourceFromS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSourceFromS3"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromS3Request& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromS3Request& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied identifier that uniquely identifies the
     * <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromS3Request& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromS3Request& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromS3Request& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>DataSource</code>. </p>
     */
    inline CreateDataSourceFromS3Request& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The data specification of a <code>DataSource</code>:</p> <ul>
     * <li><p>DataLocationS3 - The Amazon S3 location of the observation data.</p></li>
     * <li><p>DataSchemaLocationS3 - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline const S3DataSpec& GetDataSpec() const{ return m_dataSpec; }

    /**
     * <p>The data specification of a <code>DataSource</code>:</p> <ul>
     * <li><p>DataLocationS3 - The Amazon S3 location of the observation data.</p></li>
     * <li><p>DataSchemaLocationS3 - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline bool DataSpecHasBeenSet() const { return m_dataSpecHasBeenSet; }

    /**
     * <p>The data specification of a <code>DataSource</code>:</p> <ul>
     * <li><p>DataLocationS3 - The Amazon S3 location of the observation data.</p></li>
     * <li><p>DataSchemaLocationS3 - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline void SetDataSpec(const S3DataSpec& value) { m_dataSpecHasBeenSet = true; m_dataSpec = value; }

    /**
     * <p>The data specification of a <code>DataSource</code>:</p> <ul>
     * <li><p>DataLocationS3 - The Amazon S3 location of the observation data.</p></li>
     * <li><p>DataSchemaLocationS3 - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline void SetDataSpec(S3DataSpec&& value) { m_dataSpecHasBeenSet = true; m_dataSpec = std::move(value); }

    /**
     * <p>The data specification of a <code>DataSource</code>:</p> <ul>
     * <li><p>DataLocationS3 - The Amazon S3 location of the observation data.</p></li>
     * <li><p>DataSchemaLocationS3 - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline CreateDataSourceFromS3Request& WithDataSpec(const S3DataSpec& value) { SetDataSpec(value); return *this;}

    /**
     * <p>The data specification of a <code>DataSource</code>:</p> <ul>
     * <li><p>DataLocationS3 - The Amazon S3 location of the observation data.</p></li>
     * <li><p>DataSchemaLocationS3 - The Amazon S3 location of the
     * <code>DataSchema</code>.</p></li> <li><p>DataSchema - A JSON string representing
     * the schema. This is not required if <code>DataSchemaUri</code> is specified.
     * </p></li> <li> <p>DataRearrangement - A JSON string that represents the
     * splitting and rearrangement requirements for the <code>Datasource</code>. </p>
     * <p> Sample - <code>
     * "{\"splitting\":{\"percentBegin\":10,\"percentEnd\":60}}"</code> </p> </li>
     * </ul>
     */
    inline CreateDataSourceFromS3Request& WithDataSpec(S3DataSpec&& value) { SetDataSpec(std::move(value)); return *this;}


    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the
     * <code></code>DataSource<code></code> needs to be used for <code>MLModel</code>
     * training.</p>
     */
    inline bool GetComputeStatistics() const{ return m_computeStatistics; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the
     * <code></code>DataSource<code></code> needs to be used for <code>MLModel</code>
     * training.</p>
     */
    inline bool ComputeStatisticsHasBeenSet() const { return m_computeStatisticsHasBeenSet; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the
     * <code></code>DataSource<code></code> needs to be used for <code>MLModel</code>
     * training.</p>
     */
    inline void SetComputeStatistics(bool value) { m_computeStatisticsHasBeenSet = true; m_computeStatistics = value; }

    /**
     * <p>The compute statistics for a <code>DataSource</code>. The statistics are
     * generated from the observation data referenced by a <code>DataSource</code>.
     * Amazon ML uses the statistics internally during <code>MLModel</code> training.
     * This parameter must be set to <code>true</code> if the
     * <code></code>DataSource<code></code> needs to be used for <code>MLModel</code>
     * training.</p>
     */
    inline CreateDataSourceFromS3Request& WithComputeStatistics(bool value) { SetComputeStatistics(value); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet;

    S3DataSpec m_dataSpec;
    bool m_dataSpecHasBeenSet;

    bool m_computeStatistics;
    bool m_computeStatisticsHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
