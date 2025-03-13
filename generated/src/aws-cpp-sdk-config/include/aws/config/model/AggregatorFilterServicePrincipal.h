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
   * <p>An object to filter service-linked configuration recorders in an aggregator
   * based on the linked Amazon Web Services service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregatorFilterServicePrincipal">AWS
   * API Reference</a></p>
   */
  class AggregatorFilterServicePrincipal
  {
  public:
    AWS_CONFIGSERVICE_API AggregatorFilterServicePrincipal() = default;
    AWS_CONFIGSERVICE_API AggregatorFilterServicePrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregatorFilterServicePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of service principal filter to apply. <code>INCLUDE</code> specifies
     * that the list of service principals in the <code>Value</code> field will be
     * aggregated and no other service principals will be filtered.</p>
     */
    inline AggregatorFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AggregatorFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AggregatorFilterServicePrincipal& WithType(AggregatorFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Comma-separated list of service principals for the linked Amazon Web Services
     * services to filter your aggregated service-linked configuration recorders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Vector<Aws::String>>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Vector<Aws::String>>
    AggregatorFilterServicePrincipal& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    template<typename ValueT = Aws::String>
    AggregatorFilterServicePrincipal& AddValue(ValueT&& value) { m_valueHasBeenSet = true; m_value.emplace_back(std::forward<ValueT>(value)); return *this; }
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
