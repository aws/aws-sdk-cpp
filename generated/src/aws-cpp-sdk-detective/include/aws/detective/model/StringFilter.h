/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>A string for filtering Detective investigations.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/StringFilter">AWS
   * API Reference</a></p>
   */
  class StringFilter
  {
  public:
    AWS_DETECTIVE_API StringFilter();
    AWS_DETECTIVE_API StringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API StringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string filter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The string filter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The string filter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The string filter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The string filter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The string filter value.</p>
     */
    inline StringFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The string filter value.</p>
     */
    inline StringFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The string filter value.</p>
     */
    inline StringFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
