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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/MapFilterComparison.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The map filter for querying findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/MapFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API MapFilter
  {
  public:
    MapFilter();
    MapFilter(Aws::Utils::Json::JsonView jsonValue);
    MapFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key of the map filter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the map filter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the map filter.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the map filter.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the map filter.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the map filter.</p>
     */
    inline MapFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the map filter.</p>
     */
    inline MapFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the map filter.</p>
     */
    inline MapFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value for the key in the map filter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the key in the map filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the key in the map filter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the key in the map filter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the key in the map filter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the key in the map filter.</p>
     */
    inline MapFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the key in the map filter.</p>
     */
    inline MapFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the key in the map filter.</p>
     */
    inline MapFilter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The condition to apply to a key value when querying for findings with a map
     * filter.</p>
     */
    inline const MapFilterComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The condition to apply to a key value when querying for findings with a map
     * filter.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The condition to apply to a key value when querying for findings with a map
     * filter.</p>
     */
    inline void SetComparison(const MapFilterComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The condition to apply to a key value when querying for findings with a map
     * filter.</p>
     */
    inline void SetComparison(MapFilterComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The condition to apply to a key value when querying for findings with a map
     * filter.</p>
     */
    inline MapFilter& WithComparison(const MapFilterComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The condition to apply to a key value when querying for findings with a map
     * filter.</p>
     */
    inline MapFilter& WithComparison(MapFilterComparison&& value) { SetComparison(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    MapFilterComparison m_comparison;
    bool m_comparisonHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
