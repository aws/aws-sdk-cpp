/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Describes the resources available for a container instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Resource">AWS API
   * Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_ECS_API Resource() = default;
    AWS_ECS_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Resource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource. Valid values: <code>INTEGER</code>,
     * <code>DOUBLE</code>, <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Resource& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>doubleValue</code> type is set, the value of the resource must
     * be a double precision floating-point type.</p>
     */
    inline double GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline Resource& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>longValue</code> type is set, the value of the resource must
     * be an extended precision floating-point type.</p>
     */
    inline long long GetLongValue() const { return m_longValue; }
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }
    inline Resource& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>integerValue</code> type is set, the value of the resource
     * must be an integer.</p>
     */
    inline int GetIntegerValue() const { return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline Resource& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringSetValue() const { return m_stringSetValue; }
    inline bool StringSetValueHasBeenSet() const { return m_stringSetValueHasBeenSet; }
    template<typename StringSetValueT = Aws::Vector<Aws::String>>
    void SetStringSetValue(StringSetValueT&& value) { m_stringSetValueHasBeenSet = true; m_stringSetValue = std::forward<StringSetValueT>(value); }
    template<typename StringSetValueT = Aws::Vector<Aws::String>>
    Resource& WithStringSetValue(StringSetValueT&& value) { SetStringSetValue(std::forward<StringSetValueT>(value)); return *this;}
    template<typename StringSetValueT = Aws::String>
    Resource& AddStringSetValue(StringSetValueT&& value) { m_stringSetValueHasBeenSet = true; m_stringSetValue.emplace_back(std::forward<StringSetValueT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    double m_doubleValue{0.0};
    bool m_doubleValueHasBeenSet = false;

    long long m_longValue{0};
    bool m_longValueHasBeenSet = false;

    int m_integerValue{0};
    bool m_integerValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringSetValue;
    bool m_stringSetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
