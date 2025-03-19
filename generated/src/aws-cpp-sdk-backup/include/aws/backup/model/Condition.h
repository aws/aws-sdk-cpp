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
    AWS_BACKUP_API Condition() = default;
    AWS_BACKUP_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An operation applied to a key-value pair used to assign resources to your
     * backup plan. Condition only supports <code>StringEquals</code>. For more
     * flexible assignment options, including <code>StringLike</code> and the ability
     * to exclude resources from your backup plan, use <code>Conditions</code> (with an
     * "s" on the end) for your <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/API_BackupSelection.html">
     * <code>BackupSelection</code> </a>.</p>
     */
    inline ConditionType GetConditionType() const { return m_conditionType; }
    inline bool ConditionTypeHasBeenSet() const { return m_conditionTypeHasBeenSet; }
    inline void SetConditionType(ConditionType value) { m_conditionTypeHasBeenSet = true; m_conditionType = value; }
    inline Condition& WithConditionType(ConditionType value) { SetConditionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline const Aws::String& GetConditionKey() const { return m_conditionKey; }
    inline bool ConditionKeyHasBeenSet() const { return m_conditionKeyHasBeenSet; }
    template<typename ConditionKeyT = Aws::String>
    void SetConditionKey(ConditionKeyT&& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = std::forward<ConditionKeyT>(value); }
    template<typename ConditionKeyT = Aws::String>
    Condition& WithConditionKey(ConditionKeyT&& value) { SetConditionKey(std::forward<ConditionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline const Aws::String& GetConditionValue() const { return m_conditionValue; }
    inline bool ConditionValueHasBeenSet() const { return m_conditionValueHasBeenSet; }
    template<typename ConditionValueT = Aws::String>
    void SetConditionValue(ConditionValueT&& value) { m_conditionValueHasBeenSet = true; m_conditionValue = std::forward<ConditionValueT>(value); }
    template<typename ConditionValueT = Aws::String>
    Condition& WithConditionValue(ConditionValueT&& value) { SetConditionValue(std::forward<ConditionValueT>(value)); return *this;}
    ///@}
  private:

    ConditionType m_conditionType{ConditionType::NOT_SET};
    bool m_conditionTypeHasBeenSet = false;

    Aws::String m_conditionKey;
    bool m_conditionKeyHasBeenSet = false;

    Aws::String m_conditionValue;
    bool m_conditionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
