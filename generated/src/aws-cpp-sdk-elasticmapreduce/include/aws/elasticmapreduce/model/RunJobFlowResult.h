/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p> The result of the <a>RunJobFlow</a> operation. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RunJobFlowOutput">AWS
   * API Reference</a></p>
   */
  class RunJobFlowResult
  {
  public:
    AWS_EMR_API RunJobFlowResult() = default;
    AWS_EMR_API RunJobFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API RunJobFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline const Aws::String& GetJobFlowId() const { return m_jobFlowId; }
    template<typename JobFlowIdT = Aws::String>
    void SetJobFlowId(JobFlowIdT&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::forward<JobFlowIdT>(value); }
    template<typename JobFlowIdT = Aws::String>
    RunJobFlowResult& WithJobFlowId(JobFlowIdT&& value) { SetJobFlowId(std::forward<JobFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    RunJobFlowResult& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RunJobFlowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobFlowId;
    bool m_jobFlowIdHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
