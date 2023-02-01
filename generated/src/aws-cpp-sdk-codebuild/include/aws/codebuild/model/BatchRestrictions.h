/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Specifies restrictions for the batch build.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BatchRestrictions">AWS
   * API Reference</a></p>
   */
  class BatchRestrictions
  {
  public:
    AWS_CODEBUILD_API BatchRestrictions();
    AWS_CODEBUILD_API BatchRestrictions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BatchRestrictions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the maximum number of builds allowed.</p>
     */
    inline int GetMaximumBuildsAllowed() const{ return m_maximumBuildsAllowed; }

    /**
     * <p>Specifies the maximum number of builds allowed.</p>
     */
    inline bool MaximumBuildsAllowedHasBeenSet() const { return m_maximumBuildsAllowedHasBeenSet; }

    /**
     * <p>Specifies the maximum number of builds allowed.</p>
     */
    inline void SetMaximumBuildsAllowed(int value) { m_maximumBuildsAllowedHasBeenSet = true; m_maximumBuildsAllowed = value; }

    /**
     * <p>Specifies the maximum number of builds allowed.</p>
     */
    inline BatchRestrictions& WithMaximumBuildsAllowed(int value) { SetMaximumBuildsAllowed(value); return *this;}


    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetComputeTypesAllowed() const{ return m_computeTypesAllowed; }

    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline bool ComputeTypesAllowedHasBeenSet() const { return m_computeTypesAllowedHasBeenSet; }

    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline void SetComputeTypesAllowed(const Aws::Vector<Aws::String>& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed = value; }

    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline void SetComputeTypesAllowed(Aws::Vector<Aws::String>&& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed = std::move(value); }

    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline BatchRestrictions& WithComputeTypesAllowed(const Aws::Vector<Aws::String>& value) { SetComputeTypesAllowed(value); return *this;}

    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline BatchRestrictions& WithComputeTypesAllowed(Aws::Vector<Aws::String>&& value) { SetComputeTypesAllowed(std::move(value)); return *this;}

    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline BatchRestrictions& AddComputeTypesAllowed(const Aws::String& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed.push_back(value); return *this; }

    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline BatchRestrictions& AddComputeTypesAllowed(Aws::String&& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline BatchRestrictions& AddComputeTypesAllowed(const char* value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed.push_back(value); return *this; }

  private:

    int m_maximumBuildsAllowed;
    bool m_maximumBuildsAllowedHasBeenSet = false;

    Aws::Vector<Aws::String> m_computeTypesAllowed;
    bool m_computeTypesAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
