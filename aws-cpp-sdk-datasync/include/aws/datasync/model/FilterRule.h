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
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/FilterType.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p/> <p>A pattern that determines which files to include in the transfer or
   * which files to exclude. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/FilterRule">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API FilterRule
  {
  public:
    FilterRule();
    FilterRule(Aws::Utils::Json::JsonView jsonValue);
    FilterRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/> <p>Specifies the type of filter rule pattern to apply. DataSync only
     * supports the SIMPLE_PATTERN rule type.</p>
     */
    inline const FilterType& GetFilterType() const{ return m_filterType; }

    /**
     * <p/> <p>Specifies the type of filter rule pattern to apply. DataSync only
     * supports the SIMPLE_PATTERN rule type.</p>
     */
    inline bool FilterTypeHasBeenSet() const { return m_filterTypeHasBeenSet; }

    /**
     * <p/> <p>Specifies the type of filter rule pattern to apply. DataSync only
     * supports the SIMPLE_PATTERN rule type.</p>
     */
    inline void SetFilterType(const FilterType& value) { m_filterTypeHasBeenSet = true; m_filterType = value; }

    /**
     * <p/> <p>Specifies the type of filter rule pattern to apply. DataSync only
     * supports the SIMPLE_PATTERN rule type.</p>
     */
    inline void SetFilterType(FilterType&& value) { m_filterTypeHasBeenSet = true; m_filterType = std::move(value); }

    /**
     * <p/> <p>Specifies the type of filter rule pattern to apply. DataSync only
     * supports the SIMPLE_PATTERN rule type.</p>
     */
    inline FilterRule& WithFilterType(const FilterType& value) { SetFilterType(value); return *this;}

    /**
     * <p/> <p>Specifies the type of filter rule pattern to apply. DataSync only
     * supports the SIMPLE_PATTERN rule type.</p>
     */
    inline FilterRule& WithFilterType(FilterType&& value) { SetFilterType(std::move(value)); return *this;}


    /**
     * <p/> <p>A pattern that defines the filter. The filter might include or exclude
     * files is a transfer.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p/> <p>A pattern that defines the filter. The filter might include or exclude
     * files is a transfer.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p/> <p>A pattern that defines the filter. The filter might include or exclude
     * files is a transfer.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p/> <p>A pattern that defines the filter. The filter might include or exclude
     * files is a transfer.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p/> <p>A pattern that defines the filter. The filter might include or exclude
     * files is a transfer.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p/> <p>A pattern that defines the filter. The filter might include or exclude
     * files is a transfer.</p>
     */
    inline FilterRule& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p/> <p>A pattern that defines the filter. The filter might include or exclude
     * files is a transfer.</p>
     */
    inline FilterRule& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p/> <p>A pattern that defines the filter. The filter might include or exclude
     * files is a transfer.</p>
     */
    inline FilterRule& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    FilterType m_filterType;
    bool m_filterTypeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
