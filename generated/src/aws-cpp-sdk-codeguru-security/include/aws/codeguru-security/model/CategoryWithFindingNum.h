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
    AWS_CODEGURUSECURITY_API CategoryWithFindingNum();
    AWS_CODEGURUSECURITY_API CategoryWithFindingNum(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API CategoryWithFindingNum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline const Aws::String& GetCategoryName() const{ return m_categoryName; }

    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }

    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline void SetCategoryName(const Aws::String& value) { m_categoryNameHasBeenSet = true; m_categoryName = value; }

    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline void SetCategoryName(Aws::String&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::move(value); }

    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline void SetCategoryName(const char* value) { m_categoryNameHasBeenSet = true; m_categoryName.assign(value); }

    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline CategoryWithFindingNum& WithCategoryName(const Aws::String& value) { SetCategoryName(value); return *this;}

    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline CategoryWithFindingNum& WithCategoryName(Aws::String&& value) { SetCategoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the finding category. A finding category is determined by the
     * detector that detected the finding.</p>
     */
    inline CategoryWithFindingNum& WithCategoryName(const char* value) { SetCategoryName(value); return *this;}


    /**
     * <p>The number of open findings in the category.</p>
     */
    inline int GetFindingNumber() const{ return m_findingNumber; }

    /**
     * <p>The number of open findings in the category.</p>
     */
    inline bool FindingNumberHasBeenSet() const { return m_findingNumberHasBeenSet; }

    /**
     * <p>The number of open findings in the category.</p>
     */
    inline void SetFindingNumber(int value) { m_findingNumberHasBeenSet = true; m_findingNumber = value; }

    /**
     * <p>The number of open findings in the category.</p>
     */
    inline CategoryWithFindingNum& WithFindingNumber(int value) { SetFindingNumber(value); return *this;}

  private:

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet = false;

    int m_findingNumber;
    bool m_findingNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
