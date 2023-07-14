﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API StartPersonTrackingResult
  {
  public:
    StartPersonTrackingResult();
    StartPersonTrackingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartPersonTrackingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the person detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetPersonTracking</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier for the person detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetPersonTracking</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier for the person detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetPersonTracking</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier for the person detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetPersonTracking</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier for the person detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetPersonTracking</code>.</p>
     */
    inline StartPersonTrackingResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier for the person detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetPersonTracking</code>.</p>
     */
    inline StartPersonTrackingResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the person detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetPersonTracking</code>.</p>
     */
    inline StartPersonTrackingResult& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
