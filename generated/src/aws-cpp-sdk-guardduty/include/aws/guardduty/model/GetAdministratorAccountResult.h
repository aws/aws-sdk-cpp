/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Administrator.h>
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
namespace GuardDuty
{
namespace Model
{
  class GetAdministratorAccountResult
  {
  public:
    AWS_GUARDDUTY_API GetAdministratorAccountResult();
    AWS_GUARDDUTY_API GetAdministratorAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetAdministratorAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The administrator account details.</p>
     */
    inline const Administrator& GetAdministrator() const{ return m_administrator; }

    /**
     * <p>The administrator account details.</p>
     */
    inline void SetAdministrator(const Administrator& value) { m_administrator = value; }

    /**
     * <p>The administrator account details.</p>
     */
    inline void SetAdministrator(Administrator&& value) { m_administrator = std::move(value); }

    /**
     * <p>The administrator account details.</p>
     */
    inline GetAdministratorAccountResult& WithAdministrator(const Administrator& value) { SetAdministrator(value); return *this;}

    /**
     * <p>The administrator account details.</p>
     */
    inline GetAdministratorAccountResult& WithAdministrator(Administrator&& value) { SetAdministrator(std::move(value)); return *this;}

  private:

    Administrator m_administrator;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
