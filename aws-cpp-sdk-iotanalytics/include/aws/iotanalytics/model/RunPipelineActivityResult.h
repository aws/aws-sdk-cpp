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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
  class AWS_IOTANALYTICS_API RunPipelineActivityResult
  {
  public:
    RunPipelineActivityResult();
    RunPipelineActivityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RunPipelineActivityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The enriched or transformed sample message payloads as base64-encoded
     * strings. (The results of running the pipeline activity on each input sample
     * message payload, encoded in base64.)</p>
     */
    inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetPayloads() const{ return m_payloads; }

    /**
     * <p>The enriched or transformed sample message payloads as base64-encoded
     * strings. (The results of running the pipeline activity on each input sample
     * message payload, encoded in base64.)</p>
     */
    inline void SetPayloads(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { m_payloads = value; }

    /**
     * <p>The enriched or transformed sample message payloads as base64-encoded
     * strings. (The results of running the pipeline activity on each input sample
     * message payload, encoded in base64.)</p>
     */
    inline void SetPayloads(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { m_payloads = std::move(value); }

    /**
     * <p>The enriched or transformed sample message payloads as base64-encoded
     * strings. (The results of running the pipeline activity on each input sample
     * message payload, encoded in base64.)</p>
     */
    inline RunPipelineActivityResult& WithPayloads(const Aws::Vector<Aws::Utils::ByteBuffer>& value) { SetPayloads(value); return *this;}

    /**
     * <p>The enriched or transformed sample message payloads as base64-encoded
     * strings. (The results of running the pipeline activity on each input sample
     * message payload, encoded in base64.)</p>
     */
    inline RunPipelineActivityResult& WithPayloads(Aws::Vector<Aws::Utils::ByteBuffer>&& value) { SetPayloads(std::move(value)); return *this;}

    /**
     * <p>The enriched or transformed sample message payloads as base64-encoded
     * strings. (The results of running the pipeline activity on each input sample
     * message payload, encoded in base64.)</p>
     */
    inline RunPipelineActivityResult& AddPayloads(const Aws::Utils::ByteBuffer& value) { m_payloads.push_back(value); return *this; }

    /**
     * <p>The enriched or transformed sample message payloads as base64-encoded
     * strings. (The results of running the pipeline activity on each input sample
     * message payload, encoded in base64.)</p>
     */
    inline RunPipelineActivityResult& AddPayloads(Aws::Utils::ByteBuffer&& value) { m_payloads.push_back(std::move(value)); return *this; }


    /**
     * <p>In case the pipeline activity fails, the log message that is generated.</p>
     */
    inline const Aws::String& GetLogResult() const{ return m_logResult; }

    /**
     * <p>In case the pipeline activity fails, the log message that is generated.</p>
     */
    inline void SetLogResult(const Aws::String& value) { m_logResult = value; }

    /**
     * <p>In case the pipeline activity fails, the log message that is generated.</p>
     */
    inline void SetLogResult(Aws::String&& value) { m_logResult = std::move(value); }

    /**
     * <p>In case the pipeline activity fails, the log message that is generated.</p>
     */
    inline void SetLogResult(const char* value) { m_logResult.assign(value); }

    /**
     * <p>In case the pipeline activity fails, the log message that is generated.</p>
     */
    inline RunPipelineActivityResult& WithLogResult(const Aws::String& value) { SetLogResult(value); return *this;}

    /**
     * <p>In case the pipeline activity fails, the log message that is generated.</p>
     */
    inline RunPipelineActivityResult& WithLogResult(Aws::String&& value) { SetLogResult(std::move(value)); return *this;}

    /**
     * <p>In case the pipeline activity fails, the log message that is generated.</p>
     */
    inline RunPipelineActivityResult& WithLogResult(const char* value) { SetLogResult(value); return *this;}

  private:

    Aws::Vector<Aws::Utils::ByteBuffer> m_payloads;

    Aws::String m_logResult;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
