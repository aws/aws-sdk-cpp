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
    AWS_CODEBUILD_API BuildSummary();
    AWS_CODEBUILD_API BuildSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The batch build ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BuildSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BuildSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BuildSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build was started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedOn() const{ return m_requestedOn; }
    inline bool RequestedOnHasBeenSet() const { return m_requestedOnHasBeenSet; }
    inline void SetRequestedOn(const Aws::Utils::DateTime& value) { m_requestedOnHasBeenSet = true; m_requestedOn = value; }
    inline void SetRequestedOn(Aws::Utils::DateTime&& value) { m_requestedOnHasBeenSet = true; m_requestedOn = std::move(value); }
    inline BuildSummary& WithRequestedOn(const Aws::Utils::DateTime& value) { SetRequestedOn(value); return *this;}
    inline BuildSummary& WithRequestedOn(Aws::Utils::DateTime&& value) { SetRequestedOn(std::move(value)); return *this;}
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
    inline const StatusType& GetBuildStatus() const{ return m_buildStatus; }
    inline bool BuildStatusHasBeenSet() const { return m_buildStatusHasBeenSet; }
    inline void SetBuildStatus(const StatusType& value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }
    inline void SetBuildStatus(StatusType&& value) { m_buildStatusHasBeenSet = true; m_buildStatus = std::move(value); }
    inline BuildSummary& WithBuildStatus(const StatusType& value) { SetBuildStatus(value); return *this;}
    inline BuildSummary& WithBuildStatus(StatusType&& value) { SetBuildStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ResolvedArtifact</code> object that represents the primary build
     * artifacts for the build group.</p>
     */
    inline const ResolvedArtifact& GetPrimaryArtifact() const{ return m_primaryArtifact; }
    inline bool PrimaryArtifactHasBeenSet() const { return m_primaryArtifactHasBeenSet; }
    inline void SetPrimaryArtifact(const ResolvedArtifact& value) { m_primaryArtifactHasBeenSet = true; m_primaryArtifact = value; }
    inline void SetPrimaryArtifact(ResolvedArtifact&& value) { m_primaryArtifactHasBeenSet = true; m_primaryArtifact = std::move(value); }
    inline BuildSummary& WithPrimaryArtifact(const ResolvedArtifact& value) { SetPrimaryArtifact(value); return *this;}
    inline BuildSummary& WithPrimaryArtifact(ResolvedArtifact&& value) { SetPrimaryArtifact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ResolvedArtifact</code> objects that represents the
     * secondary build artifacts for the build group.</p>
     */
    inline const Aws::Vector<ResolvedArtifact>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    inline void SetSecondaryArtifacts(const Aws::Vector<ResolvedArtifact>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }
    inline void SetSecondaryArtifacts(Aws::Vector<ResolvedArtifact>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }
    inline BuildSummary& WithSecondaryArtifacts(const Aws::Vector<ResolvedArtifact>& value) { SetSecondaryArtifacts(value); return *this;}
    inline BuildSummary& WithSecondaryArtifacts(Aws::Vector<ResolvedArtifact>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}
    inline BuildSummary& AddSecondaryArtifacts(const ResolvedArtifact& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }
    inline BuildSummary& AddSecondaryArtifacts(ResolvedArtifact&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_requestedOn;
    bool m_requestedOnHasBeenSet = false;

    StatusType m_buildStatus;
    bool m_buildStatusHasBeenSet = false;

    ResolvedArtifact m_primaryArtifact;
    bool m_primaryArtifactHasBeenSet = false;

    Aws::Vector<ResolvedArtifact> m_secondaryArtifacts;
    bool m_secondaryArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
