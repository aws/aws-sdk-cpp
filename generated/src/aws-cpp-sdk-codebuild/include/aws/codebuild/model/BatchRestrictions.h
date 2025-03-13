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
    AWS_CODEBUILD_API BatchRestrictions() = default;
    AWS_CODEBUILD_API BatchRestrictions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BatchRestrictions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the maximum number of builds allowed.</p>
     */
    inline int GetMaximumBuildsAllowed() const { return m_maximumBuildsAllowed; }
    inline bool MaximumBuildsAllowedHasBeenSet() const { return m_maximumBuildsAllowedHasBeenSet; }
    inline void SetMaximumBuildsAllowed(int value) { m_maximumBuildsAllowedHasBeenSet = true; m_maximumBuildsAllowed = value; }
    inline BatchRestrictions& WithMaximumBuildsAllowed(int value) { SetMaximumBuildsAllowed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the compute types that are allowed for the
     * batch build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide</i> for these
     * values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetComputeTypesAllowed() const { return m_computeTypesAllowed; }
    inline bool ComputeTypesAllowedHasBeenSet() const { return m_computeTypesAllowedHasBeenSet; }
    template<typename ComputeTypesAllowedT = Aws::Vector<Aws::String>>
    void SetComputeTypesAllowed(ComputeTypesAllowedT&& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed = std::forward<ComputeTypesAllowedT>(value); }
    template<typename ComputeTypesAllowedT = Aws::Vector<Aws::String>>
    BatchRestrictions& WithComputeTypesAllowed(ComputeTypesAllowedT&& value) { SetComputeTypesAllowed(std::forward<ComputeTypesAllowedT>(value)); return *this;}
    template<typename ComputeTypesAllowedT = Aws::String>
    BatchRestrictions& AddComputeTypesAllowed(ComputeTypesAllowedT&& value) { m_computeTypesAllowedHasBeenSet = true; m_computeTypesAllowed.emplace_back(std::forward<ComputeTypesAllowedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the fleets that are allowed for the batch
     * build. See <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/fleets.html">Run
     * builds on reserved capacity fleets</a> in the <i>CodeBuild User Guide</i> for
     * more information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetsAllowed() const { return m_fleetsAllowed; }
    inline bool FleetsAllowedHasBeenSet() const { return m_fleetsAllowedHasBeenSet; }
    template<typename FleetsAllowedT = Aws::Vector<Aws::String>>
    void SetFleetsAllowed(FleetsAllowedT&& value) { m_fleetsAllowedHasBeenSet = true; m_fleetsAllowed = std::forward<FleetsAllowedT>(value); }
    template<typename FleetsAllowedT = Aws::Vector<Aws::String>>
    BatchRestrictions& WithFleetsAllowed(FleetsAllowedT&& value) { SetFleetsAllowed(std::forward<FleetsAllowedT>(value)); return *this;}
    template<typename FleetsAllowedT = Aws::String>
    BatchRestrictions& AddFleetsAllowed(FleetsAllowedT&& value) { m_fleetsAllowedHasBeenSet = true; m_fleetsAllowed.emplace_back(std::forward<FleetsAllowedT>(value)); return *this; }
    ///@}
  private:

    int m_maximumBuildsAllowed{0};
    bool m_maximumBuildsAllowedHasBeenSet = false;

    Aws::Vector<Aws::String> m_computeTypesAllowed;
    bool m_computeTypesAllowedHasBeenSet = false;

    Aws::Vector<Aws::String> m_fleetsAllowed;
    bool m_fleetsAllowedHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
