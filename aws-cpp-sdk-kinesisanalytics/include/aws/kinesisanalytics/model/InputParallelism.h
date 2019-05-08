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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>

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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the number of in-application streams to create for a given
   * streaming source. For information about parallelism, see <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
   * Application Input</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputParallelism">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API InputParallelism
  {
  public:
    InputParallelism();
    InputParallelism(Aws::Utils::Json::JsonView jsonValue);
    InputParallelism& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of in-application streams to create. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
     * </p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>Number of in-application streams to create. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
     * </p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>Number of in-application streams to create. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
     * </p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>Number of in-application streams to create. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
     * </p>
     */
    inline InputParallelism& WithCount(int value) { SetCount(value); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
