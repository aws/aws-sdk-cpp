﻿/**
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
  class AssociateUserResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API AssociateUserResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API AssociateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API AssociateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata that describes the associate user operation.</p>
     */
    inline const InstanceUserSummary& GetInstanceUserSummary() const{ return m_instanceUserSummary; }
    inline void SetInstanceUserSummary(const InstanceUserSummary& value) { m_instanceUserSummary = value; }
    inline void SetInstanceUserSummary(InstanceUserSummary&& value) { m_instanceUserSummary = std::move(value); }
    inline AssociateUserResult& WithInstanceUserSummary(const InstanceUserSummary& value) { SetInstanceUserSummary(value); return *this;}
    inline AssociateUserResult& WithInstanceUserSummary(InstanceUserSummary&& value) { SetInstanceUserSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    InstanceUserSummary m_instanceUserSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
