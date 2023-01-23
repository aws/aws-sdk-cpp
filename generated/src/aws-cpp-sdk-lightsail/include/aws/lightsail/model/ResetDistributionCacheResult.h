/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/Operation.h>
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
  class ResetDistributionCacheResult
  {
  public:
    AWS_LIGHTSAIL_API ResetDistributionCacheResult();
    AWS_LIGHTSAIL_API ResetDistributionCacheResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API ResetDistributionCacheResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the reset cache request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the reset cache request.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the reset cache request.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the reset cache request.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the reset cache request.</p>
     */
    inline ResetDistributionCacheResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the reset cache request.</p>
     */
    inline ResetDistributionCacheResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the reset cache request.</p>
     */
    inline ResetDistributionCacheResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The timestamp of the reset cache request (e.g., <code>1479734909.17</code>)
     * in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp of the reset cache request (e.g., <code>1479734909.17</code>)
     * in Unix time format.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp of the reset cache request (e.g., <code>1479734909.17</code>)
     * in Unix time format.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp of the reset cache request (e.g., <code>1479734909.17</code>)
     * in Unix time format.</p>
     */
    inline ResetDistributionCacheResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp of the reset cache request (e.g., <code>1479734909.17</code>)
     * in Unix time format.</p>
     */
    inline ResetDistributionCacheResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline ResetDistributionCacheResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline ResetDistributionCacheResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    Aws::String m_status;

    Aws::Utils::DateTime m_createTime;

    Operation m_operation;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
