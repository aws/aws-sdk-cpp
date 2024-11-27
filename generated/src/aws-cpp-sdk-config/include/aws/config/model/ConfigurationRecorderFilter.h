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
    AWS_CONFIGSERVICE_API ConfigurationRecorderFilter();
    AWS_CONFIGSERVICE_API ConfigurationRecorderFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationRecorderFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the type of filter. Currently, only <code>recordingScope</code>
     * is supported.</p>
     */
    inline const ConfigurationRecorderFilterName& GetFilterName() const{ return m_filterName; }
    inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
    inline void SetFilterName(const ConfigurationRecorderFilterName& value) { m_filterNameHasBeenSet = true; m_filterName = value; }
    inline void SetFilterName(ConfigurationRecorderFilterName&& value) { m_filterNameHasBeenSet = true; m_filterName = std::move(value); }
    inline ConfigurationRecorderFilter& WithFilterName(const ConfigurationRecorderFilterName& value) { SetFilterName(value); return *this;}
    inline ConfigurationRecorderFilter& WithFilterName(ConfigurationRecorderFilterName&& value) { SetFilterName(std::move(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetFilterValue() const{ return m_filterValue; }
    inline bool FilterValueHasBeenSet() const { return m_filterValueHasBeenSet; }
    inline void SetFilterValue(const Aws::Vector<Aws::String>& value) { m_filterValueHasBeenSet = true; m_filterValue = value; }
    inline void SetFilterValue(Aws::Vector<Aws::String>&& value) { m_filterValueHasBeenSet = true; m_filterValue = std::move(value); }
    inline ConfigurationRecorderFilter& WithFilterValue(const Aws::Vector<Aws::String>& value) { SetFilterValue(value); return *this;}
    inline ConfigurationRecorderFilter& WithFilterValue(Aws::Vector<Aws::String>&& value) { SetFilterValue(std::move(value)); return *this;}
    inline ConfigurationRecorderFilter& AddFilterValue(const Aws::String& value) { m_filterValueHasBeenSet = true; m_filterValue.push_back(value); return *this; }
    inline ConfigurationRecorderFilter& AddFilterValue(Aws::String&& value) { m_filterValueHasBeenSet = true; m_filterValue.push_back(std::move(value)); return *this; }
    inline ConfigurationRecorderFilter& AddFilterValue(const char* value) { m_filterValueHasBeenSet = true; m_filterValue.push_back(value); return *this; }
    ///@}
  private:

    ConfigurationRecorderFilterName m_filterName;
    bool m_filterNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_filterValue;
    bool m_filterValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
