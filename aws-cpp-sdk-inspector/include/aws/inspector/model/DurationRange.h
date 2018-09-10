﻿/*
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
#include <aws/inspector/Inspector_EXPORTS.h>

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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used in the <a>AssessmentTemplateFilter</a> data
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/DurationRange">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API DurationRange
  {
  public:
    DurationRange();
    DurationRange(Aws::Utils::Json::JsonView jsonValue);
    DurationRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value of the duration range. Must be greater than zero.</p>
     */
    inline int GetMinSeconds() const{ return m_minSeconds; }

    /**
     * <p>The minimum value of the duration range. Must be greater than zero.</p>
     */
    inline void SetMinSeconds(int value) { m_minSecondsHasBeenSet = true; m_minSeconds = value; }

    /**
     * <p>The minimum value of the duration range. Must be greater than zero.</p>
     */
    inline DurationRange& WithMinSeconds(int value) { SetMinSeconds(value); return *this;}


    /**
     * <p>The maximum value of the duration range. Must be less than or equal to 604800
     * seconds (1 week).</p>
     */
    inline int GetMaxSeconds() const{ return m_maxSeconds; }

    /**
     * <p>The maximum value of the duration range. Must be less than or equal to 604800
     * seconds (1 week).</p>
     */
    inline void SetMaxSeconds(int value) { m_maxSecondsHasBeenSet = true; m_maxSeconds = value; }

    /**
     * <p>The maximum value of the duration range. Must be less than or equal to 604800
     * seconds (1 week).</p>
     */
    inline DurationRange& WithMaxSeconds(int value) { SetMaxSeconds(value); return *this;}

  private:

    int m_minSeconds;
    bool m_minSecondsHasBeenSet;

    int m_maxSeconds;
    bool m_maxSecondsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
