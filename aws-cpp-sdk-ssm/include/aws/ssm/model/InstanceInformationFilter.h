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
#include <aws/ssm/model/InstanceInformationFilterKey.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a filter for a specific list of instances. You can filter instances
   * information by using tags. You specify tags by using a key-value mapping.</p>
   * <p>Use this action instead of the
   * <a>DescribeInstanceInformationRequest$InstanceInformationFilterList</a> method.
   * The <code>InstanceInformationFilterList</code> method is a legacy method and
   * does not support tags. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceInformationFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstanceInformationFilter
  {
  public:
    InstanceInformationFilter();
    InstanceInformationFilter(Aws::Utils::Json::JsonView jsonValue);
    InstanceInformationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter. </p>
     */
    inline const InstanceInformationFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter. </p>
     */
    inline void SetKey(const InstanceInformationFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter. </p>
     */
    inline void SetKey(InstanceInformationFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter. </p>
     */
    inline InstanceInformationFilter& WithKey(const InstanceInformationFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter. </p>
     */
    inline InstanceInformationFilter& WithKey(InstanceInformationFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The filter values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueSet() const{ return m_valueSet; }

    /**
     * <p>The filter values.</p>
     */
    inline bool ValueSetHasBeenSet() const { return m_valueSetHasBeenSet; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetValueSet(const Aws::Vector<Aws::String>& value) { m_valueSetHasBeenSet = true; m_valueSet = value; }

    /**
     * <p>The filter values.</p>
     */
    inline void SetValueSet(Aws::Vector<Aws::String>&& value) { m_valueSetHasBeenSet = true; m_valueSet = std::move(value); }

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationFilter& WithValueSet(const Aws::Vector<Aws::String>& value) { SetValueSet(value); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationFilter& WithValueSet(Aws::Vector<Aws::String>&& value) { SetValueSet(std::move(value)); return *this;}

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationFilter& AddValueSet(const Aws::String& value) { m_valueSetHasBeenSet = true; m_valueSet.push_back(value); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationFilter& AddValueSet(Aws::String&& value) { m_valueSetHasBeenSet = true; m_valueSet.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter values.</p>
     */
    inline InstanceInformationFilter& AddValueSet(const char* value) { m_valueSetHasBeenSet = true; m_valueSet.push_back(value); return *this; }

  private:

    InstanceInformationFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_valueSet;
    bool m_valueSetHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
