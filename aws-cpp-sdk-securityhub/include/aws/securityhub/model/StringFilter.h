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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StringFilterComparison.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A string filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StringFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API StringFilter
  {
  public:
    StringFilter();
    StringFilter(Aws::Utils::Json::JsonView jsonValue);
    StringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string filter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The string filter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The string filter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The string filter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The string filter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The string filter value.</p>
     */
    inline StringFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The string filter value.</p>
     */
    inline StringFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The string filter value.</p>
     */
    inline StringFilter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The condition to be applied to a string value when querying for findings.
     * </p>
     */
    inline const StringFilterComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The condition to be applied to a string value when querying for findings.
     * </p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The condition to be applied to a string value when querying for findings.
     * </p>
     */
    inline void SetComparison(const StringFilterComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The condition to be applied to a string value when querying for findings.
     * </p>
     */
    inline void SetComparison(StringFilterComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The condition to be applied to a string value when querying for findings.
     * </p>
     */
    inline StringFilter& WithComparison(const StringFilterComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The condition to be applied to a string value when querying for findings.
     * </p>
     */
    inline StringFilter& WithComparison(StringFilterComparison&& value) { SetComparison(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    StringFilterComparison m_comparison;
    bool m_comparisonHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
