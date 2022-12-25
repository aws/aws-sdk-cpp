/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class StartPipelineReprocessingResult
  {
  public:
    AWS_IOTANALYTICS_API StartPipelineReprocessingResult();
    AWS_IOTANALYTICS_API StartPipelineReprocessingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API StartPipelineReprocessingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the pipeline reprocessing activity that was started.</p>
     */
    inline const Aws::String& GetReprocessingId() const{ return m_reprocessingId; }

    /**
     * <p>The ID of the pipeline reprocessing activity that was started.</p>
     */
    inline void SetReprocessingId(const Aws::String& value) { m_reprocessingId = value; }

    /**
     * <p>The ID of the pipeline reprocessing activity that was started.</p>
     */
    inline void SetReprocessingId(Aws::String&& value) { m_reprocessingId = std::move(value); }

    /**
     * <p>The ID of the pipeline reprocessing activity that was started.</p>
     */
    inline void SetReprocessingId(const char* value) { m_reprocessingId.assign(value); }

    /**
     * <p>The ID of the pipeline reprocessing activity that was started.</p>
     */
    inline StartPipelineReprocessingResult& WithReprocessingId(const Aws::String& value) { SetReprocessingId(value); return *this;}

    /**
     * <p>The ID of the pipeline reprocessing activity that was started.</p>
     */
    inline StartPipelineReprocessingResult& WithReprocessingId(Aws::String&& value) { SetReprocessingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline reprocessing activity that was started.</p>
     */
    inline StartPipelineReprocessingResult& WithReprocessingId(const char* value) { SetReprocessingId(value); return *this;}

  private:

    Aws::String m_reprocessingId;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
