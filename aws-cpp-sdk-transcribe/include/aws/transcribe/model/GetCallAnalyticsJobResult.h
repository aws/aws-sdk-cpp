﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/CallAnalyticsJob.h>
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
namespace TranscribeService
{
namespace Model
{
  class AWS_TRANSCRIBESERVICE_API GetCallAnalyticsJobResult
  {
  public:
    GetCallAnalyticsJobResult();
    GetCallAnalyticsJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCallAnalyticsJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the results of your call analytics job.</p>
     */
    inline const CallAnalyticsJob& GetCallAnalyticsJob() const{ return m_callAnalyticsJob; }

    /**
     * <p>An object that contains the results of your call analytics job.</p>
     */
    inline void SetCallAnalyticsJob(const CallAnalyticsJob& value) { m_callAnalyticsJob = value; }

    /**
     * <p>An object that contains the results of your call analytics job.</p>
     */
    inline void SetCallAnalyticsJob(CallAnalyticsJob&& value) { m_callAnalyticsJob = std::move(value); }

    /**
     * <p>An object that contains the results of your call analytics job.</p>
     */
    inline GetCallAnalyticsJobResult& WithCallAnalyticsJob(const CallAnalyticsJob& value) { SetCallAnalyticsJob(value); return *this;}

    /**
     * <p>An object that contains the results of your call analytics job.</p>
     */
    inline GetCallAnalyticsJobResult& WithCallAnalyticsJob(CallAnalyticsJob&& value) { SetCallAnalyticsJob(std::move(value)); return *this;}

  private:

    CallAnalyticsJob m_callAnalyticsJob;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
