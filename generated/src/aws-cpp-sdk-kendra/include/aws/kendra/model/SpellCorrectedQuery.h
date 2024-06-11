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
    AWS_KENDRA_API SpellCorrectedQuery();
    AWS_KENDRA_API SpellCorrectedQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SpellCorrectedQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query with the suggested spell corrections.</p>
     */
    inline const Aws::String& GetSuggestedQueryText() const{ return m_suggestedQueryText; }
    inline bool SuggestedQueryTextHasBeenSet() const { return m_suggestedQueryTextHasBeenSet; }
    inline void SetSuggestedQueryText(const Aws::String& value) { m_suggestedQueryTextHasBeenSet = true; m_suggestedQueryText = value; }
    inline void SetSuggestedQueryText(Aws::String&& value) { m_suggestedQueryTextHasBeenSet = true; m_suggestedQueryText = std::move(value); }
    inline void SetSuggestedQueryText(const char* value) { m_suggestedQueryTextHasBeenSet = true; m_suggestedQueryText.assign(value); }
    inline SpellCorrectedQuery& WithSuggestedQueryText(const Aws::String& value) { SetSuggestedQueryText(value); return *this;}
    inline SpellCorrectedQuery& WithSuggestedQueryText(Aws::String&& value) { SetSuggestedQueryText(std::move(value)); return *this;}
    inline SpellCorrectedQuery& WithSuggestedQueryText(const char* value) { SetSuggestedQueryText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The corrected misspelled word or words in a query.</p>
     */
    inline const Aws::Vector<Correction>& GetCorrections() const{ return m_corrections; }
    inline bool CorrectionsHasBeenSet() const { return m_correctionsHasBeenSet; }
    inline void SetCorrections(const Aws::Vector<Correction>& value) { m_correctionsHasBeenSet = true; m_corrections = value; }
    inline void SetCorrections(Aws::Vector<Correction>&& value) { m_correctionsHasBeenSet = true; m_corrections = std::move(value); }
    inline SpellCorrectedQuery& WithCorrections(const Aws::Vector<Correction>& value) { SetCorrections(value); return *this;}
    inline SpellCorrectedQuery& WithCorrections(Aws::Vector<Correction>&& value) { SetCorrections(std::move(value)); return *this;}
    inline SpellCorrectedQuery& AddCorrections(const Correction& value) { m_correctionsHasBeenSet = true; m_corrections.push_back(value); return *this; }
    inline SpellCorrectedQuery& AddCorrections(Correction&& value) { m_correctionsHasBeenSet = true; m_corrections.push_back(std::move(value)); return *this; }
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
