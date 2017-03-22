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
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API DescribeCreateAccountStatusRequest : public OrganizationsRequest
  {
  public:
    DescribeCreateAccountStatusRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the <code>operationId</code> that uniquely identifies the request.
     * You can get the ID from the response to an earlier <a>CreateAccount</a> request,
     * or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an create account
     * request ID string requires "car-" followed by from 8 to 32 lower-case letters or
     * digits.</p>
     */
    inline const Aws::String& GetCreateAccountRequestId() const{ return m_createAccountRequestId; }

    /**
     * <p>Specifies the <code>operationId</code> that uniquely identifies the request.
     * You can get the ID from the response to an earlier <a>CreateAccount</a> request,
     * or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an create account
     * request ID string requires "car-" followed by from 8 to 32 lower-case letters or
     * digits.</p>
     */
    inline void SetCreateAccountRequestId(const Aws::String& value) { m_createAccountRequestIdHasBeenSet = true; m_createAccountRequestId = value; }

    /**
     * <p>Specifies the <code>operationId</code> that uniquely identifies the request.
     * You can get the ID from the response to an earlier <a>CreateAccount</a> request,
     * or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an create account
     * request ID string requires "car-" followed by from 8 to 32 lower-case letters or
     * digits.</p>
     */
    inline void SetCreateAccountRequestId(Aws::String&& value) { m_createAccountRequestIdHasBeenSet = true; m_createAccountRequestId = value; }

    /**
     * <p>Specifies the <code>operationId</code> that uniquely identifies the request.
     * You can get the ID from the response to an earlier <a>CreateAccount</a> request,
     * or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an create account
     * request ID string requires "car-" followed by from 8 to 32 lower-case letters or
     * digits.</p>
     */
    inline void SetCreateAccountRequestId(const char* value) { m_createAccountRequestIdHasBeenSet = true; m_createAccountRequestId.assign(value); }

    /**
     * <p>Specifies the <code>operationId</code> that uniquely identifies the request.
     * You can get the ID from the response to an earlier <a>CreateAccount</a> request,
     * or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an create account
     * request ID string requires "car-" followed by from 8 to 32 lower-case letters or
     * digits.</p>
     */
    inline DescribeCreateAccountStatusRequest& WithCreateAccountRequestId(const Aws::String& value) { SetCreateAccountRequestId(value); return *this;}

    /**
     * <p>Specifies the <code>operationId</code> that uniquely identifies the request.
     * You can get the ID from the response to an earlier <a>CreateAccount</a> request,
     * or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an create account
     * request ID string requires "car-" followed by from 8 to 32 lower-case letters or
     * digits.</p>
     */
    inline DescribeCreateAccountStatusRequest& WithCreateAccountRequestId(Aws::String&& value) { SetCreateAccountRequestId(value); return *this;}

    /**
     * <p>Specifies the <code>operationId</code> that uniquely identifies the request.
     * You can get the ID from the response to an earlier <a>CreateAccount</a> request,
     * or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an create account
     * request ID string requires "car-" followed by from 8 to 32 lower-case letters or
     * digits.</p>
     */
    inline DescribeCreateAccountStatusRequest& WithCreateAccountRequestId(const char* value) { SetCreateAccountRequestId(value); return *this;}

  private:
    Aws::String m_createAccountRequestId;
    bool m_createAccountRequestIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
