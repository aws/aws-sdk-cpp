/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/Result.h>
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
   * <p>The configuration that specifies the result, such as rollback, to occur upon
   * stage failure. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/FailureConditions">AWS
   * API Reference</a></p>
   */
  class FailureConditions
  {
  public:
    AWS_CODEPIPELINE_API FailureConditions();
    AWS_CODEPIPELINE_API FailureConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API FailureConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specified result for when the failure conditions are met, such as rolling
     * back the stage.</p>
     */
    inline const Result& GetResult() const{ return m_result; }

    /**
     * <p>The specified result for when the failure conditions are met, such as rolling
     * back the stage.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The specified result for when the failure conditions are met, such as rolling
     * back the stage.</p>
     */
    inline void SetResult(const Result& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The specified result for when the failure conditions are met, such as rolling
     * back the stage.</p>
     */
    inline void SetResult(Result&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The specified result for when the failure conditions are met, such as rolling
     * back the stage.</p>
     */
    inline FailureConditions& WithResult(const Result& value) { SetResult(value); return *this;}

    /**
     * <p>The specified result for when the failure conditions are met, such as rolling
     * back the stage.</p>
     */
    inline FailureConditions& WithResult(Result&& value) { SetResult(std::move(value)); return *this;}

  private:

    Result m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
