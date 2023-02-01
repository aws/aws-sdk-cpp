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
    AWS_CUSTOMERPROFILES_API Consolidation();
    AWS_CUSTOMERPROFILES_API Consolidation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Consolidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of matching criteria.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetMatchingAttributesList() const{ return m_matchingAttributesList; }

    /**
     * <p>A list of matching criteria.</p>
     */
    inline bool MatchingAttributesListHasBeenSet() const { return m_matchingAttributesListHasBeenSet; }

    /**
     * <p>A list of matching criteria.</p>
     */
    inline void SetMatchingAttributesList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_matchingAttributesListHasBeenSet = true; m_matchingAttributesList = value; }

    /**
     * <p>A list of matching criteria.</p>
     */
    inline void SetMatchingAttributesList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_matchingAttributesListHasBeenSet = true; m_matchingAttributesList = std::move(value); }

    /**
     * <p>A list of matching criteria.</p>
     */
    inline Consolidation& WithMatchingAttributesList(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetMatchingAttributesList(value); return *this;}

    /**
     * <p>A list of matching criteria.</p>
     */
    inline Consolidation& WithMatchingAttributesList(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetMatchingAttributesList(std::move(value)); return *this;}

    /**
     * <p>A list of matching criteria.</p>
     */
    inline Consolidation& AddMatchingAttributesList(const Aws::Vector<Aws::String>& value) { m_matchingAttributesListHasBeenSet = true; m_matchingAttributesList.push_back(value); return *this; }

    /**
     * <p>A list of matching criteria.</p>
     */
    inline Consolidation& AddMatchingAttributesList(Aws::Vector<Aws::String>&& value) { m_matchingAttributesListHasBeenSet = true; m_matchingAttributesList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Vector<Aws::String>> m_matchingAttributesList;
    bool m_matchingAttributesListHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
