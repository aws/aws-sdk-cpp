/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class StopExperimentResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API StopExperimentResult();
    AWS_CLOUDWATCHEVIDENTLY_API StopExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API StopExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time that the experiment stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedTime() const{ return m_endedTime; }

    /**
     * <p>The date and time that the experiment stopped.</p>
     */
    inline void SetEndedTime(const Aws::Utils::DateTime& value) { m_endedTime = value; }

    /**
     * <p>The date and time that the experiment stopped.</p>
     */
    inline void SetEndedTime(Aws::Utils::DateTime&& value) { m_endedTime = std::move(value); }

    /**
     * <p>The date and time that the experiment stopped.</p>
     */
    inline StopExperimentResult& WithEndedTime(const Aws::Utils::DateTime& value) { SetEndedTime(value); return *this;}

    /**
     * <p>The date and time that the experiment stopped.</p>
     */
    inline StopExperimentResult& WithEndedTime(Aws::Utils::DateTime&& value) { SetEndedTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopExperimentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopExperimentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopExperimentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_endedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
