/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class DescribeCreateAccountStatusRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API DescribeCreateAccountStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCreateAccountStatus"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline const Aws::String& GetCreateAccountRequestId() const{ return m_createAccountRequestId; }

    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline bool CreateAccountRequestIdHasBeenSet() const { return m_createAccountRequestIdHasBeenSet; }

    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline void SetCreateAccountRequestId(const Aws::String& value) { m_createAccountRequestIdHasBeenSet = true; m_createAccountRequestId = value; }

    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline void SetCreateAccountRequestId(Aws::String&& value) { m_createAccountRequestIdHasBeenSet = true; m_createAccountRequestId = std::move(value); }

    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline void SetCreateAccountRequestId(const char* value) { m_createAccountRequestIdHasBeenSet = true; m_createAccountRequestId.assign(value); }

    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline DescribeCreateAccountStatusRequest& WithCreateAccountRequestId(const Aws::String& value) { SetCreateAccountRequestId(value); return *this;}

    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline DescribeCreateAccountStatusRequest& WithCreateAccountRequestId(Aws::String&& value) { SetCreateAccountRequestId(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>Id</code> value that uniquely identifies the
     * <code>CreateAccount</code> request. You can get the value from the
     * <code>CreateAccountStatus.Id</code> response in an earlier <a>CreateAccount</a>
     * request, or from the <a>ListCreateAccountStatus</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for a create account
     * request ID string requires "car-" followed by from 8 to 32 lowercase letters or
     * digits.</p>
     */
    inline DescribeCreateAccountStatusRequest& WithCreateAccountRequestId(const char* value) { SetCreateAccountRequestId(value); return *this;}

  private:

    Aws::String m_createAccountRequestId;
    bool m_createAccountRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
