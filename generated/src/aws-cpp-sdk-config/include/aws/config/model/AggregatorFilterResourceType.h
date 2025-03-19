/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/AggregatorFilterType.h>
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
   * <p>An object to filter the configuration recorders based on the resource types
   * in scope for recording.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregatorFilterResourceType">AWS
   * API Reference</a></p>
   */
  class AggregatorFilterResourceType
  {
  public:
    AWS_CONFIGSERVICE_API AggregatorFilterResourceType() = default;
    AWS_CONFIGSERVICE_API AggregatorFilterResourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregatorFilterResourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of resource type filter to apply. <code>INCLUDE</code> specifies
     * that the list of resource types in the <code>Value</code> field will be
     * aggregated and no other resource types will be filtered.</p>
     */
    inline AggregatorFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AggregatorFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AggregatorFilterResourceType& WithType(AggregatorFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Comma-separate list of resource types to filter your aggregated configuration
     * recorders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Vector<Aws::String>>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Vector<Aws::String>>
    AggregatorFilterResourceType& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    template<typename ValueT = Aws::String>
    AggregatorFilterResourceType& AddValue(ValueT&& value) { m_valueHasBeenSet = true; m_value.emplace_back(std::forward<ValueT>(value)); return *this; }
    ///@}
  private:

    AggregatorFilterType m_type{AggregatorFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
