/**
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
   * <p>A stateless rule group that is used by the firewall policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FirewallPolicyStatelessRuleGroupReferencesDetails">AWS
   * API Reference</a></p>
   */
  class FirewallPolicyStatelessRuleGroupReferencesDetails
  {
  public:
    AWS_SECURITYHUB_API FirewallPolicyStatelessRuleGroupReferencesDetails();
    AWS_SECURITYHUB_API FirewallPolicyStatelessRuleGroupReferencesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FirewallPolicyStatelessRuleGroupReferencesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The order in which to run the stateless rule group.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The order in which to run the stateless rule group.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The order in which to run the stateless rule group.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The order in which to run the stateless rule group.</p>
     */
    inline FirewallPolicyStatelessRuleGroupReferencesDetails& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline FirewallPolicyStatelessRuleGroupReferencesDetails& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline FirewallPolicyStatelessRuleGroupReferencesDetails& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stateless rule group.</p>
     */
    inline FirewallPolicyStatelessRuleGroupReferencesDetails& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
