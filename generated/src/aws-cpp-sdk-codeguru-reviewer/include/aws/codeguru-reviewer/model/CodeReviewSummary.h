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
    AWS_CODEGURUREVIEWER_API CodeReviewSummary();
    AWS_CODEGURUREVIEWER_API CodeReviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CodeReviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the code review.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the code review.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the code review.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the code review.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the code review.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the code review.</p>
     */
    inline CodeReviewSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the code review.</p>
     */
    inline CodeReviewSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the code review.</p>
     */
    inline CodeReviewSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline const Aws::String& GetCodeReviewArn() const{ return m_codeReviewArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline bool CodeReviewArnHasBeenSet() const { return m_codeReviewArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline void SetCodeReviewArn(const Aws::String& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline void SetCodeReviewArn(Aws::String&& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline void SetCodeReviewArn(const char* value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline CodeReviewSummary& WithCodeReviewArn(const Aws::String& value) { SetCodeReviewArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline CodeReviewSummary& WithCodeReviewArn(Aws::String&& value) { SetCodeReviewArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline CodeReviewSummary& WithCodeReviewArn(const char* value) { SetCodeReviewArn(value); return *this;}


    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline CodeReviewSummary& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline CodeReviewSummary& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline CodeReviewSummary& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline CodeReviewSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline CodeReviewSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the repository. For an Amazon Web Services CodeCommit
     * repository, this is the Amazon Web Services account ID of the account that owns
     * the repository. For a GitHub, GitHub Enterprise Server, or Bitbucket repository,
     * this is the username for the account that owns the repository. For an S3
     * repository, it can be the username or Amazon Web Services account ID.</p>
     */
    inline CodeReviewSummary& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The provider type of the repository association.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline CodeReviewSummary& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline CodeReviewSummary& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The state of the code review.</p> <p>The valid code review states are:</p>
     * <ul> <li> <p> <code>Completed</code>: The code review is complete.</p> </li>
     * <li> <p> <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline const JobState& GetState() const{ return m_state; }

    /**
     * <p>The state of the code review.</p> <p>The valid code review states are:</p>
     * <ul> <li> <p> <code>Completed</code>: The code review is complete.</p> </li>
     * <li> <p> <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the code review.</p> <p>The valid code review states are:</p>
     * <ul> <li> <p> <code>Completed</code>: The code review is complete.</p> </li>
     * <li> <p> <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline void SetState(const JobState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the code review.</p> <p>The valid code review states are:</p>
     * <ul> <li> <p> <code>Completed</code>: The code review is complete.</p> </li>
     * <li> <p> <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline void SetState(JobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the code review.</p> <p>The valid code review states are:</p>
     * <ul> <li> <p> <code>Completed</code>: The code review is complete.</p> </li>
     * <li> <p> <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline CodeReviewSummary& WithState(const JobState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the code review.</p> <p>The valid code review states are:</p>
     * <ul> <li> <p> <code>Completed</code>: The code review is complete.</p> </li>
     * <li> <p> <code>Pending</code>: The code review started and has not completed or
     * failed.</p> </li> <li> <p> <code>Failed</code>: The code review failed.</p>
     * </li> <li> <p> <code>Deleting</code>: The code review is being deleted.</p>
     * </li> </ul>
     */
    inline CodeReviewSummary& WithState(JobState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the code review was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const{ return m_createdTimeStamp; }

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was
     * created.</p>
     */
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was
     * created.</p>
     */
    inline void SetCreatedTimeStamp(const Aws::Utils::DateTime& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was
     * created.</p>
     */
    inline void SetCreatedTimeStamp(Aws::Utils::DateTime&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was
     * created.</p>
     */
    inline CodeReviewSummary& WithCreatedTimeStamp(const Aws::Utils::DateTime& value) { SetCreatedTimeStamp(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was
     * created.</p>
     */
    inline CodeReviewSummary& WithCreatedTimeStamp(Aws::Utils::DateTime&& value) { SetCreatedTimeStamp(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the code review was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimeStamp() const{ return m_lastUpdatedTimeStamp; }

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was last
     * updated.</p>
     */
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was last
     * updated.</p>
     */
    inline void SetLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was last
     * updated.</p>
     */
    inline void SetLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was last
     * updated.</p>
     */
    inline CodeReviewSummary& WithLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimeStamp(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the code review was last
     * updated.</p>
     */
    inline CodeReviewSummary& WithLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimeStamp(std::move(value)); return *this;}


    /**
     * <p>The type of the code review.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of the code review.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the code review.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the code review.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the code review.</p>
     */
    inline CodeReviewSummary& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of the code review.</p>
     */
    inline CodeReviewSummary& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline CodeReviewSummary& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline CodeReviewSummary& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The pull request ID for the code review.</p>
     */
    inline CodeReviewSummary& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The statistics from the code review.</p>
     */
    inline const MetricsSummary& GetMetricsSummary() const{ return m_metricsSummary; }

    /**
     * <p>The statistics from the code review.</p>
     */
    inline bool MetricsSummaryHasBeenSet() const { return m_metricsSummaryHasBeenSet; }

    /**
     * <p>The statistics from the code review.</p>
     */
    inline void SetMetricsSummary(const MetricsSummary& value) { m_metricsSummaryHasBeenSet = true; m_metricsSummary = value; }

    /**
     * <p>The statistics from the code review.</p>
     */
    inline void SetMetricsSummary(MetricsSummary&& value) { m_metricsSummaryHasBeenSet = true; m_metricsSummary = std::move(value); }

    /**
     * <p>The statistics from the code review.</p>
     */
    inline CodeReviewSummary& WithMetricsSummary(const MetricsSummary& value) { SetMetricsSummary(value); return *this;}

    /**
     * <p>The statistics from the code review.</p>
     */
    inline CodeReviewSummary& WithMetricsSummary(MetricsSummary&& value) { SetMetricsSummary(std::move(value)); return *this;}


    
    inline const SourceCodeType& GetSourceCodeType() const{ return m_sourceCodeType; }

    
    inline bool SourceCodeTypeHasBeenSet() const { return m_sourceCodeTypeHasBeenSet; }

    
    inline void SetSourceCodeType(const SourceCodeType& value) { m_sourceCodeTypeHasBeenSet = true; m_sourceCodeType = value; }

    
    inline void SetSourceCodeType(SourceCodeType&& value) { m_sourceCodeTypeHasBeenSet = true; m_sourceCodeType = std::move(value); }

    
    inline CodeReviewSummary& WithSourceCodeType(const SourceCodeType& value) { SetSourceCodeType(value); return *this;}

    
    inline CodeReviewSummary& WithSourceCodeType(SourceCodeType&& value) { SetSourceCodeType(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_createdTimeStamp;
    bool m_createdTimeStampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp;
    bool m_lastUpdatedTimeStampHasBeenSet = false;

    Type m_type;
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
