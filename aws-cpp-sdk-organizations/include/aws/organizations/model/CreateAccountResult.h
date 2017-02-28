/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/CreateAccountStatus.h>

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
  class AWS_ORGANIZATIONS_API CreateAccountResult
  {
  public:
    CreateAccountResult();
    CreateAccountResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAccountResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A structure that contains details about the request to create an account.
     * This response structure might not be fully populated when you first receive it
     * because account creation is an asynchronous process. You can pass the returned
     * CreateAccountStatus ID as a parameter to <code>
     * <a>DescribeCreateAccountStatus</a> </code> to get status about the progress of
     * the request at later times. </p>
     */
    inline const CreateAccountStatus& GetCreateAccountStatus() const{ return m_createAccountStatus; }

    /**
     * <p>A structure that contains details about the request to create an account.
     * This response structure might not be fully populated when you first receive it
     * because account creation is an asynchronous process. You can pass the returned
     * CreateAccountStatus ID as a parameter to <code>
     * <a>DescribeCreateAccountStatus</a> </code> to get status about the progress of
     * the request at later times. </p>
     */
    inline void SetCreateAccountStatus(const CreateAccountStatus& value) { m_createAccountStatus = value; }

    /**
     * <p>A structure that contains details about the request to create an account.
     * This response structure might not be fully populated when you first receive it
     * because account creation is an asynchronous process. You can pass the returned
     * CreateAccountStatus ID as a parameter to <code>
     * <a>DescribeCreateAccountStatus</a> </code> to get status about the progress of
     * the request at later times. </p>
     */
    inline void SetCreateAccountStatus(CreateAccountStatus&& value) { m_createAccountStatus = value; }

    /**
     * <p>A structure that contains details about the request to create an account.
     * This response structure might not be fully populated when you first receive it
     * because account creation is an asynchronous process. You can pass the returned
     * CreateAccountStatus ID as a parameter to <code>
     * <a>DescribeCreateAccountStatus</a> </code> to get status about the progress of
     * the request at later times. </p>
     */
    inline CreateAccountResult& WithCreateAccountStatus(const CreateAccountStatus& value) { SetCreateAccountStatus(value); return *this;}

    /**
     * <p>A structure that contains details about the request to create an account.
     * This response structure might not be fully populated when you first receive it
     * because account creation is an asynchronous process. You can pass the returned
     * CreateAccountStatus ID as a parameter to <code>
     * <a>DescribeCreateAccountStatus</a> </code> to get status about the progress of
     * the request at later times. </p>
     */
    inline CreateAccountResult& WithCreateAccountStatus(CreateAccountStatus&& value) { SetCreateAccountStatus(value); return *this;}

  private:
    CreateAccountStatus m_createAccountStatus;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
