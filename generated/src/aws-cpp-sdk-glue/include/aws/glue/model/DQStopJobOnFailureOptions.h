/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DQStopJobOnFailureTiming.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Options to configure how your job will stop if your data quality evaluation
   * fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DQStopJobOnFailureOptions">AWS
   * API Reference</a></p>
   */
  class DQStopJobOnFailureOptions
  {
  public:
    AWS_GLUE_API DQStopJobOnFailureOptions() = default;
    AWS_GLUE_API DQStopJobOnFailureOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DQStopJobOnFailureOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When to stop job if your data quality evaluation fails. Options are Immediate
     * or AfterDataLoad.</p>
     */
    inline DQStopJobOnFailureTiming GetStopJobOnFailureTiming() const { return m_stopJobOnFailureTiming; }
    inline bool StopJobOnFailureTimingHasBeenSet() const { return m_stopJobOnFailureTimingHasBeenSet; }
    inline void SetStopJobOnFailureTiming(DQStopJobOnFailureTiming value) { m_stopJobOnFailureTimingHasBeenSet = true; m_stopJobOnFailureTiming = value; }
    inline DQStopJobOnFailureOptions& WithStopJobOnFailureTiming(DQStopJobOnFailureTiming value) { SetStopJobOnFailureTiming(value); return *this;}
    ///@}
  private:

    DQStopJobOnFailureTiming m_stopJobOnFailureTiming{DQStopJobOnFailureTiming::NOT_SET};
    bool m_stopJobOnFailureTimingHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
