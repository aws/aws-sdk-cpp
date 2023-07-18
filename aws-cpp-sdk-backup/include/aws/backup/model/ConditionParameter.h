﻿/**
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
   * backup plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ConditionParameter">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API ConditionParameter
  {
  public:
    ConditionParameter();
    ConditionParameter(Aws::Utils::Json::JsonView jsonValue);
    ConditionParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ConditionParameter& WithConditionKey(const Aws::String& value) { SetConditionKey(value); return *this;}

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline ConditionParameter& WithConditionKey(Aws::String&& value) { SetConditionKey(std::move(value)); return *this;}

    /**
     * <p>The key in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Department</code> is the key.</p>
     */
    inline ConditionParameter& WithConditionKey(const char* value) { SetConditionKey(value); return *this;}


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
    inline ConditionParameter& WithConditionValue(const Aws::String& value) { SetConditionValue(value); return *this;}

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline ConditionParameter& WithConditionValue(Aws::String&& value) { SetConditionValue(std::move(value)); return *this;}

    /**
     * <p>The value in a key-value pair. For example, in the tag <code>Department:
     * Accounting</code>, <code>Accounting</code> is the value.</p>
     */
    inline ConditionParameter& WithConditionValue(const char* value) { SetConditionValue(value); return *this;}

  private:

    Aws::String m_conditionKey;
    bool m_conditionKeyHasBeenSet;

    Aws::String m_conditionValue;
    bool m_conditionValueHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
