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
    AWS_EMR_API RunJobFlowResult();
    AWS_EMR_API RunJobFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API RunJobFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }

    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowId = value; }

    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowId = std::move(value); }

    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline void SetJobFlowId(const char* value) { m_jobFlowId.assign(value); }

    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline RunJobFlowResult& WithJobFlowId(const Aws::String& value) { SetJobFlowId(value); return *this;}

    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline RunJobFlowResult& WithJobFlowId(Aws::String&& value) { SetJobFlowId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the job flow.</p>
     */
    inline RunJobFlowResult& WithJobFlowId(const char* value) { SetJobFlowId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline RunJobFlowResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline RunJobFlowResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline RunJobFlowResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}

  private:

    Aws::String m_jobFlowId;

    Aws::String m_clusterArn;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
