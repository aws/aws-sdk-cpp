﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class PutPolicyRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API PutPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPolicy"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy needs to
     * be updated.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline PutPolicyRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PutPolicyRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PutPolicyRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource-based policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline PutPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline PutPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline PutPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }
    inline PutPolicyRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline PutPolicyRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline PutPolicyRequest& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
