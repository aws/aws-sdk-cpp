/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateMonitorResult
  {
  public:
    AWS_DEADLINE_API CreateMonitorResult();
    AWS_DEADLINE_API CreateMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that IAM Identity Center assigns to the
     * monitor.</p>
     */
    inline const Aws::String& GetIdentityCenterApplicationArn() const{ return m_identityCenterApplicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that IAM Identity Center assigns to the
     * monitor.</p>
     */
    inline void SetIdentityCenterApplicationArn(const Aws::String& value) { m_identityCenterApplicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that IAM Identity Center assigns to the
     * monitor.</p>
     */
    inline void SetIdentityCenterApplicationArn(Aws::String&& value) { m_identityCenterApplicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that IAM Identity Center assigns to the
     * monitor.</p>
     */
    inline void SetIdentityCenterApplicationArn(const char* value) { m_identityCenterApplicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that IAM Identity Center assigns to the
     * monitor.</p>
     */
    inline CreateMonitorResult& WithIdentityCenterApplicationArn(const Aws::String& value) { SetIdentityCenterApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that IAM Identity Center assigns to the
     * monitor.</p>
     */
    inline CreateMonitorResult& WithIdentityCenterApplicationArn(Aws::String&& value) { SetIdentityCenterApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that IAM Identity Center assigns to the
     * monitor.</p>
     */
    inline CreateMonitorResult& WithIdentityCenterApplicationArn(const char* value) { SetIdentityCenterApplicationArn(value); return *this;}


    /**
     * <p>The unique identifier of the monitor.</p>
     */
    inline const Aws::String& GetMonitorId() const{ return m_monitorId; }

    /**
     * <p>The unique identifier of the monitor.</p>
     */
    inline void SetMonitorId(const Aws::String& value) { m_monitorId = value; }

    /**
     * <p>The unique identifier of the monitor.</p>
     */
    inline void SetMonitorId(Aws::String&& value) { m_monitorId = std::move(value); }

    /**
     * <p>The unique identifier of the monitor.</p>
     */
    inline void SetMonitorId(const char* value) { m_monitorId.assign(value); }

    /**
     * <p>The unique identifier of the monitor.</p>
     */
    inline CreateMonitorResult& WithMonitorId(const Aws::String& value) { SetMonitorId(value); return *this;}

    /**
     * <p>The unique identifier of the monitor.</p>
     */
    inline CreateMonitorResult& WithMonitorId(Aws::String&& value) { SetMonitorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the monitor.</p>
     */
    inline CreateMonitorResult& WithMonitorId(const char* value) { SetMonitorId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateMonitorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateMonitorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateMonitorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_identityCenterApplicationArn;

    Aws::String m_monitorId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
