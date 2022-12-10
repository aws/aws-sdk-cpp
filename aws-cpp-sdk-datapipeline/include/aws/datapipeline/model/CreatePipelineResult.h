/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of CreatePipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/CreatePipelineOutput">AWS
   * API Reference</a></p>
   */
  class CreatePipelineResult
  {
  public:
    AWS_DATAPIPELINE_API CreatePipelineResult();
    AWS_DATAPIPELINE_API CreatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API CreatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID that AWS Data Pipeline assigns the newly created pipeline. For
     * example, <code>df-06372391ZG65EXAMPLE</code>.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID that AWS Data Pipeline assigns the newly created pipeline. For
     * example, <code>df-06372391ZG65EXAMPLE</code>.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineId = value; }

    /**
     * <p>The ID that AWS Data Pipeline assigns the newly created pipeline. For
     * example, <code>df-06372391ZG65EXAMPLE</code>.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineId = std::move(value); }

    /**
     * <p>The ID that AWS Data Pipeline assigns the newly created pipeline. For
     * example, <code>df-06372391ZG65EXAMPLE</code>.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineId.assign(value); }

    /**
     * <p>The ID that AWS Data Pipeline assigns the newly created pipeline. For
     * example, <code>df-06372391ZG65EXAMPLE</code>.</p>
     */
    inline CreatePipelineResult& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID that AWS Data Pipeline assigns the newly created pipeline. For
     * example, <code>df-06372391ZG65EXAMPLE</code>.</p>
     */
    inline CreatePipelineResult& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID that AWS Data Pipeline assigns the newly created pipeline. For
     * example, <code>df-06372391ZG65EXAMPLE</code>.</p>
     */
    inline CreatePipelineResult& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}

  private:

    Aws::String m_pipelineId;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
