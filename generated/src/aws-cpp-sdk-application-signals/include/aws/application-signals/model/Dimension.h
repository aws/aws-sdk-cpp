﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>A dimension is a name/value pair that is part of the identity of a metric.
   * Because dimensions are part of the unique identifier for a metric, whenever you
   * add a unique name/value pair to one of your metrics, you are creating a new
   * variation of that metric. For example, many Amazon EC2 metrics publish
   * <code>InstanceId</code> as a dimension name, and the actual instance ID as the
   * value for that dimension.</p> <p>You can assign up to 30 dimensions to a
   * metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/Dimension">AWS
   * API Reference</a></p>
   */
  class Dimension
  {
  public:
    AWS_APPLICATIONSIGNALS_API Dimension() = default;
    AWS_APPLICATIONSIGNALS_API Dimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Dimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dimension. Dimension names must contain only ASCII
     * characters, must include at least one non-whitespace character, and cannot start
     * with a colon (<code>:</code>). ASCII control characters are not supported as
     * part of dimension names.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Dimension& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the dimension. Dimension values must contain only ASCII
     * characters and must include at least one non-whitespace character. ASCII control
     * characters are not supported as part of dimension values.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Dimension& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
