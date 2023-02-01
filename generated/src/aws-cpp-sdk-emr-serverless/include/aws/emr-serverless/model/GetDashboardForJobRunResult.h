/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
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
namespace EMRServerless
{
namespace Model
{
  class GetDashboardForJobRunResult
  {
  public:
    AWS_EMRSERVERLESS_API GetDashboardForJobRunResult();
    AWS_EMRSERVERLESS_API GetDashboardForJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API GetDashboardForJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL to view job run's dashboard.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to view job run's dashboard.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The URL to view job run's dashboard.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The URL to view job run's dashboard.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The URL to view job run's dashboard.</p>
     */
    inline GetDashboardForJobRunResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to view job run's dashboard.</p>
     */
    inline GetDashboardForJobRunResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to view job run's dashboard.</p>
     */
    inline GetDashboardForJobRunResult& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_url;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
