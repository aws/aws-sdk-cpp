/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ConditionType.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains an array of triplets made up of a condition type (such as
   * <code>StringEquals</code>), a key, and a value. Used to filter resources using
   * their tags and assign them to a backup plan. Case sensitive.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_BACKUP_API Condition();
    AWS_BACKUP_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An operation applied to a key-value pair used to assign resources to your
     * backup plan. Condition only supports <code>StringEquals</code>. For more
     * flexible assignment options, including <code>StringLike</code> and the ability
     * to exclude resources from your backup plan, use <code>Conditions</code> (with an
     * "s" on the end) for your <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BackupSelection.html">
     * <code>BackupSelection</code> </a>.</p>
     */
    inline const ConditionType& GetConditionType() const{ return m_conditionType; }

    /**
     * <p>An operation applied to a key-value pair used to assign resources to your
     * backup plan. Condition only supports <code>StringEquals</code>. For more
     * flexible assignment options, including <code>StringLike</code> and the ability
     * to exclude resources from your backup plan, use <code>Conditions</code> (with an
     * "s" on the end) for your <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BackupSelection.html">
     * <code>BackupSelection</code> </a>.</p>
     */
    inline bool ConditionTypeHasBeenSet() const { return m_conditionTypeHasBeenSet; }

    /**
     * <p>An operation applied to a key-value pair used to assign resources to your
     * backup plan. Condition only supports <code>StringEquals</code>. For more
     * flexible assignment options, including <code>StringLike</code> and the ability
     * to exclude resources from your backup plan, use <code>Conditions</code> (with an
     * "s" on the end) for your <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BackupSelection.html">
     * <code>BackupSelection</code> </a>.</p>
     */
    inline void SetConditionType(const ConditionType& value) { m_conditionTypeHasBeenSet = true; m_conditionType = value; }

    /**
     * <p>An operation applied to a key-value pair used to assign resources to your
     * backup plan. Condition only supports <code>StringEquals</code>. For more
     * flexible assignment options, including <code>StringLike</code> and the ability
     * to exclude resources from your backup plan, use <code>Conditions</code> (with an
     * "s" on the end) for your <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BackupSelection.html">
     * <code>BackupSelection</code> </a>.</p>
     */
    inline void SetConditionType(ConditionType&& value) { m_conditionTypeHasBeenSet = true; m_conditionType = std::move(value); }

    /**
     * <p>An operation applied to a key-value pair used to assign resources to your
     * backup plan. Condition only supports <code>StringEquals</code>. For more
     * flexible assignment options, including <code>StringLike</code> and the ability
     * to exclude resources from your backup plan, use <code>Conditions</code> (with an
     * "s" on the end) for your <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BackupSelection.html">
     * <code>BackupSelection</code> </a>.</p>
     */
    inline Condition& WithConditionType(const ConditionType& value) { SetConditionType(value); return *this;}

    /**
     * <p>An operation applied to a key-value pair used to assign resources to your
     * backup plan. Condition only supports <code>StringEquals</code>. For more
     * flexible assignment options, including <code>StringLike</code> and the ability
     * to exclude resources from your backup plan, use <code>Conditions</code> (with an
     * "s" on the end) for your <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BackupSelection.html">
     * <code>BackupSelection</code> </a>.</p>
     */
    inline Condition& WithConditionType(ConditionType&& value) { SetConditionType(std::move(value)); return *this;}


    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline const Aws::String& GetConditionKey() const{ return m_conditionKey; }

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline bool ConditionKeyHasBeenSet() const { return m_conditionKeyHasBeenSet; }

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline void SetConditionKey(const Aws::String& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = value; }

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline void SetConditionKey(Aws::String&& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = std::move(value); }

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline void SetConditionKey(const char* value) { m_conditionKeyHasBeenSet = true; m_conditionKey.assign(value); }

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline Condition& WithConditionKey(const Aws::String& value) { SetConditionKey(value); return *this;}

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline Condition& WithConditionKey(Aws::String&& value) { SetConditionKey(std::move(value)); return *this;}

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline Condition& WithConditionKey(const char* value) { SetConditionKey(value); return *this;}


    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline const Aws::String& GetConditionValue() const{ return m_conditionValue; }

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline bool ConditionValueHasBeenSet() const { return m_conditionValueHasBeenSet; }

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline void SetConditionValue(const Aws::String& value) { m_conditionValueHasBeenSet = true; m_conditionValue = value; }

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline void SetConditionValue(Aws::String&& value) { m_conditionValueHasBeenSet = true; m_conditionValue = std::move(value); }

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline void SetConditionValue(const char* value) { m_conditionValueHasBeenSet = true; m_conditionValue.assign(value); }

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline Condition& WithConditionValue(const Aws::String& value) { SetConditionValue(value); return *this;}

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline Condition& WithConditionValue(Aws::String&& value) { SetConditionValue(std::move(value)); return *this;}

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline Condition& WithConditionValue(const char* value) { SetConditionValue(value); return *this;}

  private:

    ConditionType m_conditionType;
    bool m_conditionTypeHasBeenSet = false;

    Aws::String m_conditionKey;
    bool m_conditionKeyHasBeenSet = false;

    Aws::String m_conditionValue;
    bool m_conditionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
