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
  class AWS_MACIE2_API GetMasterAccountResult
  {
  public:
    GetMasterAccountResult();
    GetMasterAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMasterAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The AWS account ID for the master account. If the accounts are associated by
     * a Macie membership invitation, this object also provides details about the
     * invitation that was sent and accepted to establish the relationship between the
     * accounts.</p>
     */
    inline const Invitation& GetMaster() const{ return m_master; }

    /**
     * <p>The AWS account ID for the master account. If the accounts are associated by
     * a Macie membership invitation, this object also provides details about the
     * invitation that was sent and accepted to establish the relationship between the
     * accounts.</p>
     */
    inline void SetMaster(const Invitation& value) { m_master = value; }

    /**
     * <p>The AWS account ID for the master account. If the accounts are associated by
     * a Macie membership invitation, this object also provides details about the
     * invitation that was sent and accepted to establish the relationship between the
     * accounts.</p>
     */
    inline void SetMaster(Invitation&& value) { m_master = std::move(value); }

    /**
     * <p>The AWS account ID for the master account. If the accounts are associated by
     * a Macie membership invitation, this object also provides details about the
     * invitation that was sent and accepted to establish the relationship between the
     * accounts.</p>
     */
    inline GetMasterAccountResult& WithMaster(const Invitation& value) { SetMaster(value); return *this;}

    /**
     * <p>The AWS account ID for the master account. If the accounts are associated by
     * a Macie membership invitation, this object also provides details about the
     * invitation that was sent and accepted to establish the relationship between the
     * accounts.</p>
     */
    inline GetMasterAccountResult& WithMaster(Invitation&& value) { SetMaster(std::move(value)); return *this;}

  private:

    Invitation m_master;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
