/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
   * <p>Includes information about tags you define to assign tagged resources to a
   * backup plan.</p> <p>Include the prefix <code>aws:ResourceTag</code> in your
   * tags. For example, <code>"aws:ResourceTag/TagKey1":
   * "Value1"</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ConditionParameter">AWS
   * API Reference</a></p>
   */
  class ConditionParameter
  {
  public:
    AWS_BACKUP_API ConditionParameter();
    AWS_BACKUP_API ConditionParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ConditionParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline const Aws::String& GetConditionKey() const{ return m_conditionKey; }
    inline bool ConditionKeyHasBeenSet() const { return m_conditionKeyHasBeenSet; }
    inline void SetConditionKey(const Aws::String& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = value; }
    inline void SetConditionKey(Aws::String&& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = std::move(value); }
    inline void SetConditionKey(const char* value) { m_conditionKeyHasBeenSet = true; m_conditionKey.assign(value); }
    inline ConditionParameter& WithConditionKey(const Aws::String& value) { SetConditionKey(value); return *this;}
    inline ConditionParameter& WithConditionKey(Aws::String&& value) { SetConditionKey(std::move(value)); return *this;}
    inline ConditionParameter& WithConditionKey(const char* value) { SetConditionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline const Aws::String& GetConditionValue() const{ return m_conditionValue; }
    inline bool ConditionValueHasBeenSet() const { return m_conditionValueHasBeenSet; }
    inline void SetConditionValue(const Aws::String& value) { m_conditionValueHasBeenSet = true; m_conditionValue = value; }
    inline void SetConditionValue(Aws::String&& value) { m_conditionValueHasBeenSet = true; m_conditionValue = std::move(value); }
    inline void SetConditionValue(const char* value) { m_conditionValueHasBeenSet = true; m_conditionValue.assign(value); }
    inline ConditionParameter& WithConditionValue(const Aws::String& value) { SetConditionValue(value); return *this;}
    inline ConditionParameter& WithConditionValue(Aws::String&& value) { SetConditionValue(std::move(value)); return *this;}
    inline ConditionParameter& WithConditionValue(const char* value) { SetConditionValue(value); return *this;}
    ///@}
  private:

    Aws::String m_conditionKey;
    bool m_conditionKeyHasBeenSet = false;

    Aws::String m_conditionValue;
    bool m_conditionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
