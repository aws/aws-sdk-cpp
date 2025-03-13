/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UtteranceData
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API UtteranceData() = default;
    AWS_LEXMODELBUILDINGSERVICE_API UtteranceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API UtteranceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text that was entered by the user or the text representation of an audio
     * clip.</p>
     */
    inline const Aws::String& GetUtteranceString() const { return m_utteranceString; }
    inline bool UtteranceStringHasBeenSet() const { return m_utteranceStringHasBeenSet; }
    template<typename UtteranceStringT = Aws::String>
    void SetUtteranceString(UtteranceStringT&& value) { m_utteranceStringHasBeenSet = true; m_utteranceString = std::forward<UtteranceStringT>(value); }
    template<typename UtteranceStringT = Aws::String>
    UtteranceData& WithUtteranceString(UtteranceStringT&& value) { SetUtteranceString(std::forward<UtteranceStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times that the utterance was processed.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline UtteranceData& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of individuals that used the utterance.</p>
     */
    inline int GetDistinctUsers() const { return m_distinctUsers; }
    inline bool DistinctUsersHasBeenSet() const { return m_distinctUsersHasBeenSet; }
    inline void SetDistinctUsers(int value) { m_distinctUsersHasBeenSet = true; m_distinctUsers = value; }
    inline UtteranceData& WithDistinctUsers(int value) { SetDistinctUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the utterance was first recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstUtteredDate() const { return m_firstUtteredDate; }
    inline bool FirstUtteredDateHasBeenSet() const { return m_firstUtteredDateHasBeenSet; }
    template<typename FirstUtteredDateT = Aws::Utils::DateTime>
    void SetFirstUtteredDate(FirstUtteredDateT&& value) { m_firstUtteredDateHasBeenSet = true; m_firstUtteredDate = std::forward<FirstUtteredDateT>(value); }
    template<typename FirstUtteredDateT = Aws::Utils::DateTime>
    UtteranceData& WithFirstUtteredDate(FirstUtteredDateT&& value) { SetFirstUtteredDate(std::forward<FirstUtteredDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the utterance was last recorded.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUtteredDate() const { return m_lastUtteredDate; }
    inline bool LastUtteredDateHasBeenSet() const { return m_lastUtteredDateHasBeenSet; }
    template<typename LastUtteredDateT = Aws::Utils::DateTime>
    void SetLastUtteredDate(LastUtteredDateT&& value) { m_lastUtteredDateHasBeenSet = true; m_lastUtteredDate = std::forward<LastUtteredDateT>(value); }
    template<typename LastUtteredDateT = Aws::Utils::DateTime>
    UtteranceData& WithLastUtteredDate(LastUtteredDateT&& value) { SetLastUtteredDate(std::forward<LastUtteredDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_utteranceString;
    bool m_utteranceStringHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    int m_distinctUsers{0};
    bool m_distinctUsersHasBeenSet = false;

    Aws::Utils::DateTime m_firstUtteredDate{};
    bool m_firstUtteredDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUtteredDate{};
    bool m_lastUtteredDateHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
