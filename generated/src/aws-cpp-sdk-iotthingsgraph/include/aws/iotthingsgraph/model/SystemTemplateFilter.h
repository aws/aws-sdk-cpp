﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/SystemTemplateFilterName.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that filters a system search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SystemTemplateFilter">AWS
   * API Reference</a></p>
   */
  class SystemTemplateFilter
  {
  public:
    AWS_IOTTHINGSGRAPH_API SystemTemplateFilter() = default;
    AWS_IOTTHINGSGRAPH_API SystemTemplateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API SystemTemplateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the system search filter field.</p>
     */
    inline SystemTemplateFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(SystemTemplateFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline SystemTemplateFilter& WithName(SystemTemplateFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of string values for the search filter field. Multiple values
     * function as AND criteria in the search.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Vector<Aws::String>>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Vector<Aws::String>>
    SystemTemplateFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    template<typename ValueT = Aws::String>
    SystemTemplateFilter& AddValue(ValueT&& value) { m_valueHasBeenSet = true; m_value.emplace_back(std::forward<ValueT>(value)); return *this; }
    ///@}
  private:

    SystemTemplateFilterName m_name{SystemTemplateFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
