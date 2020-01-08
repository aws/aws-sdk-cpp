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
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <important> <p> <i> <b>Cost Category is in public beta for AWS Billing and Cost
   * Management and is subject to change. Your use of Cost Categories is subject to
   * the Beta Service Participation terms of the <a
   * href="https://aws.amazon.com/service-terms/">AWS Service Terms</a> (Section
   * 1.10).</b> </i> </p> </important> <p>The values that are available for Cost
   * Categories.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategoryValues">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API CostCategoryValues
  {
  public:
    CostCategoryValues();
    CostCategoryValues(Aws::Utils::Json::JsonView jsonValue);
    CostCategoryValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetKey() const{ return m_key; }

    
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    
    inline CostCategoryValues& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    
    inline CostCategoryValues& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    
    inline CostCategoryValues& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The specific value of the Cost Category.</p>
     */
    inline CostCategoryValues& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
