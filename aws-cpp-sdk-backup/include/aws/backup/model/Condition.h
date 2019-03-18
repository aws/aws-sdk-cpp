/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <code>StringEquals</code>), a key, and a value. Conditions are used to filter
   * resources in a selection that is assigned to a backup plan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/Condition">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API Condition
  {
  public:
    Condition();
    Condition(Aws::Utils::Json::JsonView jsonValue);
    Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An operation, such as <code>StringEquals</code>, that is applied to a
     * key-value pair used to filter resources in a selection.</p>
     */
    inline const ConditionType& GetConditionType() const{ return m_conditionType; }

    /**
     * <p>An operation, such as <code>StringEquals</code>, that is applied to a
     * key-value pair used to filter resources in a selection.</p>
     */
    inline bool ConditionTypeHasBeenSet() const { return m_conditionTypeHasBeenSet; }

    /**
     * <p>An operation, such as <code>StringEquals</code>, that is applied to a
     * key-value pair used to filter resources in a selection.</p>
     */
    inline void SetConditionType(const ConditionType& value) { m_conditionTypeHasBeenSet = true; m_conditionType = value; }

    /**
     * <p>An operation, such as <code>StringEquals</code>, that is applied to a
     * key-value pair used to filter resources in a selection.</p>
     */
    inline void SetConditionType(ConditionType&& value) { m_conditionTypeHasBeenSet = true; m_conditionType = std::move(value); }

    /**
     * <p>An operation, such as <code>StringEquals</code>, that is applied to a
     * key-value pair used to filter resources in a selection.</p>
     */
    inline Condition& WithConditionType(const ConditionType& value) { SetConditionType(value); return *this;}

    /**
     * <p>An operation, such as <code>StringEquals</code>, that is applied to a
     * key-value pair used to filter resources in a selection.</p>
     */
    inline Condition& WithConditionType(ConditionType&& value) { SetConditionType(std::move(value)); return *this;}


    /**
     * <p>The key in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"ec2:ResourceTag/Department"</code> is the key.</p>
     */
    inline const Aws::String& GetConditionKey() const{ return m_conditionKey; }

    /**
     * <p>The key in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"ec2:ResourceTag/Department"</code> is the key.</p>
     */
    inline bool ConditionKeyHasBeenSet() const { return m_conditionKeyHasBeenSet; }

    /**
     * <p>The key in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"ec2:ResourceTag/Department"</code> is the key.</p>
     */
    inline void SetConditionKey(const Aws::String& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = value; }

    /**
     * <p>The key in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"ec2:ResourceTag/Department"</code> is the key.</p>
     */
    inline void SetConditionKey(Aws::String&& value) { m_conditionKeyHasBeenSet = true; m_conditionKey = std::move(value); }

    /**
     * <p>The key in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"ec2:ResourceTag/Department"</code> is the key.</p>
     */
    inline void SetConditionKey(const char* value) { m_conditionKeyHasBeenSet = true; m_conditionKey.assign(value); }

    /**
     * <p>The key in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"ec2:ResourceTag/Department"</code> is the key.</p>
     */
    inline Condition& WithConditionKey(const Aws::String& value) { SetConditionKey(value); return *this;}

    /**
     * <p>The key in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"ec2:ResourceTag/Department"</code> is the key.</p>
     */
    inline Condition& WithConditionKey(Aws::String&& value) { SetConditionKey(std::move(value)); return *this;}

    /**
     * <p>The key in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"ec2:ResourceTag/Department"</code> is the key.</p>
     */
    inline Condition& WithConditionKey(const char* value) { SetConditionKey(value); return *this;}


    /**
     * <p>The value in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"accounting"</code> is the value.</p>
     */
    inline const Aws::String& GetConditionValue() const{ return m_conditionValue; }

    /**
     * <p>The value in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"accounting"</code> is the value.</p>
     */
    inline bool ConditionValueHasBeenSet() const { return m_conditionValueHasBeenSet; }

    /**
     * <p>The value in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"accounting"</code> is the value.</p>
     */
    inline void SetConditionValue(const Aws::String& value) { m_conditionValueHasBeenSet = true; m_conditionValue = value; }

    /**
     * <p>The value in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"accounting"</code> is the value.</p>
     */
    inline void SetConditionValue(Aws::String&& value) { m_conditionValueHasBeenSet = true; m_conditionValue = std::move(value); }

    /**
     * <p>The value in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"accounting"</code> is the value.</p>
     */
    inline void SetConditionValue(const char* value) { m_conditionValueHasBeenSet = true; m_conditionValue.assign(value); }

    /**
     * <p>The value in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"accounting"</code> is the value.</p>
     */
    inline Condition& WithConditionValue(const Aws::String& value) { SetConditionValue(value); return *this;}

    /**
     * <p>The value in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"accounting"</code> is the value.</p>
     */
    inline Condition& WithConditionValue(Aws::String&& value) { SetConditionValue(std::move(value)); return *this;}

    /**
     * <p>The value in a key-value pair. For example, in
     * <code>"ec2:ResourceTag/Department": "accounting"</code>,
     * <code>"accounting"</code> is the value.</p>
     */
    inline Condition& WithConditionValue(const char* value) { SetConditionValue(value); return *this;}

  private:

    ConditionType m_conditionType;
    bool m_conditionTypeHasBeenSet;

    Aws::String m_conditionKey;
    bool m_conditionKeyHasBeenSet;

    Aws::String m_conditionValue;
    bool m_conditionValueHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
