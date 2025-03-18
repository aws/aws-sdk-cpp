/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationTaskAssessmentRunMessage">AWS
   * API Reference</a></p>
   */
  class StartReplicationTaskAssessmentRunRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationTaskAssessmentRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReplicationTaskAssessmentRun"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const { return m_replicationTaskArn; }
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }
    template<typename ReplicationTaskArnT = Aws::String>
    void SetReplicationTaskArn(ReplicationTaskArnT&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::forward<ReplicationTaskArnT>(value); }
    template<typename ReplicationTaskArnT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& WithReplicationTaskArn(ReplicationTaskArnT&& value) { SetReplicationTaskArn(std::forward<ReplicationTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline const Aws::String& GetResultLocationBucket() const { return m_resultLocationBucket; }
    inline bool ResultLocationBucketHasBeenSet() const { return m_resultLocationBucketHasBeenSet; }
    template<typename ResultLocationBucketT = Aws::String>
    void SetResultLocationBucket(ResultLocationBucketT&& value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket = std::forward<ResultLocationBucketT>(value); }
    template<typename ResultLocationBucketT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& WithResultLocationBucket(ResultLocationBucketT&& value) { SetResultLocationBucket(std::forward<ResultLocationBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline const Aws::String& GetResultLocationFolder() const { return m_resultLocationFolder; }
    inline bool ResultLocationFolderHasBeenSet() const { return m_resultLocationFolderHasBeenSet; }
    template<typename ResultLocationFolderT = Aws::String>
    void SetResultLocationFolder(ResultLocationFolderT&& value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder = std::forward<ResultLocationFolderT>(value); }
    template<typename ResultLocationFolderT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& WithResultLocationFolder(ResultLocationFolderT&& value) { SetResultLocationFolder(std::forward<ResultLocationFolderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption mode that you can specify to encrypt the results of this
     * assessment run. If you don't specify this request parameter, DMS stores the
     * assessment run results without encryption. You can specify one of the options
     * following:</p> <ul> <li> <p> <code>"SSE_S3"</code> – The server-side encryption
     * provided as a default by Amazon S3.</p> </li> <li> <p> <code>"SSE_KMS"</code> –
     * Key Management Service (KMS) encryption. This encryption can use either a custom
     * KMS encryption key that you specify or the default KMS encryption key that DMS
     * provides.</p> </li> </ul>
     */
    inline const Aws::String& GetResultEncryptionMode() const { return m_resultEncryptionMode; }
    inline bool ResultEncryptionModeHasBeenSet() const { return m_resultEncryptionModeHasBeenSet; }
    template<typename ResultEncryptionModeT = Aws::String>
    void SetResultEncryptionMode(ResultEncryptionModeT&& value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode = std::forward<ResultEncryptionModeT>(value); }
    template<typename ResultEncryptionModeT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& WithResultEncryptionMode(ResultEncryptionModeT&& value) { SetResultEncryptionMode(std::forward<ResultEncryptionModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline const Aws::String& GetResultKmsKeyArn() const { return m_resultKmsKeyArn; }
    inline bool ResultKmsKeyArnHasBeenSet() const { return m_resultKmsKeyArnHasBeenSet; }
    template<typename ResultKmsKeyArnT = Aws::String>
    void SetResultKmsKeyArn(ResultKmsKeyArnT&& value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn = std::forward<ResultKmsKeyArnT>(value); }
    template<typename ResultKmsKeyArnT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& WithResultKmsKeyArn(ResultKmsKeyArnT&& value) { SetResultKmsKeyArn(std::forward<ResultKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline const Aws::String& GetAssessmentRunName() const { return m_assessmentRunName; }
    inline bool AssessmentRunNameHasBeenSet() const { return m_assessmentRunNameHasBeenSet; }
    template<typename AssessmentRunNameT = Aws::String>
    void SetAssessmentRunName(AssessmentRunNameT&& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = std::forward<AssessmentRunNameT>(value); }
    template<typename AssessmentRunNameT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& WithAssessmentRunName(AssessmentRunNameT&& value) { SetAssessmentRunName(std::forward<AssessmentRunNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Space-separated list of names for specific individual assessments that you
     * want to include. These names come from the default list of individual
     * assessments that DMS supports for the associated migration task. This task is
     * specified by <code>ReplicationTaskArn</code>.</p>  <p>You can't set a
     * value for <code>IncludeOnly</code> if you also set a value for
     * <code>Exclude</code> in the API operation. </p> <p>To identify the names of the
     * default individual assessments that DMS supports for the associated migration
     * task, run the <code>DescribeApplicableIndividualAssessments</code> operation
     * using its own <code>ReplicationTaskArn</code> request parameter.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetIncludeOnly() const { return m_includeOnly; }
    inline bool IncludeOnlyHasBeenSet() const { return m_includeOnlyHasBeenSet; }
    template<typename IncludeOnlyT = Aws::Vector<Aws::String>>
    void SetIncludeOnly(IncludeOnlyT&& value) { m_includeOnlyHasBeenSet = true; m_includeOnly = std::forward<IncludeOnlyT>(value); }
    template<typename IncludeOnlyT = Aws::Vector<Aws::String>>
    StartReplicationTaskAssessmentRunRequest& WithIncludeOnly(IncludeOnlyT&& value) { SetIncludeOnly(std::forward<IncludeOnlyT>(value)); return *this;}
    template<typename IncludeOnlyT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& AddIncludeOnly(IncludeOnlyT&& value) { m_includeOnlyHasBeenSet = true; m_includeOnly.emplace_back(std::forward<IncludeOnlyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Space-separated list of names for specific individual assessments that you
     * want to exclude. These names come from the default list of individual
     * assessments that DMS supports for the associated migration task. This task is
     * specified by <code>ReplicationTaskArn</code>.</p>  <p>You can't set a
     * value for <code>Exclude</code> if you also set a value for
     * <code>IncludeOnly</code> in the API operation.</p> <p>To identify the names of
     * the default individual assessments that DMS supports for the associated
     * migration task, run the <code>DescribeApplicableIndividualAssessments</code>
     * operation using its own <code>ReplicationTaskArn</code> request parameter.</p>
     * 
     */
    inline const Aws::Vector<Aws::String>& GetExclude() const { return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    template<typename ExcludeT = Aws::Vector<Aws::String>>
    void SetExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude = std::forward<ExcludeT>(value); }
    template<typename ExcludeT = Aws::Vector<Aws::String>>
    StartReplicationTaskAssessmentRunRequest& WithExclude(ExcludeT&& value) { SetExclude(std::forward<ExcludeT>(value)); return *this;}
    template<typename ExcludeT = Aws::String>
    StartReplicationTaskAssessmentRunRequest& AddExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude.emplace_back(std::forward<ExcludeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more tags to be assigned to the premigration assessment run that you
     * want to start.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartReplicationTaskAssessmentRunRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartReplicationTaskAssessmentRunRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_resultLocationBucket;
    bool m_resultLocationBucketHasBeenSet = false;

    Aws::String m_resultLocationFolder;
    bool m_resultLocationFolderHasBeenSet = false;

    Aws::String m_resultEncryptionMode;
    bool m_resultEncryptionModeHasBeenSet = false;

    Aws::String m_resultKmsKeyArn;
    bool m_resultKmsKeyArnHasBeenSet = false;

    Aws::String m_assessmentRunName;
    bool m_assessmentRunNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeOnly;
    bool m_includeOnlyHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclude;
    bool m_excludeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
