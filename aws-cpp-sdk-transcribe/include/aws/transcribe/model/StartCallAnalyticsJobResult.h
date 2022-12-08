/**
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
  class StartCallAnalyticsJobResult
  {
  public:
    AWS_TRANSCRIBESERVICE_API StartCallAnalyticsJobResult();
    AWS_TRANSCRIBESERVICE_API StartCallAnalyticsJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSCRIBESERVICE_API StartCallAnalyticsJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides detailed information about the current Call Analytics job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline const CallAnalyticsJob& GetCallAnalyticsJob() const{ return m_callAnalyticsJob; }

    /**
     * <p>Provides detailed information about the current Call Analytics job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline void SetCallAnalyticsJob(const CallAnalyticsJob& value) { m_callAnalyticsJob = value; }

    /**
     * <p>Provides detailed information about the current Call Analytics job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline void SetCallAnalyticsJob(CallAnalyticsJob&& value) { m_callAnalyticsJob = std::move(value); }

    /**
     * <p>Provides detailed information about the current Call Analytics job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline StartCallAnalyticsJobResult& WithCallAnalyticsJob(const CallAnalyticsJob& value) { SetCallAnalyticsJob(value); return *this;}

    /**
     * <p>Provides detailed information about the current Call Analytics job, including
     * job status and, if applicable, failure reason.</p>
     */
    inline StartCallAnalyticsJobResult& WithCallAnalyticsJob(CallAnalyticsJob&& value) { SetCallAnalyticsJob(std::move(value)); return *this;}

  private:

    CallAnalyticsJob m_callAnalyticsJob;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
