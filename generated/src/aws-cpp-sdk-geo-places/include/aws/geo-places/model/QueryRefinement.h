/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>Suggestions for refining individual query terms. Suggestions are returned as
   * objects which note the term, suggested replacement, and its index in the query.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/QueryRefinement">AWS
   * API Reference</a></p>
   */
  class QueryRefinement
  {
  public:
    AWS_GEOPLACES_API QueryRefinement() = default;
    AWS_GEOPLACES_API QueryRefinement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API QueryRefinement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The term that will be suggested to the user.</p>
     */
    inline const Aws::String& GetRefinedTerm() const { return m_refinedTerm; }
    inline bool RefinedTermHasBeenSet() const { return m_refinedTermHasBeenSet; }
    template<typename RefinedTermT = Aws::String>
    void SetRefinedTerm(RefinedTermT&& value) { m_refinedTermHasBeenSet = true; m_refinedTerm = std::forward<RefinedTermT>(value); }
    template<typename RefinedTermT = Aws::String>
    QueryRefinement& WithRefinedTerm(RefinedTermT&& value) { SetRefinedTerm(std::forward<RefinedTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sub-string of the original query that is replaced by this query term.</p>
     */
    inline const Aws::String& GetOriginalTerm() const { return m_originalTerm; }
    inline bool OriginalTermHasBeenSet() const { return m_originalTermHasBeenSet; }
    template<typename OriginalTermT = Aws::String>
    void SetOriginalTerm(OriginalTermT&& value) { m_originalTermHasBeenSet = true; m_originalTerm = std::forward<OriginalTermT>(value); }
    template<typename OriginalTermT = Aws::String>
    QueryRefinement& WithOriginalTerm(OriginalTermT&& value) { SetOriginalTerm(std::forward<OriginalTermT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start index of the parsed component.</p>
     */
    inline int GetStartIndex() const { return m_startIndex; }
    inline bool StartIndexHasBeenSet() const { return m_startIndexHasBeenSet; }
    inline void SetStartIndex(int value) { m_startIndexHasBeenSet = true; m_startIndex = value; }
    inline QueryRefinement& WithStartIndex(int value) { SetStartIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End index of the parsed query.</p>
     */
    inline int GetEndIndex() const { return m_endIndex; }
    inline bool EndIndexHasBeenSet() const { return m_endIndexHasBeenSet; }
    inline void SetEndIndex(int value) { m_endIndexHasBeenSet = true; m_endIndex = value; }
    inline QueryRefinement& WithEndIndex(int value) { SetEndIndex(value); return *this;}
    ///@}
  private:

    Aws::String m_refinedTerm;
    bool m_refinedTermHasBeenSet = false;

    Aws::String m_originalTerm;
    bool m_originalTermHasBeenSet = false;

    int m_startIndex{0};
    bool m_startIndexHasBeenSet = false;

    int m_endIndex{0};
    bool m_endIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
