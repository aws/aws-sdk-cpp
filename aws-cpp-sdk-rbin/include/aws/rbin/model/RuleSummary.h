/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/RetentionPeriod.h>
#include <aws/rbin/model/LockState.h>
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
namespace RecycleBin
{
namespace Model
{

  /**
   * <p>Information about a Recycle Bin retention rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/RuleSummary">AWS
   * API Reference</a></p>
   */
  class RuleSummary
  {
  public:
    AWS_RECYCLEBIN_API RuleSummary();
    AWS_RECYCLEBIN_API RuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline RuleSummary& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline RuleSummary& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline RuleSummary& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The retention rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The retention rule description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The retention rule description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The retention rule description.</p>
     */
    inline RuleSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline RuleSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The retention rule description.</p>
     */
    inline RuleSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline RuleSummary& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>Information about the retention period for which the retention rule is to
     * retain resources.</p>
     */
    inline RuleSummary& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>The lock state for the retention rule.</p> <ul> <li> <p> <code>locked</code>
     * - The retention rule is locked and can't be modified or deleted.</p> </li> <li>
     * <p> <code>pending_unlock</code> - The retention rule has been unlocked but it is
     * still within the unlock delay period. The retention rule can be modified or
     * deleted only after the unlock delay period has expired.</p> </li> <li> <p>
     * <code>unlocked</code> - The retention rule is unlocked and it can be modified or
     * deleted by any user with the required permissions.</p> </li> <li> <p>
     * <code>null</code> - The retention rule has never been locked. Once a retention
     * rule has been locked, it can transition between the <code>locked</code> and
     * <code>unlocked</code> states only; it can never transition back to
     * <code>null</code>.</p> </li> </ul>
     */
    inline const LockState& GetLockState() const{ return m_lockState; }

    /**
     * <p>The lock state for the retention rule.</p> <ul> <li> <p> <code>locked</code>
     * - The retention rule is locked and can't be modified or deleted.</p> </li> <li>
     * <p> <code>pending_unlock</code> - The retention rule has been unlocked but it is
     * still within the unlock delay period. The retention rule can be modified or
     * deleted only after the unlock delay period has expired.</p> </li> <li> <p>
     * <code>unlocked</code> - The retention rule is unlocked and it can be modified or
     * deleted by any user with the required permissions.</p> </li> <li> <p>
     * <code>null</code> - The retention rule has never been locked. Once a retention
     * rule has been locked, it can transition between the <code>locked</code> and
     * <code>unlocked</code> states only; it can never transition back to
     * <code>null</code>.</p> </li> </ul>
     */
    inline bool LockStateHasBeenSet() const { return m_lockStateHasBeenSet; }

    /**
     * <p>The lock state for the retention rule.</p> <ul> <li> <p> <code>locked</code>
     * - The retention rule is locked and can't be modified or deleted.</p> </li> <li>
     * <p> <code>pending_unlock</code> - The retention rule has been unlocked but it is
     * still within the unlock delay period. The retention rule can be modified or
     * deleted only after the unlock delay period has expired.</p> </li> <li> <p>
     * <code>unlocked</code> - The retention rule is unlocked and it can be modified or
     * deleted by any user with the required permissions.</p> </li> <li> <p>
     * <code>null</code> - The retention rule has never been locked. Once a retention
     * rule has been locked, it can transition between the <code>locked</code> and
     * <code>unlocked</code> states only; it can never transition back to
     * <code>null</code>.</p> </li> </ul>
     */
    inline void SetLockState(const LockState& value) { m_lockStateHasBeenSet = true; m_lockState = value; }

    /**
     * <p>The lock state for the retention rule.</p> <ul> <li> <p> <code>locked</code>
     * - The retention rule is locked and can't be modified or deleted.</p> </li> <li>
     * <p> <code>pending_unlock</code> - The retention rule has been unlocked but it is
     * still within the unlock delay period. The retention rule can be modified or
     * deleted only after the unlock delay period has expired.</p> </li> <li> <p>
     * <code>unlocked</code> - The retention rule is unlocked and it can be modified or
     * deleted by any user with the required permissions.</p> </li> <li> <p>
     * <code>null</code> - The retention rule has never been locked. Once a retention
     * rule has been locked, it can transition between the <code>locked</code> and
     * <code>unlocked</code> states only; it can never transition back to
     * <code>null</code>.</p> </li> </ul>
     */
    inline void SetLockState(LockState&& value) { m_lockStateHasBeenSet = true; m_lockState = std::move(value); }

    /**
     * <p>The lock state for the retention rule.</p> <ul> <li> <p> <code>locked</code>
     * - The retention rule is locked and can't be modified or deleted.</p> </li> <li>
     * <p> <code>pending_unlock</code> - The retention rule has been unlocked but it is
     * still within the unlock delay period. The retention rule can be modified or
     * deleted only after the unlock delay period has expired.</p> </li> <li> <p>
     * <code>unlocked</code> - The retention rule is unlocked and it can be modified or
     * deleted by any user with the required permissions.</p> </li> <li> <p>
     * <code>null</code> - The retention rule has never been locked. Once a retention
     * rule has been locked, it can transition between the <code>locked</code> and
     * <code>unlocked</code> states only; it can never transition back to
     * <code>null</code>.</p> </li> </ul>
     */
    inline RuleSummary& WithLockState(const LockState& value) { SetLockState(value); return *this;}

    /**
     * <p>The lock state for the retention rule.</p> <ul> <li> <p> <code>locked</code>
     * - The retention rule is locked and can't be modified or deleted.</p> </li> <li>
     * <p> <code>pending_unlock</code> - The retention rule has been unlocked but it is
     * still within the unlock delay period. The retention rule can be modified or
     * deleted only after the unlock delay period has expired.</p> </li> <li> <p>
     * <code>unlocked</code> - The retention rule is unlocked and it can be modified or
     * deleted by any user with the required permissions.</p> </li> <li> <p>
     * <code>null</code> - The retention rule has never been locked. Once a retention
     * rule has been locked, it can transition between the <code>locked</code> and
     * <code>unlocked</code> states only; it can never transition back to
     * <code>null</code>.</p> </li> </ul>
     */
    inline RuleSummary& WithLockState(LockState&& value) { SetLockState(std::move(value)); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet = false;

    LockState m_lockState;
    bool m_lockStateHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
