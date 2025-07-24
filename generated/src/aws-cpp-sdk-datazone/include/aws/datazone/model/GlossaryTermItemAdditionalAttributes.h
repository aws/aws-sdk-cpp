/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/MatchRationaleItem.h>
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
   * <p>The additional attributes of an Amazon DataZone glossary term.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlossaryTermItemAdditionalAttributes">AWS
   * API Reference</a></p>
   */
  class GlossaryTermItemAdditionalAttributes
  {
  public:
    AWS_DATAZONE_API GlossaryTermItemAdditionalAttributes() = default;
    AWS_DATAZONE_API GlossaryTermItemAdditionalAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlossaryTermItemAdditionalAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of rationales indicating why this item was matched by search.</p>
     */
    inline const Aws::Vector<MatchRationaleItem>& GetMatchRationale() const { return m_matchRationale; }
    inline bool MatchRationaleHasBeenSet() const { return m_matchRationaleHasBeenSet; }
    template<typename MatchRationaleT = Aws::Vector<MatchRationaleItem>>
    void SetMatchRationale(MatchRationaleT&& value) { m_matchRationaleHasBeenSet = true; m_matchRationale = std::forward<MatchRationaleT>(value); }
    template<typename MatchRationaleT = Aws::Vector<MatchRationaleItem>>
    GlossaryTermItemAdditionalAttributes& WithMatchRationale(MatchRationaleT&& value) { SetMatchRationale(std::forward<MatchRationaleT>(value)); return *this;}
    template<typename MatchRationaleT = MatchRationaleItem>
    GlossaryTermItemAdditionalAttributes& AddMatchRationale(MatchRationaleT&& value) { m_matchRationaleHasBeenSet = true; m_matchRationale.emplace_back(std::forward<MatchRationaleT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MatchRationaleItem> m_matchRationale;
    bool m_matchRationaleHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
