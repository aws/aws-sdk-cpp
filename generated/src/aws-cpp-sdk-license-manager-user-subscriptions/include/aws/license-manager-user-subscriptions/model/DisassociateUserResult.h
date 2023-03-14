/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/InstanceUserSummary.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class DisassociateUserResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DisassociateUserResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DisassociateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DisassociateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata that describes the associate user operation.</p>
     */
    inline const InstanceUserSummary& GetInstanceUserSummary() const{ return m_instanceUserSummary; }

    /**
     * <p>Metadata that describes the associate user operation.</p>
     */
    inline void SetInstanceUserSummary(const InstanceUserSummary& value) { m_instanceUserSummary = value; }

    /**
     * <p>Metadata that describes the associate user operation.</p>
     */
    inline void SetInstanceUserSummary(InstanceUserSummary&& value) { m_instanceUserSummary = std::move(value); }

    /**
     * <p>Metadata that describes the associate user operation.</p>
     */
    inline DisassociateUserResult& WithInstanceUserSummary(const InstanceUserSummary& value) { SetInstanceUserSummary(value); return *this;}

    /**
     * <p>Metadata that describes the associate user operation.</p>
     */
    inline DisassociateUserResult& WithInstanceUserSummary(InstanceUserSummary&& value) { SetInstanceUserSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InstanceUserSummary m_instanceUserSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
