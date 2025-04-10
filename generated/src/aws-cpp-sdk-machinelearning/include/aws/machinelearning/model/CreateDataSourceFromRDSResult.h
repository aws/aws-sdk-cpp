﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateDataSourceFromRDSResult
  {
  public:
    AWS_MACHINELEARNING_API CreateDataSourceFromRDSResult() = default;
    AWS_MACHINELEARNING_API CreateDataSourceFromRDSResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API CreateDataSourceFromRDSResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A user-supplied ID that uniquely identifies the datasource. This value should
     * be identical to the value of the <code>DataSourceID</code> in the request. </p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    CreateDataSourceFromRDSResult& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDataSourceFromRDSResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
