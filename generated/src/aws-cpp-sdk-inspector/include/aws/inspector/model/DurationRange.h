/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DurationRange
  {
  public:
    AWS_INSPECTOR_API DurationRange();
    AWS_INSPECTOR_API DurationRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API DurationRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum value of the duration range. Must be greater than zero.</p>
     */
    inline int GetMinSeconds() const{ return m_minSeconds; }

    /**
     * <p>The minimum value of the duration range. Must be greater than zero.</p>
     */
    inline bool MinSecondsHasBeenSet() const { return m_minSecondsHasBeenSet; }

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
    inline bool MaxSecondsHasBeenSet() const { return m_maxSecondsHasBeenSet; }

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
    bool m_minSecondsHasBeenSet = false;

    int m_maxSeconds;
    bool m_maxSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
