﻿/*
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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>Input for GetDataRetrievalPolicy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/GetDataRetrievalPolicyInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API GetDataRetrievalPolicyRequest : public GlacierRequest
  {
  public:
    GetDataRetrievalPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID. </p>
     */
    inline GetDataRetrievalPolicyRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID. </p>
     */
    inline GetDataRetrievalPolicyRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID. This value must match
     * the AWS account ID associated with the credentials used to sign the request. You
     * can either specify an AWS account ID or optionally a single '<code>-</code>'
     * (hyphen), in which case Amazon Glacier uses the AWS account ID associated with
     * the credentials used to sign the request. If you specify your account ID, do not
     * include any hyphens ('-') in the ID. </p>
     */
    inline GetDataRetrievalPolicyRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
