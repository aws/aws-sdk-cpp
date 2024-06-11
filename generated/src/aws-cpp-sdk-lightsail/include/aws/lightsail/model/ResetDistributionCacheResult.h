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


    ///@{
    /**
     * <p>The status of the reset cache request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline ResetDistributionCacheResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ResetDistributionCacheResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ResetDistributionCacheResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the reset cache request (<code>1479734909.17</code>) in Unix
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline ResetDistributionCacheResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ResetDistributionCacheResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }
    inline void SetOperation(const Operation& value) { m_operation = value; }
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }
    inline ResetDistributionCacheResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}
    inline ResetDistributionCacheResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ResetDistributionCacheResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ResetDistributionCacheResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ResetDistributionCacheResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_status;

    Aws::Utils::DateTime m_createTime;

    Operation m_operation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
