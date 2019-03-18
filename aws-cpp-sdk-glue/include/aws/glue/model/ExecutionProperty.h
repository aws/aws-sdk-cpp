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
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>An execution property of a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ExecutionProperty">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API ExecutionProperty
  {
  public:
    ExecutionProperty();
    ExecutionProperty(Aws::Utils::Json::JsonView jsonValue);
    ExecutionProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of concurrent runs allowed for the job. The default is 1.
     * An error is returned when this threshold is reached. The maximum value you can
     * specify is controlled by a service limit.</p>
     */
    inline int GetMaxConcurrentRuns() const{ return m_maxConcurrentRuns; }

    /**
     * <p>The maximum number of concurrent runs allowed for the job. The default is 1.
     * An error is returned when this threshold is reached. The maximum value you can
     * specify is controlled by a service limit.</p>
     */
    inline bool MaxConcurrentRunsHasBeenSet() const { return m_maxConcurrentRunsHasBeenSet; }

    /**
     * <p>The maximum number of concurrent runs allowed for the job. The default is 1.
     * An error is returned when this threshold is reached. The maximum value you can
     * specify is controlled by a service limit.</p>
     */
    inline void SetMaxConcurrentRuns(int value) { m_maxConcurrentRunsHasBeenSet = true; m_maxConcurrentRuns = value; }

    /**
     * <p>The maximum number of concurrent runs allowed for the job. The default is 1.
     * An error is returned when this threshold is reached. The maximum value you can
     * specify is controlled by a service limit.</p>
     */
    inline ExecutionProperty& WithMaxConcurrentRuns(int value) { SetMaxConcurrentRuns(value); return *this;}

  private:

    int m_maxConcurrentRuns;
    bool m_maxConcurrentRunsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
