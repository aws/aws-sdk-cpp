/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>High-level information about a
   * <a>RuleGroup</a>, returned by operations like create and list. This provides
   * information like the ID, that you can use to retrieve and manage a
   * <code>RuleGroup</code>, and the ARN, that you provide to the
   * <a>RuleGroupReferenceStatement</a> to use the rule group in a
   * <a>Rule</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RuleGroupSummary">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API RuleGroupSummary
  {
  public:
    RuleGroupSummary();
    RuleGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    RuleGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data type instance. You cannot change the name after you
     * create the instance.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data type instance. You cannot change the name after you
     * create the instance.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data type instance. You cannot change the name after you
     * create the instance.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data type instance. You cannot change the name after you
     * create the instance.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data type instance. You cannot change the name after you
     * create the instance.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data type instance. You cannot change the name after you
     * create the instance.</p>
     */
    inline RuleGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data type instance. You cannot change the name after you
     * create the instance.</p>
     */
    inline RuleGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data type instance. You cannot change the name after you
     * create the instance.</p>
     */
    inline RuleGroupSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline RuleGroupSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline RuleGroupSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the rule group. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline RuleGroupSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description of the rule group that helps with identification. You cannot
     * change the description of a rule group after you create it.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the rule group that helps with identification. You cannot
     * change the description of a rule group after you create it.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the rule group that helps with identification. You cannot
     * change the description of a rule group after you create it.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the rule group that helps with identification. You cannot
     * change the description of a rule group after you create it.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the rule group that helps with identification. You cannot
     * change the description of a rule group after you create it.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the rule group that helps with identification. You cannot
     * change the description of a rule group after you create it.</p>
     */
    inline RuleGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the rule group that helps with identification. You cannot
     * change the description of a rule group after you create it.</p>
     */
    inline RuleGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the rule group that helps with identification. You cannot
     * change the description of a rule group after you create it.</p>
     */
    inline RuleGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(const Aws::String& value) { m_lockTokenHasBeenSet = true; m_lockToken = value; }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(Aws::String&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline void SetLockToken(const char* value) { m_lockTokenHasBeenSet = true; m_lockToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline RuleGroupSummary& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline RuleGroupSummary& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. AWS WAF returns a token to your get and
     * list requests, to mark the state of the entity at the time of the request. To
     * make changes to the entity associated with the token, you provide the token to
     * operations like update and delete. AWS WAF uses the token to ensure that no
     * changes have been made to the entity since you last retrieved it. If a change
     * has been made, the update fails with a <code>WAFOptimisticLockException</code>.
     * If this happens, perform another get, and use the new token returned by that
     * operation. </p>
     */
    inline RuleGroupSummary& WithLockToken(const char* value) { SetLockToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupSummary& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupSummary& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RuleGroupSummary& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
