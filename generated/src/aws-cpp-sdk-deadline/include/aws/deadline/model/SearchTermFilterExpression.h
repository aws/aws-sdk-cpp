/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>Searches for a particular search term.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchTermFilterExpression">AWS
   * API Reference</a></p>
   */
  class SearchTermFilterExpression
  {
  public:
    AWS_DEADLINE_API SearchTermFilterExpression() = default;
    AWS_DEADLINE_API SearchTermFilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SearchTermFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The term to search for.</p>
     */
    inline const Aws::String& GetSearchTerm() const { return m_searchTerm; }
    inline bool SearchTermHasBeenSet() const { return m_searchTermHasBeenSet; }
    template<typename SearchTermT = Aws::String>
    void SetSearchTerm(SearchTermT&& value) { m_searchTermHasBeenSet = true; m_searchTerm = std::forward<SearchTermT>(value); }
    template<typename SearchTermT = Aws::String>
    SearchTermFilterExpression& WithSearchTerm(SearchTermT&& value) { SetSearchTerm(std::forward<SearchTermT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchTerm;
    bool m_searchTermHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
