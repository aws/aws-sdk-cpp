/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lightsail
{
namespace Model
{
  class GetDistributionLatestCacheResetResult
  {
  public:
    AWS_LIGHTSAIL_API GetDistributionLatestCacheResetResult();
    AWS_LIGHTSAIL_API GetDistributionLatestCacheResetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDistributionLatestCacheResetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the last cache reset.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the last cache reset.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the last cache reset.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the last cache reset.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the last cache reset.</p>
     */
    inline GetDistributionLatestCacheResetResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the last cache reset.</p>
     */
    inline GetDistributionLatestCacheResetResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the last cache reset.</p>
     */
    inline GetDistributionLatestCacheResetResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The timestamp of the last cache reset (e.g., <code>1479734909.17</code>) in
     * Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp of the last cache reset (e.g., <code>1479734909.17</code>) in
     * Unix time format.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp of the last cache reset (e.g., <code>1479734909.17</code>) in
     * Unix time format.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp of the last cache reset (e.g., <code>1479734909.17</code>) in
     * Unix time format.</p>
     */
    inline GetDistributionLatestCacheResetResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp of the last cache reset (e.g., <code>1479734909.17</code>) in
     * Unix time format.</p>
     */
    inline GetDistributionLatestCacheResetResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}

  private:

    Aws::String m_status;

    Aws::Utils::DateTime m_createTime;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
