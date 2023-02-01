/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/InstanceUserSummary.h>
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
    inline AssociateUserResult& WithInstanceUserSummary(const InstanceUserSummary& value) { SetInstanceUserSummary(value); return *this;}

    /**
     * <p>Metadata that describes the associate user operation.</p>
     */
    inline AssociateUserResult& WithInstanceUserSummary(InstanceUserSummary&& value) { SetInstanceUserSummary(std::move(value)); return *this;}

  private:

    InstanceUserSummary m_instanceUserSummary;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
