/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/StringConditionOperator.h>
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
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>This contains the value of the string and can contain one or more
   * operators.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/StringCondition">AWS
   * API Reference</a></p>
   */
  class StringCondition
  {
  public:
    AWS_BACKUPSEARCH_API StringCondition();
    AWS_BACKUPSEARCH_API StringCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API StringCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the string.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline StringCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline StringCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline StringCondition& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that defines what values will be returned.</p> <p>If this is
     * included, avoid combinations of operators that will return all possible values.
     * For example, including both <code>EQUALS_TO</code> and
     * <code>NOT_EQUALS_TO</code> with a value of <code>4</code> will return all
     * values.</p>
     */
    inline const StringConditionOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const StringConditionOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(StringConditionOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline StringCondition& WithOperator(const StringConditionOperator& value) { SetOperator(value); return *this;}
    inline StringCondition& WithOperator(StringConditionOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    StringConditionOperator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
