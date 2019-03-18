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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The skill store category that is shown. Alexa skills are assigned a specific
   * skill category during creation, such as News, Social, and Sports.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/Category">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API Category
  {
  public:
    Category();
    Category(Aws::Utils::Json::JsonView jsonValue);
    Category& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the skill store category.</p>
     */
    inline long long GetCategoryId() const{ return m_categoryId; }

    /**
     * <p>The ID of the skill store category.</p>
     */
    inline bool CategoryIdHasBeenSet() const { return m_categoryIdHasBeenSet; }

    /**
     * <p>The ID of the skill store category.</p>
     */
    inline void SetCategoryId(long long value) { m_categoryIdHasBeenSet = true; m_categoryId = value; }

    /**
     * <p>The ID of the skill store category.</p>
     */
    inline Category& WithCategoryId(long long value) { SetCategoryId(value); return *this;}


    /**
     * <p>The name of the skill store category.</p>
     */
    inline const Aws::String& GetCategoryName() const{ return m_categoryName; }

    /**
     * <p>The name of the skill store category.</p>
     */
    inline bool CategoryNameHasBeenSet() const { return m_categoryNameHasBeenSet; }

    /**
     * <p>The name of the skill store category.</p>
     */
    inline void SetCategoryName(const Aws::String& value) { m_categoryNameHasBeenSet = true; m_categoryName = value; }

    /**
     * <p>The name of the skill store category.</p>
     */
    inline void SetCategoryName(Aws::String&& value) { m_categoryNameHasBeenSet = true; m_categoryName = std::move(value); }

    /**
     * <p>The name of the skill store category.</p>
     */
    inline void SetCategoryName(const char* value) { m_categoryNameHasBeenSet = true; m_categoryName.assign(value); }

    /**
     * <p>The name of the skill store category.</p>
     */
    inline Category& WithCategoryName(const Aws::String& value) { SetCategoryName(value); return *this;}

    /**
     * <p>The name of the skill store category.</p>
     */
    inline Category& WithCategoryName(Aws::String&& value) { SetCategoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the skill store category.</p>
     */
    inline Category& WithCategoryName(const char* value) { SetCategoryName(value); return *this;}

  private:

    long long m_categoryId;
    bool m_categoryIdHasBeenSet;

    Aws::String m_categoryName;
    bool m_categoryNameHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
