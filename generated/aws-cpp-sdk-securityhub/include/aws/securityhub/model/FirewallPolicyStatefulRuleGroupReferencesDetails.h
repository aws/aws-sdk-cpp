﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A stateful rule group that is used by the firewall policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FirewallPolicyStatefulRuleGroupReferencesDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API FirewallPolicyStatefulRuleGroupReferencesDetails
  {
  public:
    FirewallPolicyStatefulRuleGroupReferencesDetails();
    FirewallPolicyStatefulRuleGroupReferencesDetails(Aws::Utils::Json::JsonView jsonValue);
    FirewallPolicyStatefulRuleGroupReferencesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline FirewallPolicyStatefulRuleGroupReferencesDetails& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline FirewallPolicyStatefulRuleGroupReferencesDetails& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stateful rule group.</p>
     */
    inline FirewallPolicyStatefulRuleGroupReferencesDetails& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
