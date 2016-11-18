/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/CommandFilterKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>Describes a command filter.</p>
   */
  class AWS_SSM_API CommandFilter
  {
  public:
    CommandFilter();
    CommandFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    CommandFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the filter. For example, requested date and time.</p>
     */
    inline const CommandFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter. For example, requested date and time.</p>
     */
    inline void SetKey(const CommandFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter. For example, requested date and time.</p>
     */
    inline void SetKey(CommandFilterKey&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter. For example, requested date and time.</p>
     */
    inline CommandFilter& WithKey(const CommandFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter. For example, requested date and time.</p>
     */
    inline CommandFilter& WithKey(CommandFilterKey&& value) { SetKey(value); return *this;}

    /**
     * <p>The filter value. For example: June 30, 2015.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The filter value. For example: June 30, 2015.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter value. For example: June 30, 2015.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter value. For example: June 30, 2015.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The filter value. For example: June 30, 2015.</p>
     */
    inline CommandFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The filter value. For example: June 30, 2015.</p>
     */
    inline CommandFilter& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The filter value. For example: June 30, 2015.</p>
     */
    inline CommandFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    CommandFilterKey m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
