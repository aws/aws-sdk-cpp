/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConfigurationRecorderFilterName.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Filters configuration recorders by recording scope.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigurationRecorderFilter">AWS
   * API Reference</a></p>
   */
  class ConfigurationRecorderFilter
  {
  public:
    AWS_CONFIGSERVICE_API ConfigurationRecorderFilter() = default;
    AWS_CONFIGSERVICE_API ConfigurationRecorderFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationRecorderFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the type of filter. Currently, only <code>recordingScope</code>
     * is supported.</p>
     */
    inline ConfigurationRecorderFilterName GetFilterName() const { return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    inline void SetFilterName(ConfigurationRecorderFilterName value) { m_filterNameHasBeenSet = true; m_filterName = value; }
    inline ConfigurationRecorderFilter& WithFilterName(ConfigurationRecorderFilterName value) { SetFilterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the filter. For <code>recordingScope</code>, valid values
     * include: <code>INTERNAL</code> and <code>PAID</code>.</p> <p>
     * <code>INTERNAL</code> indicates that the <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ConfigurationItem.html">ConfigurationItems</a>
     * in scope for the configuration recorder are recorded for free.</p> <p>
     * <code>PAID</code> indicates that the <a
     * href="https://docs.aws.amazon.com/config/latest/APIReference/API_ConfigurationItem.html">ConfigurationItems</a>
     * in scope for the configuration recorder impact the costs to your bill.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFilterValue() const { return m_filterValue; }
    inline bool FilterValueHasBeenSet() const { return m_filterValueHasBeenSet; }
    template<typename FilterValueT = Aws::Vector<Aws::String>>
    void SetFilterValue(FilterValueT&& value) { m_filterValueHasBeenSet = true; m_filterValue = std::forward<FilterValueT>(value); }
    template<typename FilterValueT = Aws::Vector<Aws::String>>
    ConfigurationRecorderFilter& WithFilterValue(FilterValueT&& value) { SetFilterValue(std::forward<FilterValueT>(value)); return *this;}
    template<typename FilterValueT = Aws::String>
    ConfigurationRecorderFilter& AddFilterValue(FilterValueT&& value) { m_filterValueHasBeenSet = true; m_filterValue.emplace_back(std::forward<FilterValueT>(value)); return *this; }
    ///@}
  private:

    ConfigurationRecorderFilterName m_filterName{ConfigurationRecorderFilterName::NOT_SET};
    bool m_filterNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterValue;
    bool m_filterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
