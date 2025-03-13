/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The matching criteria to be used during the auto-merging process.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Consolidation">AWS
   * API Reference</a></p>
   */
  class Consolidation
  {
  public:
    AWS_CUSTOMERPROFILES_API Consolidation() = default;
    AWS_CUSTOMERPROFILES_API Consolidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Consolidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of matching criteria.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetMatchingAttributesList() const { return m_matchingAttributesList; }
    inline bool MatchingAttributesListHasBeenSet() const { return m_matchingAttributesListHasBeenSet; }
    template<typename MatchingAttributesListT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetMatchingAttributesList(MatchingAttributesListT&& value) { m_matchingAttributesListHasBeenSet = true; m_matchingAttributesList = std::forward<MatchingAttributesListT>(value); }
    template<typename MatchingAttributesListT = Aws::Vector<Aws::Vector<Aws::String>>>
    Consolidation& WithMatchingAttributesList(MatchingAttributesListT&& value) { SetMatchingAttributesList(std::forward<MatchingAttributesListT>(value)); return *this;}
    template<typename MatchingAttributesListT = Aws::Vector<Aws::String>>
    Consolidation& AddMatchingAttributesList(MatchingAttributesListT&& value) { m_matchingAttributesListHasBeenSet = true; m_matchingAttributesList.emplace_back(std::forward<MatchingAttributesListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::Vector<Aws::String>> m_matchingAttributesList;
    bool m_matchingAttributesListHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
