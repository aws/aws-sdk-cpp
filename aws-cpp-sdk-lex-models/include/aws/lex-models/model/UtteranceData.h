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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides information about a single utterance that was made to your bot.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/UtteranceData">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API UtteranceData
  {
  public:
    UtteranceData();
    UtteranceData(Aws::Utils::Json::JsonView jsonValue);
    UtteranceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline const Aws::String& GetUtteranceString() const{ return m_utteranceString; }

    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline bool UtteranceStringHasBeenSet() const { return m_utteranceStringHasBeenSet; }

    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline void SetUtteranceString(const Aws::String& value) { m_utteranceStringHasBeenSet = true; m_utteranceString = value; }

    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline void SetUtteranceString(Aws::String&& value) { m_utteranceStringHasBeenSet = true; m_utteranceString = std::move(value); }

    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline void SetUtteranceString(const char* value) { m_utteranceStringHasBeenSet = true; m_utteranceString.assign(value); }

    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline UtteranceData& WithUtteranceString(const Aws::String& value) { SetUtteranceString(value); return *this;}

    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline UtteranceData& WithUtteranceString(Aws::String&& value) { SetUtteranceString(std::move(value)); return *this;}

    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline UtteranceData& WithUtteranceString(const char* value) { SetUtteranceString(value); return *this;}


    /**
     * <p>The number of times that the utterance was processed.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of times that the utterance was processed.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of times that the utterance was processed.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of times that the utterance was processed.</p>
     */
    inline UtteranceData& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The total number of individuals that used the utterance.</p>
     */
    inline int GetDistinctUsers() const{ return m_distinctUsers; }

    /**
     * <p>The total number of individuals that used the utterance.</p>
     */
    inline bool DistinctUsersHasBeenSet() const { return m_distinctUsersHasBeenSet; }

    /**
     * <p>The total number of individuals that used the utterance.</p>
     */
    inline void SetDistinctUsers(int value) { m_distinctUsersHasBeenSet = true; m_distinctUsers = value; }

    /**
     * <p>The total number of individuals that used the utterance.</p>
     */
    inline UtteranceData& WithDistinctUsers(int value) { SetDistinctUsers(value); return *this;}


    /**
     * <p>The date that the utterance was first recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstUtteredDate() const{ return m_firstUtteredDate; }

    /**
     * <p>The date that the utterance was first recorded.</p>
     */
    inline bool FirstUtteredDateHasBeenSet() const { return m_firstUtteredDateHasBeenSet; }

    /**
     * <p>The date that the utterance was first recorded.</p>
     */
    inline void SetFirstUtteredDate(const Aws::Utils::DateTime& value) { m_firstUtteredDateHasBeenSet = true; m_firstUtteredDate = value; }

    /**
     * <p>The date that the utterance was first recorded.</p>
     */
    inline void SetFirstUtteredDate(Aws::Utils::DateTime&& value) { m_firstUtteredDateHasBeenSet = true; m_firstUtteredDate = std::move(value); }

    /**
     * <p>The date that the utterance was first recorded.</p>
     */
    inline UtteranceData& WithFirstUtteredDate(const Aws::Utils::DateTime& value) { SetFirstUtteredDate(value); return *this;}

    /**
     * <p>The date that the utterance was first recorded.</p>
     */
    inline UtteranceData& WithFirstUtteredDate(Aws::Utils::DateTime&& value) { SetFirstUtteredDate(std::move(value)); return *this;}


    /**
     * <p>The date that the utterance was last recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUtteredDate() const{ return m_lastUtteredDate; }

    /**
     * <p>The date that the utterance was last recorded.</p>
     */
    inline bool LastUtteredDateHasBeenSet() const { return m_lastUtteredDateHasBeenSet; }

    /**
     * <p>The date that the utterance was last recorded.</p>
     */
    inline void SetLastUtteredDate(const Aws::Utils::DateTime& value) { m_lastUtteredDateHasBeenSet = true; m_lastUtteredDate = value; }

    /**
     * <p>The date that the utterance was last recorded.</p>
     */
    inline void SetLastUtteredDate(Aws::Utils::DateTime&& value) { m_lastUtteredDateHasBeenSet = true; m_lastUtteredDate = std::move(value); }

    /**
     * <p>The date that the utterance was last recorded.</p>
     */
    inline UtteranceData& WithLastUtteredDate(const Aws::Utils::DateTime& value) { SetLastUtteredDate(value); return *this;}

    /**
     * <p>The date that the utterance was last recorded.</p>
     */
    inline UtteranceData& WithLastUtteredDate(Aws::Utils::DateTime&& value) { SetLastUtteredDate(std::move(value)); return *this;}

  private:

    Aws::String m_utteranceString;
    bool m_utteranceStringHasBeenSet;

    int m_count;
    bool m_countHasBeenSet;

    int m_distinctUsers;
    bool m_distinctUsersHasBeenSet;

    Aws::Utils::DateTime m_firstUtteredDate;
    bool m_firstUtteredDateHasBeenSet;

    Aws::Utils::DateTime m_lastUtteredDate;
    bool m_lastUtteredDateHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
