/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   */
  class GetRuleSetRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API GetRuleSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRuleSet"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of an existing rule set to be retrieved.</p>
     */
    inline const Aws::String& GetRuleSetId() const{ return m_ruleSetId; }

    /**
     * <p>The identifier of an existing rule set to be retrieved.</p>
     */
    inline bool RuleSetIdHasBeenSet() const { return m_ruleSetIdHasBeenSet; }

    /**
     * <p>The identifier of an existing rule set to be retrieved.</p>
     */
    inline void SetRuleSetId(const Aws::String& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = value; }

    /**
     * <p>The identifier of an existing rule set to be retrieved.</p>
     */
    inline void SetRuleSetId(Aws::String&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::move(value); }

    /**
     * <p>The identifier of an existing rule set to be retrieved.</p>
     */
    inline void SetRuleSetId(const char* value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId.assign(value); }

    /**
     * <p>The identifier of an existing rule set to be retrieved.</p>
     */
    inline GetRuleSetRequest& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}

    /**
     * <p>The identifier of an existing rule set to be retrieved.</p>
     */
    inline GetRuleSetRequest& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an existing rule set to be retrieved.</p>
     */
    inline GetRuleSetRequest& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}

  private:

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
