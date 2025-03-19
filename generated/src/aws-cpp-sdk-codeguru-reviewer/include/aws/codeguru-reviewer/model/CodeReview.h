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
    AWS_CODEGURUREVIEWER_API CodeReview() = default;
    AWS_CODEGURUREVIEWER_API CodeReview(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CodeReview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the code review.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CodeReview& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline const Aws::String& GetCodeReviewArn() const { return m_codeReviewArn; }
    inline bool CodeReviewArnHasBeenSet() const { return m_codeReviewArnHasBeenSet; }
    template<typename CodeReviewArnT = Aws::String>
    void SetCodeReviewArn(CodeReviewArnT&& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = std::forward<CodeReviewArnT>(value); }
    template<typename CodeReviewArnT = Aws::String>
    CodeReview& WithCodeReviewArn(CodeReviewArnT&& value) { SetCodeReviewArn(std::forward<CodeReviewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    CodeReview& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    CodeReview& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of repository that contains the reviewed code (for example, GitHub
     * or Bitbucket).</p>
     */
    inline ProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(ProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline CodeReview& WithProviderType(ProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid code review states are:</p> <ul> <li> <p> <code>Completed</code>:
     * The code review is complete.</p> </li> <li> <p> <code>Pending</code>: The code
     * review started and has not completed or failed.</p> </li> <li> <p>
     * <code>Failed</code>: The code review failed.</p> </li> <li> <p>
     * <code>Deleting</code>: The code review is being deleted.</p> </li> </ul>
     */
    inline JobState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JobState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CodeReview& WithState(JobState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state of the code review.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    CodeReview& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the code review was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const { return m_createdTimeStamp; }
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
    template<typename CreatedTimeStampT = Aws::Utils::DateTime>
    void SetCreatedTimeStamp(CreatedTimeStampT&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::forward<CreatedTimeStampT>(value); }
    template<typename CreatedTimeStampT = Aws::Utils::DateTime>
    CodeReview& WithCreatedTimeStamp(CreatedTimeStampT&& value) { SetCreatedTimeStamp(std::forward<CreatedTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the code review was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimeStamp() const { return m_lastUpdatedTimeStamp; }
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }
    template<typename LastUpdatedTimeStampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::forward<LastUpdatedTimeStampT>(value); }
    template<typename LastUpdatedTimeStampT = Aws::Utils::DateTime>
    CodeReview& WithLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { SetLastUpdatedTimeStamp(std::forward<LastUpdatedTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of code review.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline CodeReview& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline const Aws::String& GetPullRequestId() const { return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    template<typename PullRequestIdT = Aws::String>
    void SetPullRequestId(PullRequestIdT&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::forward<PullRequestIdT>(value); }
    template<typename PullRequestIdT = Aws::String>
    CodeReview& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the source code for the code review.</p>
     */
    inline const SourceCodeType& GetSourceCodeType() const { return m_sourceCodeType; }
    inline bool SourceCodeTypeHasBeenSet() const { return m_sourceCodeTypeHasBeenSet; }
    template<typename SourceCodeTypeT = SourceCodeType>
    void SetSourceCodeType(SourceCodeTypeT&& value) { m_sourceCodeTypeHasBeenSet = true; m_sourceCodeType = std::forward<SourceCodeTypeT>(value); }
    template<typename SourceCodeTypeT = SourceCodeType>
    CodeReview& WithSourceCodeType(SourceCodeTypeT&& value) { SetSourceCodeType(std::forward<SourceCodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_RepositoryAssociation.html">RepositoryAssociation</a>
     * that contains the reviewed source code. You can retrieve associated repository
     * ARNs by calling <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_ListRepositoryAssociations.html">ListRepositoryAssociations</a>.</p>
     */
    inline const Aws::String& GetAssociationArn() const { return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    template<typename AssociationArnT = Aws::String>
    void SetAssociationArn(AssociationArnT&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::forward<AssociationArnT>(value); }
    template<typename AssociationArnT = Aws::String>
    CodeReview& WithAssociationArn(AssociationArnT&& value) { SetAssociationArn(std::forward<AssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistics from the code review.</p>
     */
    inline const Metrics& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Metrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Metrics>
    CodeReview& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline const Aws::Vector<AnalysisType>& GetAnalysisTypes() const { return m_analysisTypes; }
    inline bool AnalysisTypesHasBeenSet() const { return m_analysisTypesHasBeenSet; }
    template<typename AnalysisTypesT = Aws::Vector<AnalysisType>>
    void SetAnalysisTypes(AnalysisTypesT&& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes = std::forward<AnalysisTypesT>(value); }
    template<typename AnalysisTypesT = Aws::Vector<AnalysisType>>
    CodeReview& WithAnalysisTypes(AnalysisTypesT&& value) { SetAnalysisTypes(std::forward<AnalysisTypesT>(value)); return *this;}
    inline CodeReview& AddAnalysisTypes(AnalysisType value) { m_analysisTypesHasBeenSet = true; m_analysisTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the <code>aws-codeguru-reviewer.yml</code> configuration file
     * that allows the configuration of the CodeGuru Reviewer analysis. The file either
     * exists, doesn't exist, or exists with errors at the root directory of your
     * repository.</p>
     */
    inline ConfigFileState GetConfigFileState() const { return m_configFileState; }
    inline bool ConfigFileStateHasBeenSet() const { return m_configFileStateHasBeenSet; }
    inline void SetConfigFileState(ConfigFileState value) { m_configFileStateHasBeenSet = true; m_configFileState = value; }
    inline CodeReview& WithConfigFileState(ConfigFileState value) { SetConfigFileState(value); return *this;}
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

    ProviderType m_providerType{ProviderType::NOT_SET};
    bool m_providerTypeHasBeenSet = false;

    JobState m_state{JobState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimeStamp{};
    bool m_createdTimeStampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp{};
    bool m_lastUpdatedTimeStampHasBeenSet = false;

    Type m_type{Type::NOT_SET};
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

    ConfigFileState m_configFileState{ConfigFileState::NOT_SET};
    bool m_configFileStateHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
