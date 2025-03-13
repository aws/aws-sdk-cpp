/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/BuildSummary.h>
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
   * <p>Contains information about a batch build build group. Build groups are used
   * to combine builds that can run in parallel, while still being able to set
   * dependencies on other build groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildGroup">AWS
   * API Reference</a></p>
   */
  class BuildGroup
  {
  public:
    AWS_CODEBUILD_API BuildGroup() = default;
    AWS_CODEBUILD_API BuildGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the identifier of the build group.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    BuildGroup& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that contain the identifiers of the build groups that
     * this build group depends on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<Aws::String>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<Aws::String>>
    BuildGroup& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = Aws::String>
    BuildGroup& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if failures in this build group can be ignored.</p>
     */
    inline bool GetIgnoreFailure() const { return m_ignoreFailure; }
    inline bool IgnoreFailureHasBeenSet() const { return m_ignoreFailureHasBeenSet; }
    inline void SetIgnoreFailure(bool value) { m_ignoreFailureHasBeenSet = true; m_ignoreFailure = value; }
    inline BuildGroup& WithIgnoreFailure(bool value) { SetIgnoreFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>BuildSummary</code> object that contains a summary of the current
     * build group.</p>
     */
    inline const BuildSummary& GetCurrentBuildSummary() const { return m_currentBuildSummary; }
    inline bool CurrentBuildSummaryHasBeenSet() const { return m_currentBuildSummaryHasBeenSet; }
    template<typename CurrentBuildSummaryT = BuildSummary>
    void SetCurrentBuildSummary(CurrentBuildSummaryT&& value) { m_currentBuildSummaryHasBeenSet = true; m_currentBuildSummary = std::forward<CurrentBuildSummaryT>(value); }
    template<typename CurrentBuildSummaryT = BuildSummary>
    BuildGroup& WithCurrentBuildSummary(CurrentBuildSummaryT&& value) { SetCurrentBuildSummary(std::forward<CurrentBuildSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildSummary</code> objects that contain summaries of
     * previous build groups.</p>
     */
    inline const Aws::Vector<BuildSummary>& GetPriorBuildSummaryList() const { return m_priorBuildSummaryList; }
    inline bool PriorBuildSummaryListHasBeenSet() const { return m_priorBuildSummaryListHasBeenSet; }
    template<typename PriorBuildSummaryListT = Aws::Vector<BuildSummary>>
    void SetPriorBuildSummaryList(PriorBuildSummaryListT&& value) { m_priorBuildSummaryListHasBeenSet = true; m_priorBuildSummaryList = std::forward<PriorBuildSummaryListT>(value); }
    template<typename PriorBuildSummaryListT = Aws::Vector<BuildSummary>>
    BuildGroup& WithPriorBuildSummaryList(PriorBuildSummaryListT&& value) { SetPriorBuildSummaryList(std::forward<PriorBuildSummaryListT>(value)); return *this;}
    template<typename PriorBuildSummaryListT = BuildSummary>
    BuildGroup& AddPriorBuildSummaryList(PriorBuildSummaryListT&& value) { m_priorBuildSummaryListHasBeenSet = true; m_priorBuildSummaryList.emplace_back(std::forward<PriorBuildSummaryListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    bool m_ignoreFailure{false};
    bool m_ignoreFailureHasBeenSet = false;

    BuildSummary m_currentBuildSummary;
    bool m_currentBuildSummaryHasBeenSet = false;

    Aws::Vector<BuildSummary> m_priorBuildSummaryList;
    bool m_priorBuildSummaryListHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
