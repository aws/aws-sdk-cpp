/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/ProviderType.h>
#include <aws/codeguru-reviewer/model/JobState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguru-reviewer/model/Type.h>
#include <aws/codeguru-reviewer/model/SourceCodeType.h>
#include <aws/codeguru-reviewer/model/Metrics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-reviewer/model/ConfigFileState.h>
#include <aws/codeguru-reviewer/model/AnalysisType.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about a code review. A code review belongs to the associated
   * repository that contains the reviewed code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CodeReview">AWS
   * API Reference</a></p>
   */
  class CodeReview
  {
  public:
    AWS_CODEGURUREVIEWER_API CodeReview();
    AWS_CODEGURUREVIEWER_API CodeReview(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CodeReview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the code review.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CodeReview& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CodeReview& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CodeReview& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline const Aws::String& GetCodeReviewArn() const{ return m_codeReviewArn; }
    inline bool CodeReviewArnHasBeenSet() const { return m_codeReviewArnHasBeenSet; }
    inline void SetCodeReviewArn(const Aws::String& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = value; }
    inline void SetCodeReviewArn(Aws::String&& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = std::move(value); }
    inline void SetCodeReviewArn(const char* value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn.assign(value); }
    inline CodeReview& WithCodeReviewArn(const Aws::String& value) { SetCodeReviewArn(value); return *this;}
    inline CodeReview& WithCodeReviewArn(Aws::String&& value) { SetCodeReviewArn(std::move(value)); return *this;}
    inline CodeReview& WithCodeReviewArn(const char* value) { SetCodeReviewArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline CodeReview& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline CodeReview& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline CodeReview& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline CodeReview& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline CodeReview& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline CodeReview& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of repository that contains the reviewed code (for example, GitHub
     * or Bitbucket).</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }
    inline CodeReview& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}
    inline CodeReview& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid code review states are:</p> <ul> <li> <p> <code>Completed</code>:
     * The code review is complete.</p> </li> <li> <p> <code>Pending</code>: The code
     * review started and has not completed or failed.</p> </li> <li> <p>
     * <code>Failed</code>: The code review failed.</p> </li> <li> <p>
     * <code>Deleting</code>: The code review is being deleted.</p> </li> </ul>
     */
    inline const JobState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const JobState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(JobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CodeReview& WithState(const JobState& value) { SetState(value); return *this;}
    inline CodeReview& WithState(JobState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state of the code review.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }
    inline CodeReview& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline CodeReview& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline CodeReview& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the code review was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const{ return m_createdTimeStamp; }
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
    inline void SetCreatedTimeStamp(const Aws::Utils::DateTime& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }
    inline void SetCreatedTimeStamp(Aws::Utils::DateTime&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::move(value); }
    inline CodeReview& WithCreatedTimeStamp(const Aws::Utils::DateTime& value) { SetCreatedTimeStamp(value); return *this;}
    inline CodeReview& WithCreatedTimeStamp(Aws::Utils::DateTime&& value) { SetCreatedTimeStamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the code review was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimeStamp() const{ return m_lastUpdatedTimeStamp; }
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }
    inline void SetLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = value; }
    inline void SetLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::move(value); }
    inline CodeReview& WithLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimeStamp(value); return *this;}
    inline CodeReview& WithLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimeStamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of code review.</p>
     */
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CodeReview& WithType(const Type& value) { SetType(value); return *this;}
    inline CodeReview& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }
    inline CodeReview& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}
    inline CodeReview& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}
    inline CodeReview& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source code for the code review.</p>
     */
    inline const SourceCodeType& GetSourceCodeType() const{ return m_sourceCodeType; }
    inline bool SourceCodeTypeHasBeenSet() const { return m_sourceCodeTypeHasBeenSet; }
    inline void SetSourceCodeType(const SourceCodeType& value) { m_sourceCodeTypeHasBeenSet = true; m_sourceCodeType = value; }
    inline void SetSourceCodeType(SourceCodeType&& value) { m_sourceCodeTypeHasBeenSet = true; m_sourceCodeType = std::move(value); }
    inline CodeReview& WithSourceCodeType(const SourceCodeType& value) { SetSourceCodeType(value); return *this;}
    inline CodeReview& WithSourceCodeType(SourceCodeType&& value) { SetSourceCodeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * that contains the reviewed source code. You can retrieve associated repository
     * ARNs by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline const Aws::String& GetAssociationArn() const{ return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    inline void SetAssociationArn(const Aws::String& value) { m_associationArnHasBeenSet = true; m_associationArn = value; }
    inline void SetAssociationArn(Aws::String&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::move(value); }
    inline void SetAssociationArn(const char* value) { m_associationArnHasBeenSet = true; m_associationArn.assign(value); }
    inline CodeReview& WithAssociationArn(const Aws::String& value) { SetAssociationArn(value); return *this;}
    inline CodeReview& WithAssociationArn(Aws::String&& value) { SetAssociationArn(std::move(value)); return *this;}
    inline CodeReview& WithAssociationArn(const char* value) { SetAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistics from the code review.</p>
     */
    inline const Metrics& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Metrics& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Metrics&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline CodeReview& WithMetrics(const Metrics& value) { SetMetrics(value); return *this;}
    inline CodeReview& WithMetrics(Metrics&& value) { SetMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline const Aws::Vector<AnalysisType>& GetAnalysisTypes() const{ return m_analysisTypes; }
    inline bool AnalysisTypesHasBeenSet() const { return m_analysisTypesHasBeenSet; }
    inline void SetAnalysisTypes(const Aws::Vector<AnalysisType>& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes = value; }
    inline void SetAnalysisTypes(Aws::Vector<AnalysisType>&& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes = std::move(value); }
    inline CodeReview& WithAnalysisTypes(const Aws::Vector<AnalysisType>& value) { SetAnalysisTypes(value); return *this;}
    inline CodeReview& WithAnalysisTypes(Aws::Vector<AnalysisType>&& value) { SetAnalysisTypes(std::move(value)); return *this;}
    inline CodeReview& AddAnalysisTypes(const AnalysisType& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes.push_back(value); return *this; }
    inline CodeReview& AddAnalysisTypes(AnalysisType&& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the <code>aws-codeguru-reviewer.yml</code> configuration file
     * that allows the configuration of the CodeGuru Reviewer analysis. The file either
     * exists, doesn't exist, or exists with errors at the root directory of your
     * repository.</p>
     */
    inline const ConfigFileState& GetConfigFileState() const{ return m_configFileState; }
    inline bool ConfigFileStateHasBeenSet() const { return m_configFileStateHasBeenSet; }
    inline void SetConfigFileState(const ConfigFileState& value) { m_configFileStateHasBeenSet = true; m_configFileState = value; }
    inline void SetConfigFileState(ConfigFileState&& value) { m_configFileStateHasBeenSet = true; m_configFileState = std::move(value); }
    inline CodeReview& WithConfigFileState(const ConfigFileState& value) { SetConfigFileState(value); return *this;}
    inline CodeReview& WithConfigFileState(ConfigFileState&& value) { SetConfigFileState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_codeReviewArn;
    bool m_codeReviewArnHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    JobState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimeStamp;
    bool m_createdTimeStampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp;
    bool m_lastUpdatedTimeStampHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    SourceCodeType m_sourceCodeType;
    bool m_sourceCodeTypeHasBeenSet = false;

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;

    Metrics m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::Vector<AnalysisType> m_analysisTypes;
    bool m_analysisTypesHasBeenSet = false;

    ConfigFileState m_configFileState;
    bool m_configFileStateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
