/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The interaction that stopped a pipeline execution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StopExecutionTrigger">AWS
   * API Reference</a></p>
   */
  class StopExecutionTrigger
  {
  public:
    AWS_CODEPIPELINE_API StopExecutionTrigger();
    AWS_CODEPIPELINE_API StopExecutionTrigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StopExecutionTrigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user-specified reason the pipeline was stopped.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The user-specified reason the pipeline was stopped.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The user-specified reason the pipeline was stopped.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The user-specified reason the pipeline was stopped.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The user-specified reason the pipeline was stopped.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The user-specified reason the pipeline was stopped.</p>
     */
    inline StopExecutionTrigger& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The user-specified reason the pipeline was stopped.</p>
     */
    inline StopExecutionTrigger& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The user-specified reason the pipeline was stopped.</p>
     */
    inline StopExecutionTrigger& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
