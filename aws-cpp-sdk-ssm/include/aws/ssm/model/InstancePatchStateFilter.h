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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstancePatchStateOperatorType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines a filter used in DescribeInstancePatchStatesForPatchGroup used to
   * scope down the information returned by the API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstancePatchStateFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstancePatchStateFilter
  {
  public:
    InstancePatchStateFilter();
    InstancePatchStateFilter(Aws::Utils::Json::JsonView jsonValue);
    InstancePatchStateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key for the filter. Supported values are FailedCount, InstalledCount,
     * InstalledOtherCount, MissingCount and NotApplicableCount.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key for the filter. Supported values are FailedCount, InstalledCount,
     * InstalledOtherCount, MissingCount and NotApplicableCount.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key for the filter. Supported values are FailedCount, InstalledCount,
     * InstalledOtherCount, MissingCount and NotApplicableCount.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the filter. Supported values are FailedCount, InstalledCount,
     * InstalledOtherCount, MissingCount and NotApplicableCount.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the filter. Supported values are FailedCount, InstalledCount,
     * InstalledOtherCount, MissingCount and NotApplicableCount.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key for the filter. Supported values are FailedCount, InstalledCount,
     * InstalledOtherCount, MissingCount and NotApplicableCount.</p>
     */
    inline InstancePatchStateFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the filter. Supported values are FailedCount, InstalledCount,
     * InstalledOtherCount, MissingCount and NotApplicableCount.</p>
     */
    inline InstancePatchStateFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key for the filter. Supported values are FailedCount, InstalledCount,
     * InstalledOtherCount, MissingCount and NotApplicableCount.</p>
     */
    inline InstancePatchStateFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for the filter, must be an integer greater than or equal to 0.</p>
     */
    inline InstancePatchStateFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, LessThan or GreaterThan.</p>
     */
    inline const InstancePatchStateOperatorType& GetType() const{ return m_type; }

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, LessThan or GreaterThan.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, LessThan or GreaterThan.</p>
     */
    inline void SetType(const InstancePatchStateOperatorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, LessThan or GreaterThan.</p>
     */
    inline void SetType(InstancePatchStateOperatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, LessThan or GreaterThan.</p>
     */
    inline InstancePatchStateFilter& WithType(const InstancePatchStateOperatorType& value) { SetType(value); return *this;}

    /**
     * <p>The type of comparison that should be performed for the value: Equal,
     * NotEqual, LessThan or GreaterThan.</p>
     */
    inline InstancePatchStateFilter& WithType(InstancePatchStateOperatorType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;

    InstancePatchStateOperatorType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
