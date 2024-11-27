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
    AWS_CONFIGSERVICE_API AggregatorFilterServicePrincipal();
    AWS_CONFIGSERVICE_API AggregatorFilterServicePrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregatorFilterServicePrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of service principal filter to apply. <code>INCLUDE</code> specifies
     * that the list of service principals in the <code>Value</code> field will be
     * aggregated and no other service principals will be filtered.</p>
     */
    inline const AggregatorFilterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AggregatorFilterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AggregatorFilterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AggregatorFilterServicePrincipal& WithType(const AggregatorFilterType& value) { SetType(value); return *this;}
    inline AggregatorFilterServicePrincipal& WithType(AggregatorFilterType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Comma-separated list of service principals for the linked Amazon Web Services
     * services to filter your aggregated service-linked configuration recorders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::Vector<Aws::String>& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::Vector<Aws::String>&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline AggregatorFilterServicePrincipal& WithValue(const Aws::Vector<Aws::String>& value) { SetValue(value); return *this;}
    inline AggregatorFilterServicePrincipal& WithValue(Aws::Vector<Aws::String>&& value) { SetValue(std::move(value)); return *this;}
    inline AggregatorFilterServicePrincipal& AddValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }
    inline AggregatorFilterServicePrincipal& AddValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value.push_back(std::move(value)); return *this; }
    inline AggregatorFilterServicePrincipal& AddValue(const char* value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }
    ///@}
  private:

    AggregatorFilterType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
