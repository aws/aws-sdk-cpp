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
   * <p>A JSON-formatted name/value pair that represents the category name and
   * category code of the problem, selected from the <a>DescribeServices</a> response
   * for each AWS service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/Category">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API Category
  {
  public:
    Category();
    Category(Aws::Utils::Json::JsonView jsonValue);
    Category& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The category code for the support case.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The category code for the support case.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The category code for the support case.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The category code for the support case.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The category code for the support case.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The category code for the support case.</p>
     */
    inline Category& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The category code for the support case.</p>
     */
    inline Category& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The category code for the support case.</p>
     */
    inline Category& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The category name for the support case.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The category name for the support case.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The category name for the support case.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The category name for the support case.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The category name for the support case.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The category name for the support case.</p>
     */
    inline Category& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The category name for the support case.</p>
     */
    inline Category& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The category name for the support case.</p>
     */
    inline Category& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
