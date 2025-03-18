/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ExecutionProperty
  {
  public:
    AWS_GLUE_API ExecutionProperty() = default;
    AWS_GLUE_API ExecutionProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ExecutionProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of concurrent runs allowed for the job. The default is 1.
     * An error is returned when this threshold is reached. The maximum value you can
     * specify is controlled by a service limit.</p>
     */
    inline int GetMaxConcurrentRuns() const { return m_maxConcurrentRuns; }
    inline bool MaxConcurrentRunsHasBeenSet() const { return m_maxConcurrentRunsHasBeenSet; }
    inline void SetMaxConcurrentRuns(int value) { m_maxConcurrentRunsHasBeenSet = true; m_maxConcurrentRuns = value; }
    inline ExecutionProperty& WithMaxConcurrentRuns(int value) { SetMaxConcurrentRuns(value); return *this;}
    ///@}
  private:

    int m_maxConcurrentRuns{0};
    bool m_maxConcurrentRunsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
