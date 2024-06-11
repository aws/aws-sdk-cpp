/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisStringComparison.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The CIS string filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisStringFilter">AWS
   * API Reference</a></p>
   */
  class CisStringFilter
  {
  public:
    AWS_INSPECTOR2_API CisStringFilter();
    AWS_INSPECTOR2_API CisStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison value of the CIS string filter.</p>
     */
    inline const CisStringComparison& GetComparison() const{ return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    inline void SetComparison(const CisStringComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }
    inline void SetComparison(CisStringComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }
    inline CisStringFilter& WithComparison(const CisStringComparison& value) { SetComparison(value); return *this;}
    inline CisStringFilter& WithComparison(CisStringComparison&& value) { SetComparison(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the CIS string filter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline CisStringFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CisStringFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CisStringFilter& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    CisStringComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
