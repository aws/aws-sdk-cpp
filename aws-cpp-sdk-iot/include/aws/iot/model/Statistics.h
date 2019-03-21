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
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{

  /**
   * <p>A map of key-value pairs for all supported statistics. Currently, only count
   * is supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Statistics">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API Statistics
  {
  public:
    Statistics();
    Statistics(Aws::Utils::Json::JsonView jsonValue);
    Statistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The count of things that match the query.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The count of things that match the query.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The count of things that match the query.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The count of things that match the query.</p>
     */
    inline Statistics& WithCount(int value) { SetCount(value); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
