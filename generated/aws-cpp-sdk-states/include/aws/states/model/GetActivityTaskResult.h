﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{
  class AWS_SFN_API GetActivityTaskResult
  {
  public:
    GetActivityTaskResult();
    GetActivityTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetActivityTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline const Aws::String& GetTaskToken() const{ return m_taskToken; }

    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline void SetTaskToken(const Aws::String& value) { m_taskToken = value; }

    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline void SetTaskToken(Aws::String&& value) { m_taskToken = std::move(value); }

    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline void SetTaskToken(const char* value) { m_taskToken.assign(value); }

    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline GetActivityTaskResult& WithTaskToken(const Aws::String& value) { SetTaskToken(value); return *this;}

    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline GetActivityTaskResult& WithTaskToken(Aws::String&& value) { SetTaskToken(std::move(value)); return *this;}

    /**
     * <p>A token that identifies the scheduled task. This token must be copied and
     * included in subsequent calls to <a>SendTaskHeartbeat</a>, <a>SendTaskSuccess</a>
     * or <a>SendTaskFailure</a> in order to report the progress or completion of the
     * task.</p>
     */
    inline GetActivityTaskResult& WithTaskToken(const char* value) { SetTaskToken(value); return *this;}


    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(const Aws::String& value) { m_input = value; }

    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(Aws::String&& value) { m_input = std::move(value); }

    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(const char* value) { m_input.assign(value); }

    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline GetActivityTaskResult& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline GetActivityTaskResult& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The string that contains the JSON input data for the task. Length constraints
     * apply to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline GetActivityTaskResult& WithInput(const char* value) { SetInput(value); return *this;}

  private:

    Aws::String m_taskToken;

    Aws::String m_input;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
