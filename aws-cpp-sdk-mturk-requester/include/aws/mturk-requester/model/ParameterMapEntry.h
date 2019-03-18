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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> This data structure is the data type for the AnswerKey parameter of the
   * ScoreMyKnownAnswers/2011-09-01 Review Policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ParameterMapEntry">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API ParameterMapEntry
  {
  public:
    ParameterMapEntry();
    ParameterMapEntry(Aws::Utils::Json::JsonView jsonValue);
    ParameterMapEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The QuestionID from the HIT that is used to identify which question requires
     * Mechanical Turk to score as part of the ScoreMyKnownAnswers/2011-09-01 Review
     * Policy. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> The QuestionID from the HIT that is used to identify which question requires
     * Mechanical Turk to score as part of the ScoreMyKnownAnswers/2011-09-01 Review
     * Policy. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> The QuestionID from the HIT that is used to identify which question requires
     * Mechanical Turk to score as part of the ScoreMyKnownAnswers/2011-09-01 Review
     * Policy. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> The QuestionID from the HIT that is used to identify which question requires
     * Mechanical Turk to score as part of the ScoreMyKnownAnswers/2011-09-01 Review
     * Policy. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> The QuestionID from the HIT that is used to identify which question requires
     * Mechanical Turk to score as part of the ScoreMyKnownAnswers/2011-09-01 Review
     * Policy. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> The QuestionID from the HIT that is used to identify which question requires
     * Mechanical Turk to score as part of the ScoreMyKnownAnswers/2011-09-01 Review
     * Policy. </p>
     */
    inline ParameterMapEntry& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> The QuestionID from the HIT that is used to identify which question requires
     * Mechanical Turk to score as part of the ScoreMyKnownAnswers/2011-09-01 Review
     * Policy. </p>
     */
    inline ParameterMapEntry& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> The QuestionID from the HIT that is used to identify which question requires
     * Mechanical Turk to score as part of the ScoreMyKnownAnswers/2011-09-01 Review
     * Policy. </p>
     */
    inline ParameterMapEntry& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline ParameterMapEntry& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline ParameterMapEntry& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline ParameterMapEntry& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline ParameterMapEntry& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of answers to the question specified in the MapEntry Key element.
     * The Worker must match all values in order for the answer to be scored correctly.
     * </p>
     */
    inline ParameterMapEntry& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
