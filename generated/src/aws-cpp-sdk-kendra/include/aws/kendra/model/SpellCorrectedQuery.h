/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/Correction.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>A query with suggested spell corrections. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SpellCorrectedQuery">AWS
   * API Reference</a></p>
   */
  class SpellCorrectedQuery
  {
  public:
    AWS_KENDRA_API SpellCorrectedQuery() = default;
    AWS_KENDRA_API SpellCorrectedQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SpellCorrectedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query with the suggested spell corrections.</p>
     */
    inline const Aws::String& GetSuggestedQueryText() const { return m_suggestedQueryText; }
    inline bool SuggestedQueryTextHasBeenSet() const { return m_suggestedQueryTextHasBeenSet; }
    template<typename SuggestedQueryTextT = Aws::String>
    void SetSuggestedQueryText(SuggestedQueryTextT&& value) { m_suggestedQueryTextHasBeenSet = true; m_suggestedQueryText = std::forward<SuggestedQueryTextT>(value); }
    template<typename SuggestedQueryTextT = Aws::String>
    SpellCorrectedQuery& WithSuggestedQueryText(SuggestedQueryTextT&& value) { SetSuggestedQueryText(std::forward<SuggestedQueryTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The corrected misspelled word or words in a query.</p>
     */
    inline const Aws::Vector<Correction>& GetCorrections() const { return m_corrections; }
    inline bool CorrectionsHasBeenSet() const { return m_correctionsHasBeenSet; }
    template<typename CorrectionsT = Aws::Vector<Correction>>
    void SetCorrections(CorrectionsT&& value) { m_correctionsHasBeenSet = true; m_corrections = std::forward<CorrectionsT>(value); }
    template<typename CorrectionsT = Aws::Vector<Correction>>
    SpellCorrectedQuery& WithCorrections(CorrectionsT&& value) { SetCorrections(std::forward<CorrectionsT>(value)); return *this;}
    template<typename CorrectionsT = Correction>
    SpellCorrectedQuery& AddCorrections(CorrectionsT&& value) { m_correctionsHasBeenSet = true; m_corrections.emplace_back(std::forward<CorrectionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_suggestedQueryText;
    bool m_suggestedQueryTextHasBeenSet = false;

    Aws::Vector<Correction> m_corrections;
    bool m_correctionsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
