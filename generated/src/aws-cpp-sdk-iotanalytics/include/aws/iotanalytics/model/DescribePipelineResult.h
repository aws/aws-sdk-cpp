/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/Pipeline.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class DescribePipelineResult
  {
  public:
    AWS_IOTANALYTICS_API DescribePipelineResult();
    AWS_IOTANALYTICS_API DescribePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API DescribePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>Pipeline</code> object that contains information about the
     * pipeline.</p>
     */
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>A <code>Pipeline</code> object that contains information about the
     * pipeline.</p>
     */
    inline void SetPipeline(const Pipeline& value) { m_pipeline = value; }

    /**
     * <p>A <code>Pipeline</code> object that contains information about the
     * pipeline.</p>
     */
    inline void SetPipeline(Pipeline&& value) { m_pipeline = std::move(value); }

    /**
     * <p>A <code>Pipeline</code> object that contains information about the
     * pipeline.</p>
     */
    inline DescribePipelineResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>A <code>Pipeline</code> object that contains information about the
     * pipeline.</p>
     */
    inline DescribePipelineResult& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}

  private:

    Pipeline m_pipeline;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
