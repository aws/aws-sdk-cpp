/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/StatusType.h>
#include <aws/codebuild/model/ResolvedArtifact.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains summary information about a batch build group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildSummary">AWS
   * API Reference</a></p>
   */
  class BuildSummary
  {
  public:
    AWS_CODEBUILD_API BuildSummary() = default;
    AWS_CODEBUILD_API BuildSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The batch build ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BuildSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build was started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedOn() const { return m_requestedOn; }
    inline bool RequestedOnHasBeenSet() const { return m_requestedOnHasBeenSet; }
    template<typename RequestedOnT = Aws::Utils::DateTime>
    void SetRequestedOn(RequestedOnT&& value) { m_requestedOnHasBeenSet = true; m_requestedOn = std::forward<RequestedOnT>(value); }
    template<typename RequestedOnT = Aws::Utils::DateTime>
    BuildSummary& WithRequestedOn(RequestedOnT&& value) { SetRequestedOn(std::forward<RequestedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the build group.</p> <dl> <dt>FAILED</dt> <dd> <p>The build
     * group failed.</p> </dd> <dt>FAULT</dt> <dd> <p>The build group faulted.</p>
     * </dd> <dt>IN_PROGRESS</dt> <dd> <p>The build group is still in progress.</p>
     * </dd> <dt>STOPPED</dt> <dd> <p>The build group stopped.</p> </dd>
     * <dt>SUCCEEDED</dt> <dd> <p>The build group succeeded.</p> </dd>
     * <dt>TIMED_OUT</dt> <dd> <p>The build group timed out.</p> </dd> </dl>
     */
    inline StatusType GetBuildStatus() const { return m_buildStatus; }
    inline bool BuildStatusHasBeenSet() const { return m_buildStatusHasBeenSet; }
    inline void SetBuildStatus(StatusType value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }
    inline BuildSummary& WithBuildStatus(StatusType value) { SetBuildStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ResolvedArtifact</code> object that represents the primary build
     * artifacts for the build group.</p>
     */
    inline const ResolvedArtifact& GetPrimaryArtifact() const { return m_primaryArtifact; }
    inline bool PrimaryArtifactHasBeenSet() const { return m_primaryArtifactHasBeenSet; }
    template<typename PrimaryArtifactT = ResolvedArtifact>
    void SetPrimaryArtifact(PrimaryArtifactT&& value) { m_primaryArtifactHasBeenSet = true; m_primaryArtifact = std::forward<PrimaryArtifactT>(value); }
    template<typename PrimaryArtifactT = ResolvedArtifact>
    BuildSummary& WithPrimaryArtifact(PrimaryArtifactT&& value) { SetPrimaryArtifact(std::forward<PrimaryArtifactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ResolvedArtifact</code> objects that represents the
     * secondary build artifacts for the build group.</p>
     */
    inline const Aws::Vector<ResolvedArtifact>& GetSecondaryArtifacts() const { return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    template<typename SecondaryArtifactsT = Aws::Vector<ResolvedArtifact>>
    void SetSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::forward<SecondaryArtifactsT>(value); }
    template<typename SecondaryArtifactsT = Aws::Vector<ResolvedArtifact>>
    BuildSummary& WithSecondaryArtifacts(SecondaryArtifactsT&& value) { SetSecondaryArtifacts(std::forward<SecondaryArtifactsT>(value)); return *this;}
    template<typename SecondaryArtifactsT = ResolvedArtifact>
    BuildSummary& AddSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.emplace_back(std::forward<SecondaryArtifactsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_requestedOn{};
    bool m_requestedOnHasBeenSet = false;

    StatusType m_buildStatus{StatusType::NOT_SET};
    bool m_buildStatusHasBeenSet = false;

    ResolvedArtifact m_primaryArtifact;
    bool m_primaryArtifactHasBeenSet = false;

    Aws::Vector<ResolvedArtifact> m_secondaryArtifacts;
    bool m_secondaryArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
