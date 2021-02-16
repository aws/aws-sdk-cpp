/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Invitation.h>
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
namespace Macie2
{
namespace Model
{
  class AWS_MACIE2_API GetAdministratorAccountResult
  {
  public:
    GetAdministratorAccountResult();
    GetAdministratorAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAdministratorAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The AWS account ID for the administrator account. If the accounts are
     * associated by a Macie membership invitation, this object also provides details
     * about the invitation that was sent to establish the relationship between the
     * accounts.</p>
     */
    inline const Invitation& GetAdministrator() const{ return m_administrator; }

    /**
     * <p>The AWS account ID for the administrator account. If the accounts are
     * associated by a Macie membership invitation, this object also provides details
     * about the invitation that was sent to establish the relationship between the
     * accounts.</p>
     */
    inline void SetAdministrator(const Invitation& value) { m_administrator = value; }

    /**
     * <p>The AWS account ID for the administrator account. If the accounts are
     * associated by a Macie membership invitation, this object also provides details
     * about the invitation that was sent to establish the relationship between the
     * accounts.</p>
     */
    inline void SetAdministrator(Invitation&& value) { m_administrator = std::move(value); }

    /**
     * <p>The AWS account ID for the administrator account. If the accounts are
     * associated by a Macie membership invitation, this object also provides details
     * about the invitation that was sent to establish the relationship between the
     * accounts.</p>
     */
    inline GetAdministratorAccountResult& WithAdministrator(const Invitation& value) { SetAdministrator(value); return *this;}

    /**
     * <p>The AWS account ID for the administrator account. If the accounts are
     * associated by a Macie membership invitation, this object also provides details
     * about the invitation that was sent to establish the relationship between the
     * accounts.</p>
     */
    inline GetAdministratorAccountResult& WithAdministrator(Invitation&& value) { SetAdministrator(std::move(value)); return *this;}

  private:

    Invitation m_administrator;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
