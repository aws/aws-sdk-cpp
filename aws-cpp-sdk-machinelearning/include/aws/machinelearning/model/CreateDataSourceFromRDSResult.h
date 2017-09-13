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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{
  /**
   * <p> Represents the output of a <code>CreateDataSourceFromRDS</code> operation,
   * and is an acknowledgement that Amazon ML received the request.</p> <p>The
   * <code>CreateDataSourceFromRDS</code>&gt; operation is asynchronous. You can poll
   * for updates by using the <code>GetBatchPrediction</code> operation and checking
   * the <code>Status</code> parameter. You can inspect the <code>Message</code> when
   * <code>Status</code> shows up as <code>FAILED</code>. You can also check the
   * progress of the copy operation by going to the <code>DataPipeline</code> console
   * and looking up the pipeline using the <code>pipelineId </code> from the describe
   * call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateDataSourceFromRDSOutput">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API CreateDataSourceFromRDSResult
  {
  public:
    CreateDataSourceFromRDSResult();
    CreateDataSourceFromRDSResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDataSourceFromRDSResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline CreateDataSourceFromRDSResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline CreateDataSourceFromRDSResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline CreateDataSourceFromRDSResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}

  private:

    Aws::String m_dataSourceId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
