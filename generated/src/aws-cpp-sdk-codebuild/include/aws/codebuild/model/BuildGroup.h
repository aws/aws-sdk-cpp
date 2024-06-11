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
    AWS_CODEBUILD_API BuildGroup();
    AWS_CODEBUILD_API BuildGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the identifier of the build group.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline BuildGroup& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline BuildGroup& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline BuildGroup& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that contain the identifiers of the build groups that
     * this build group depends on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependsOn() const{ return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    inline void SetDependsOn(const Aws::Vector<Aws::String>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }
    inline void SetDependsOn(Aws::Vector<Aws::String>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }
    inline BuildGroup& WithDependsOn(const Aws::Vector<Aws::String>& value) { SetDependsOn(value); return *this;}
    inline BuildGroup& WithDependsOn(Aws::Vector<Aws::String>&& value) { SetDependsOn(std::move(value)); return *this;}
    inline BuildGroup& AddDependsOn(const Aws::String& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }
    inline BuildGroup& AddDependsOn(Aws::String&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }
    inline BuildGroup& AddDependsOn(const char* value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if failures in this build group can be ignored.</p>
     */
    inline bool GetIgnoreFailure() const{ return m_ignoreFailure; }
    inline bool IgnoreFailureHasBeenSet() const { return m_ignoreFailureHasBeenSet; }
    inline void SetIgnoreFailure(bool value) { m_ignoreFailureHasBeenSet = true; m_ignoreFailure = value; }
    inline BuildGroup& WithIgnoreFailure(bool value) { SetIgnoreFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>BuildSummary</code> object that contains a summary of the current
     * build group.</p>
     */
    inline const BuildSummary& GetCurrentBuildSummary() const{ return m_currentBuildSummary; }
    inline bool CurrentBuildSummaryHasBeenSet() const { return m_currentBuildSummaryHasBeenSet; }
    inline void SetCurrentBuildSummary(const BuildSummary& value) { m_currentBuildSummaryHasBeenSet = true; m_currentBuildSummary = value; }
    inline void SetCurrentBuildSummary(BuildSummary&& value) { m_currentBuildSummaryHasBeenSet = true; m_currentBuildSummary = std::move(value); }
    inline BuildGroup& WithCurrentBuildSummary(const BuildSummary& value) { SetCurrentBuildSummary(value); return *this;}
    inline BuildGroup& WithCurrentBuildSummary(BuildSummary&& value) { SetCurrentBuildSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildSummary</code> objects that contain summaries of
     * previous build groups.</p>
     */
    inline const Aws::Vector<BuildSummary>& GetPriorBuildSummaryList() const{ return m_priorBuildSummaryList; }
    inline bool PriorBuildSummaryListHasBeenSet() const { return m_priorBuildSummaryListHasBeenSet; }
    inline void SetPriorBuildSummaryList(const Aws::Vector<BuildSummary>& value) { m_priorBuildSummaryListHasBeenSet = true; m_priorBuildSummaryList = value; }
    inline void SetPriorBuildSummaryList(Aws::Vector<BuildSummary>&& value) { m_priorBuildSummaryListHasBeenSet = true; m_priorBuildSummaryList = std::move(value); }
    inline BuildGroup& WithPriorBuildSummaryList(const Aws::Vector<BuildSummary>& value) { SetPriorBuildSummaryList(value); return *this;}
    inline BuildGroup& WithPriorBuildSummaryList(Aws::Vector<BuildSummary>&& value) { SetPriorBuildSummaryList(std::move(value)); return *this;}
    inline BuildGroup& AddPriorBuildSummaryList(const BuildSummary& value) { m_priorBuildSummaryListHasBeenSet = true; m_priorBuildSummaryList.push_back(value); return *this; }
    inline BuildGroup& AddPriorBuildSummaryList(BuildSummary&& value) { m_priorBuildSummaryListHasBeenSet = true; m_priorBuildSummaryList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    bool m_ignoreFailure;
    bool m_ignoreFailureHasBeenSet = false;

    BuildSummary m_currentBuildSummary;
    bool m_currentBuildSummaryHasBeenSet = false;

    Aws::Vector<BuildSummary> m_priorBuildSummaryList;
    bool m_priorBuildSummaryListHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
