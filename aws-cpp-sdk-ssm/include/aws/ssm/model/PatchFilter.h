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
#include <aws/ssm/model/PatchFilterKey.h>
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
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Defines a patch filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/PatchFilter">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API PatchFilter
  {
  public:
    PatchFilter();
    PatchFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    PatchFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The key for the filter (PRODUCT, CLASSIFICATION, MSRC_SEVERITY, PATCH_ID)</p>
     */
    inline const PatchFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The key for the filter (PRODUCT, CLASSIFICATION, MSRC_SEVERITY, PATCH_ID)</p>
     */
    inline void SetKey(const PatchFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key for the filter (PRODUCT, CLASSIFICATION, MSRC_SEVERITY, PATCH_ID)</p>
     */
    inline void SetKey(PatchFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key for the filter (PRODUCT, CLASSIFICATION, MSRC_SEVERITY, PATCH_ID)</p>
     */
    inline PatchFilter& WithKey(const PatchFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key for the filter (PRODUCT, CLASSIFICATION, MSRC_SEVERITY, PATCH_ID)</p>
     */
    inline PatchFilter& WithKey(PatchFilterKey&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The value for the filter key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value for the filter key.</p>
     */
    inline PatchFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The value for the filter key.</p>
     */
    inline PatchFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value for the filter key.</p>
     */
    inline PatchFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline PatchFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for the filter key.</p>
     */
    inline PatchFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:
    PatchFilterKey m_key;
    bool m_keyHasBeenSet;
    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
