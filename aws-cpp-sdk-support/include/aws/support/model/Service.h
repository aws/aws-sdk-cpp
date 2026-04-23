/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/Category.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>Information about an AWS service returned by the <a>DescribeServices</a>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/Service">AWS API
   * Reference</a></p>
   */
  class AWS_SUPPORT_API Service
  {
  public:
    Service();
    Service(Aws::Utils::Json::JsonView jsonValue);
    Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code for an AWS service returned by the <a>DescribeServices</a> response.
     * The <code>name</code> element contains the corresponding friendly name.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The code for an AWS service returned by the <a>DescribeServices</a> response.
     * The <code>name</code> element contains the corresponding friendly name.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The code for an AWS service returned by the <a>DescribeServices</a> response.
     * The <code>name</code> element contains the corresponding friendly name.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code for an AWS service returned by the <a>DescribeServices</a> response.
     * The <code>name</code> element contains the corresponding friendly name.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code for an AWS service returned by the <a>DescribeServices</a> response.
     * The <code>name</code> element contains the corresponding friendly name.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The code for an AWS service returned by the <a>DescribeServices</a> response.
     * The <code>name</code> element contains the corresponding friendly name.</p>
     */
    inline Service& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The code for an AWS service returned by the <a>DescribeServices</a> response.
     * The <code>name</code> element contains the corresponding friendly name.</p>
     */
    inline Service& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The code for an AWS service returned by the <a>DescribeServices</a> response.
     * The <code>name</code> element contains the corresponding friendly name.</p>
     */
    inline Service& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The friendly name for an AWS service. The <code>code</code> element contains
     * the corresponding code.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name for an AWS service. The <code>code</code> element contains
     * the corresponding code.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name for an AWS service. The <code>code</code> element contains
     * the corresponding code.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name for an AWS service. The <code>code</code> element contains
     * the corresponding code.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name for an AWS service. The <code>code</code> element contains
     * the corresponding code.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name for an AWS service. The <code>code</code> element contains
     * the corresponding code.</p>
     */
    inline Service& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name for an AWS service. The <code>code</code> element contains
     * the corresponding code.</p>
     */
    inline Service& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name for an AWS service. The <code>code</code> element contains
     * the corresponding code.</p>
     */
    inline Service& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to AWS Support when you call <a>CreateCase</a>.</p>
     */
    inline const Aws::Vector<Category>& GetCategories() const{ return m_categories; }

    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to AWS Support when you call <a>CreateCase</a>.</p>
     */
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }

    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to AWS Support when you call <a>CreateCase</a>.</p>
     */
    inline void SetCategories(const Aws::Vector<Category>& value) { m_categoriesHasBeenSet = true; m_categories = value; }

    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to AWS Support when you call <a>CreateCase</a>.</p>
     */
    inline void SetCategories(Aws::Vector<Category>&& value) { m_categoriesHasBeenSet = true; m_categories = std::move(value); }

    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to AWS Support when you call <a>CreateCase</a>.</p>
     */
    inline Service& WithCategories(const Aws::Vector<Category>& value) { SetCategories(value); return *this;}

    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to AWS Support when you call <a>CreateCase</a>.</p>
     */
    inline Service& WithCategories(Aws::Vector<Category>&& value) { SetCategories(std::move(value)); return *this;}

    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to AWS Support when you call <a>CreateCase</a>.</p>
     */
    inline Service& AddCategories(const Category& value) { m_categoriesHasBeenSet = true; m_categories.push_back(value); return *this; }

    /**
     * <p>A list of categories that describe the type of support issue a case
     * describes. Categories consist of a category name and a category code. Category
     * names and codes are passed to AWS Support when you call <a>CreateCase</a>.</p>
     */
    inline Service& AddCategories(Category&& value) { m_categoriesHasBeenSet = true; m_categories.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<Category> m_categories;
    bool m_categoriesHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
