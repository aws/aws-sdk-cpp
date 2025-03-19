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
#include <aws/codeguru-reviewer/model/MetricsSummary.h>
#include <aws/codeguru-reviewer/model/SourceCodeType.h>
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
   * <p>Information about the summary of the code review.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CodeReviewSummary">AWS
   * API Reference</a></p>
   */
  class CodeReviewSummary
  {
  public:
    AWS_CODEGURUREVIEWER_API CodeReviewSummary() = default;
    AWS_CODEGURUREVIEWER_API CodeReviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CodeReviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    CodeReviewSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CodeReviewSummary& WithCodeReviewArn(CodeReviewArnT&& value) { SetCodeReviewArn(std::forward<CodeReviewArnT>(value)); return *this;}
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
    CodeReviewSummary& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
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
    CodeReviewSummary& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider type of the repository association.</p>
     */
    inline ProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(ProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline CodeReviewSummary& WithProviderType(ProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the code review.</p> <p>The valid code review states are:</p>
     * <ul> <li> <p> <code>Completed</code>: The code review is complete.</p> </li>
     * <li> <p> <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline JobState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JobState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CodeReviewSummary& WithState(JobState value) { SetState(value); return *this;}
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
    CodeReviewSummary& WithCreatedTimeStamp(CreatedTimeStampT&& value) { SetCreatedTimeStamp(std::forward<CreatedTimeStampT>(value)); return *this;}
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
    CodeReviewSummary& WithLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { SetLastUpdatedTimeStamp(std::forward<LastUpdatedTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the code review.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline CodeReviewSummary& WithType(Type value) { SetType(value); return *this;}
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
    CodeReviewSummary& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistics from the code review.</p>
     */
    inline const MetricsSummary& GetMetricsSummary() const { return m_metricsSummary; }
    inline bool MetricsSummaryHasBeenSet() const { return m_metricsSummaryHasBeenSet; }
    template<typename MetricsSummaryT = MetricsSummary>
    void SetMetricsSummary(MetricsSummaryT&& value) { m_metricsSummaryHasBeenSet = true; m_metricsSummary = std::forward<MetricsSummaryT>(value); }
    template<typename MetricsSummaryT = MetricsSummary>
    CodeReviewSummary& WithMetricsSummary(MetricsSummaryT&& value) { SetMetricsSummary(std::forward<MetricsSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SourceCodeType& GetSourceCodeType() const { return m_sourceCodeType; }
    inline bool SourceCodeTypeHasBeenSet() const { return m_sourceCodeTypeHasBeenSet; }
    template<typename SourceCodeTypeT = SourceCodeType>
    void SetSourceCodeType(SourceCodeTypeT&& value) { m_sourceCodeTypeHasBeenSet = true; m_sourceCodeType = std::forward<SourceCodeTypeT>(value); }
    template<typename SourceCodeTypeT = SourceCodeType>
    CodeReviewSummary& WithSourceCodeType(SourceCodeTypeT&& value) { SetSourceCodeType(std::forward<SourceCodeTypeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdTimeStamp{};
    bool m_createdTimeStampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp{};
    bool m_lastUpdatedTimeStampHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    MetricsSummary m_metricsSummary;
    bool m_metricsSummaryHasBeenSet = false;

    SourceCodeType m_sourceCodeType;
    bool m_sourceCodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
