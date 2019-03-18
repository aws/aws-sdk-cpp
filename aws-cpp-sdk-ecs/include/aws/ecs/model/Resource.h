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
  class AWS_ECS_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline Resource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline Resource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource, such as <code>CPU</code>, <code>MEMORY</code>,
     * <code>PORTS</code>, <code>PORTS_UDP</code>, or a user-defined resource.</p>
     */
    inline Resource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the resource, such as <code>INTEGER</code>, <code>DOUBLE</code>,
     * <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the resource, such as <code>INTEGER</code>, <code>DOUBLE</code>,
     * <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the resource, such as <code>INTEGER</code>, <code>DOUBLE</code>,
     * <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the resource, such as <code>INTEGER</code>, <code>DOUBLE</code>,
     * <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the resource, such as <code>INTEGER</code>, <code>DOUBLE</code>,
     * <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the resource, such as <code>INTEGER</code>, <code>DOUBLE</code>,
     * <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the resource, such as <code>INTEGER</code>, <code>DOUBLE</code>,
     * <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the resource, such as <code>INTEGER</code>, <code>DOUBLE</code>,
     * <code>LONG</code>, or <code>STRINGSET</code>.</p>
     */
    inline Resource& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>When the <code>doubleValue</code> type is set, the value of the resource must
     * be a double precision floating-point type.</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>When the <code>doubleValue</code> type is set, the value of the resource must
     * be a double precision floating-point type.</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>When the <code>doubleValue</code> type is set, the value of the resource must
     * be a double precision floating-point type.</p>
     */
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>When the <code>doubleValue</code> type is set, the value of the resource must
     * be a double precision floating-point type.</p>
     */
    inline Resource& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}


    /**
     * <p>When the <code>longValue</code> type is set, the value of the resource must
     * be an extended precision floating-point type.</p>
     */
    inline long long GetLongValue() const{ return m_longValue; }

    /**
     * <p>When the <code>longValue</code> type is set, the value of the resource must
     * be an extended precision floating-point type.</p>
     */
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }

    /**
     * <p>When the <code>longValue</code> type is set, the value of the resource must
     * be an extended precision floating-point type.</p>
     */
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }

    /**
     * <p>When the <code>longValue</code> type is set, the value of the resource must
     * be an extended precision floating-point type.</p>
     */
    inline Resource& WithLongValue(long long value) { SetLongValue(value); return *this;}


    /**
     * <p>When the <code>integerValue</code> type is set, the value of the resource
     * must be an integer.</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p>When the <code>integerValue</code> type is set, the value of the resource
     * must be an integer.</p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p>When the <code>integerValue</code> type is set, the value of the resource
     * must be an integer.</p>
     */
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p>When the <code>integerValue</code> type is set, the value of the resource
     * must be an integer.</p>
     */
    inline Resource& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}


    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringSetValue() const{ return m_stringSetValue; }

    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline bool StringSetValueHasBeenSet() const { return m_stringSetValueHasBeenSet; }

    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline void SetStringSetValue(const Aws::Vector<Aws::String>& value) { m_stringSetValueHasBeenSet = true; m_stringSetValue = value; }

    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline void SetStringSetValue(Aws::Vector<Aws::String>&& value) { m_stringSetValueHasBeenSet = true; m_stringSetValue = std::move(value); }

    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline Resource& WithStringSetValue(const Aws::Vector<Aws::String>& value) { SetStringSetValue(value); return *this;}

    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline Resource& WithStringSetValue(Aws::Vector<Aws::String>&& value) { SetStringSetValue(std::move(value)); return *this;}

    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline Resource& AddStringSetValue(const Aws::String& value) { m_stringSetValueHasBeenSet = true; m_stringSetValue.push_back(value); return *this; }

    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline Resource& AddStringSetValue(Aws::String&& value) { m_stringSetValueHasBeenSet = true; m_stringSetValue.push_back(std::move(value)); return *this; }

    /**
     * <p>When the <code>stringSetValue</code> type is set, the value of the resource
     * must be a string type.</p>
     */
    inline Resource& AddStringSetValue(const char* value) { m_stringSetValueHasBeenSet = true; m_stringSetValue.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet;

    long long m_longValue;
    bool m_longValueHasBeenSet;

    int m_integerValue;
    bool m_integerValueHasBeenSet;

    Aws::Vector<Aws::String> m_stringSetValue;
    bool m_stringSetValueHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
