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
   * <p>Filter for pipeline executions that have successfully completed the stage in
   * the current pipeline version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/SucceededInStageFilter">AWS
   * API Reference</a></p>
   */
  class SucceededInStageFilter
  {
  public:
    AWS_CODEPIPELINE_API SucceededInStageFilter();
    AWS_CODEPIPELINE_API SucceededInStageFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API SucceededInStageFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the stage for filtering for pipeline executions where the stage
     * was successful in the current pipeline version.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage for filtering for pipeline executions where the stage
     * was successful in the current pipeline version.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage for filtering for pipeline executions where the stage
     * was successful in the current pipeline version.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage for filtering for pipeline executions where the stage
     * was successful in the current pipeline version.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage for filtering for pipeline executions where the stage
     * was successful in the current pipeline version.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage for filtering for pipeline executions where the stage
     * was successful in the current pipeline version.</p>
     */
    inline SucceededInStageFilter& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage for filtering for pipeline executions where the stage
     * was successful in the current pipeline version.</p>
     */
    inline SucceededInStageFilter& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage for filtering for pipeline executions where the stage
     * was successful in the current pipeline version.</p>
     */
    inline SucceededInStageFilter& WithStageName(const char* value) { SetStageName(value); return *this;}

  private:

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
