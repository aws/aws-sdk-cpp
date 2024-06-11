﻿/**
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
    AWS_EMR_API RunJobFlowResult();
    AWS_EMR_API RunJobFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API RunJobFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowId = value; }
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowId = std::move(value); }
    inline void SetJobFlowId(const char* value) { m_jobFlowId.assign(value); }
    inline RunJobFlowResult& WithJobFlowId(const Aws::String& value) { SetJobFlowId(value); return *this;}
    inline RunJobFlowResult& WithJobFlowId(Aws::String&& value) { SetJobFlowId(std::move(value)); return *this;}
    inline RunJobFlowResult& WithJobFlowId(const char* value) { SetJobFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }
    inline RunJobFlowResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline RunJobFlowResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline RunJobFlowResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RunJobFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RunJobFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RunJobFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobFlowId;

    Aws::String m_clusterArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
