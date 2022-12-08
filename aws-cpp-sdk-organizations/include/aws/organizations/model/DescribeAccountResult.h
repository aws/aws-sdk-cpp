/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Account.h>
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
namespace Organizations
{
namespace Model
{
  class DescribeAccountResult
  {
  public:
    AWS_ORGANIZATIONS_API DescribeAccountResult();
    AWS_ORGANIZATIONS_API DescribeAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about the requested account.</p>
     */
    inline const Account& GetAccount() const{ return m_account; }

    /**
     * <p>A structure that contains information about the requested account.</p>
     */
    inline void SetAccount(const Account& value) { m_account = value; }

    /**
     * <p>A structure that contains information about the requested account.</p>
     */
    inline void SetAccount(Account&& value) { m_account = std::move(value); }

    /**
     * <p>A structure that contains information about the requested account.</p>
     */
    inline DescribeAccountResult& WithAccount(const Account& value) { SetAccount(value); return *this;}

    /**
     * <p>A structure that contains information about the requested account.</p>
     */
    inline DescribeAccountResult& WithAccount(Account&& value) { SetAccount(std::move(value)); return *this;}

  private:

    Account m_account;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
