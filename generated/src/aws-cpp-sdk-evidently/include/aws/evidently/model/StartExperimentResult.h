/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
  class StartExperimentResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API StartExperimentResult();
    AWS_CLOUDWATCHEVIDENTLY_API StartExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API StartExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A timestamp that indicates when the experiment started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedTime() const{ return m_startedTime; }

    /**
     * <p>A timestamp that indicates when the experiment started.</p>
     */
    inline void SetStartedTime(const Aws::Utils::DateTime& value) { m_startedTime = value; }

    /**
     * <p>A timestamp that indicates when the experiment started.</p>
     */
    inline void SetStartedTime(Aws::Utils::DateTime&& value) { m_startedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the experiment started.</p>
     */
    inline StartExperimentResult& WithStartedTime(const Aws::Utils::DateTime& value) { SetStartedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the experiment started.</p>
     */
    inline StartExperimentResult& WithStartedTime(Aws::Utils::DateTime&& value) { SetStartedTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_startedTime;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
