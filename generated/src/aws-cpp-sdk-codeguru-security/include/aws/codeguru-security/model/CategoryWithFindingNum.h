/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Information about a finding category with open findings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/CategoryWithFindingNum">AWS
   * API Reference</a></p>
   */
  class CategoryWithFindingNum
  {
  public:
    AWS_CODEGURUSECURITY_API CategoryWithFindingNum() = default;
    AWS_CODEGURUSECURITY_API CategoryWithFindingNum(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API CategoryWithFindingNum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline const Aws::String& GetCategoryName() const { return m_categoryName; }
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }
    template<typename CategoryNameT = Aws::String>
    void SetCategoryName(CategoryNameT&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::forward<CategoryNameT>(value); }
    template<typename CategoryNameT = Aws::String>
    CategoryWithFindingNum& WithCategoryName(CategoryNameT&& value) { SetCategoryName(std::forward<CategoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of open findings in the category.</p>
     */
    inline int GetFindingNumber() const { return m_findingNumber; }
    inline bool FindingNumberHasBeenSet() const { return m_findingNumberHasBeenSet; }
    inline void SetFindingNumber(int value) { m_findingNumberHasBeenSet = true; m_findingNumber = value; }
    inline CategoryWithFindingNum& WithFindingNumber(int value) { SetFindingNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet = false;

    int m_findingNumber{0};
    bool m_findingNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
