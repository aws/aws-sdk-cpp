﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class AWS_S3CONTROL_API PutAccessPointPolicyForObjectLambdaRequest : public S3ControlRequest
  {
  public:
    PutAccessPointPolicyForObjectLambdaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccessPointPolicyForObjectLambda"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID for the account that owns the specified Object Lambda Access
     * Point.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline PutAccessPointPolicyForObjectLambdaRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
