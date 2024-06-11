﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class DescribeSecurityPolicyRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API DescribeSecurityPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSecurityPolicy"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the text name of the security policy for which you want the
     * details.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const{ return m_securityPolicyName; }
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }
    inline void SetSecurityPolicyName(const Aws::String& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = value; }
    inline void SetSecurityPolicyName(Aws::String&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::move(value); }
    inline void SetSecurityPolicyName(const char* value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName.assign(value); }
    inline DescribeSecurityPolicyRequest& WithSecurityPolicyName(const Aws::String& value) { SetSecurityPolicyName(value); return *this;}
    inline DescribeSecurityPolicyRequest& WithSecurityPolicyName(Aws::String&& value) { SetSecurityPolicyName(std::move(value)); return *this;}
    inline DescribeSecurityPolicyRequest& WithSecurityPolicyName(const char* value) { SetSecurityPolicyName(value); return *this;}
    ///@}
  private:

    Aws::String m_securityPolicyName;
    bool m_securityPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
