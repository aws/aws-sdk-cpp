/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/CreateAccountStatus.h>
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
  class DescribeCreateAccountStatusResult
  {
  public:
    AWS_ORGANIZATIONS_API DescribeCreateAccountStatusResult();
    AWS_ORGANIZATIONS_API DescribeCreateAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API DescribeCreateAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the current status of an account creation
     * request.</p>
     */
    inline const CreateAccountStatus& GetCreateAccountStatus() const{ return m_createAccountStatus; }

    /**
     * <p>A structure that contains the current status of an account creation
     * request.</p>
     */
    inline void SetCreateAccountStatus(const CreateAccountStatus& value) { m_createAccountStatus = value; }

    /**
     * <p>A structure that contains the current status of an account creation
     * request.</p>
     */
    inline void SetCreateAccountStatus(CreateAccountStatus&& value) { m_createAccountStatus = std::move(value); }

    /**
     * <p>A structure that contains the current status of an account creation
     * request.</p>
     */
    inline DescribeCreateAccountStatusResult& WithCreateAccountStatus(const CreateAccountStatus& value) { SetCreateAccountStatus(value); return *this;}

    /**
     * <p>A structure that contains the current status of an account creation
     * request.</p>
     */
    inline DescribeCreateAccountStatusResult& WithCreateAccountStatus(CreateAccountStatus&& value) { SetCreateAccountStatus(std::move(value)); return *this;}

  private:

    CreateAccountStatus m_createAccountStatus;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
