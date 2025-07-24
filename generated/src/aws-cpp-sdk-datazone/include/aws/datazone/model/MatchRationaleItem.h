/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/TextMatchItem.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>A rationale indicating why this item was matched by search. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MatchRationaleItem">AWS
   * API Reference</a></p>
   */
  class MatchRationaleItem
  {
  public:
    AWS_DATAZONE_API MatchRationaleItem() = default;
    AWS_DATAZONE_API MatchRationaleItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MatchRationaleItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of TextMatchItems.</p>
     */
    inline const Aws::Vector<TextMatchItem>& GetTextMatches() const { return m_textMatches; }
    inline bool TextMatchesHasBeenSet() const { return m_textMatchesHasBeenSet; }
    template<typename TextMatchesT = Aws::Vector<TextMatchItem>>
    void SetTextMatches(TextMatchesT&& value) { m_textMatchesHasBeenSet = true; m_textMatches = std::forward<TextMatchesT>(value); }
    template<typename TextMatchesT = Aws::Vector<TextMatchItem>>
    MatchRationaleItem& WithTextMatches(TextMatchesT&& value) { SetTextMatches(std::forward<TextMatchesT>(value)); return *this;}
    template<typename TextMatchesT = TextMatchItem>
    MatchRationaleItem& AddTextMatches(TextMatchesT&& value) { m_textMatchesHasBeenSet = true; m_textMatches.emplace_back(std::forward<TextMatchesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TextMatchItem> m_textMatches;
    bool m_textMatchesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
