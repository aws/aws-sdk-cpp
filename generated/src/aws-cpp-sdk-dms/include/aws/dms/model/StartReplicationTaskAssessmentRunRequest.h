/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationTaskAssessmentRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReplicationTaskAssessmentRun"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the migration task associated with the
     * premigration assessment run that you want to start.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>ARN of the service role needed to start the assessment run. The role must
     * allow the <code>iam:PassRole</code> action.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline const Aws::String& GetResultLocationBucket() const{ return m_resultLocationBucket; }

    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline bool ResultLocationBucketHasBeenSet() const { return m_resultLocationBucketHasBeenSet; }

    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline void SetResultLocationBucket(const Aws::String& value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket = value; }

    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline void SetResultLocationBucket(Aws::String&& value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket = std::move(value); }

    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline void SetResultLocationBucket(const char* value) { m_resultLocationBucketHasBeenSet = true; m_resultLocationBucket.assign(value); }

    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultLocationBucket(const Aws::String& value) { SetResultLocationBucket(value); return *this;}

    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultLocationBucket(Aws::String&& value) { SetResultLocationBucket(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 bucket where you want DMS to store the results of this assessment
     * run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultLocationBucket(const char* value) { SetResultLocationBucket(value); return *this;}


    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline const Aws::String& GetResultLocationFolder() const{ return m_resultLocationFolder; }

    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline bool ResultLocationFolderHasBeenSet() const { return m_resultLocationFolderHasBeenSet; }

    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline void SetResultLocationFolder(const Aws::String& value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder = value; }

    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline void SetResultLocationFolder(Aws::String&& value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder = std::move(value); }

    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline void SetResultLocationFolder(const char* value) { m_resultLocationFolderHasBeenSet = true; m_resultLocationFolder.assign(value); }

    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultLocationFolder(const Aws::String& value) { SetResultLocationFolder(value); return *this;}

    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultLocationFolder(Aws::String&& value) { SetResultLocationFolder(std::move(value)); return *this;}

    /**
     * <p>Folder within an Amazon S3 bucket where you want DMS to store the results of
     * this assessment run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultLocationFolder(const char* value) { SetResultLocationFolder(value); return *this;}


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
    inline const Aws::String& GetResultEncryptionMode() const{ return m_resultEncryptionMode; }

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
    inline bool ResultEncryptionModeHasBeenSet() const { return m_resultEncryptionModeHasBeenSet; }

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
    inline void SetResultEncryptionMode(const Aws::String& value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode = value; }

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
    inline void SetResultEncryptionMode(Aws::String&& value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode = std::move(value); }

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
    inline void SetResultEncryptionMode(const char* value) { m_resultEncryptionModeHasBeenSet = true; m_resultEncryptionMode.assign(value); }

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
    inline StartReplicationTaskAssessmentRunRequest& WithResultEncryptionMode(const Aws::String& value) { SetResultEncryptionMode(value); return *this;}

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
    inline StartReplicationTaskAssessmentRunRequest& WithResultEncryptionMode(Aws::String&& value) { SetResultEncryptionMode(std::move(value)); return *this;}

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
    inline StartReplicationTaskAssessmentRunRequest& WithResultEncryptionMode(const char* value) { SetResultEncryptionMode(value); return *this;}


    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline const Aws::String& GetResultKmsKeyArn() const{ return m_resultKmsKeyArn; }

    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline bool ResultKmsKeyArnHasBeenSet() const { return m_resultKmsKeyArnHasBeenSet; }

    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline void SetResultKmsKeyArn(const Aws::String& value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn = value; }

    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline void SetResultKmsKeyArn(Aws::String&& value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn = std::move(value); }

    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline void SetResultKmsKeyArn(const char* value) { m_resultKmsKeyArnHasBeenSet = true; m_resultKmsKeyArn.assign(value); }

    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultKmsKeyArn(const Aws::String& value) { SetResultKmsKeyArn(value); return *this;}

    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultKmsKeyArn(Aws::String&& value) { SetResultKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a custom KMS encryption key that you specify when you set
     * <code>ResultEncryptionMode</code> to <code>"SSE_KMS</code>".</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithResultKmsKeyArn(const char* value) { SetResultKmsKeyArn(value); return *this;}


    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline const Aws::String& GetAssessmentRunName() const{ return m_assessmentRunName; }

    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline bool AssessmentRunNameHasBeenSet() const { return m_assessmentRunNameHasBeenSet; }

    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline void SetAssessmentRunName(const Aws::String& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = value; }

    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline void SetAssessmentRunName(Aws::String&& value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName = std::move(value); }

    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline void SetAssessmentRunName(const char* value) { m_assessmentRunNameHasBeenSet = true; m_assessmentRunName.assign(value); }

    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithAssessmentRunName(const Aws::String& value) { SetAssessmentRunName(value); return *this;}

    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithAssessmentRunName(Aws::String&& value) { SetAssessmentRunName(std::move(value)); return *this;}

    /**
     * <p>Unique name to identify the assessment run.</p>
     */
    inline StartReplicationTaskAssessmentRunRequest& WithAssessmentRunName(const char* value) { SetAssessmentRunName(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetIncludeOnly() const{ return m_includeOnly; }

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
    inline bool IncludeOnlyHasBeenSet() const { return m_includeOnlyHasBeenSet; }

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
    inline void SetIncludeOnly(const Aws::Vector<Aws::String>& value) { m_includeOnlyHasBeenSet = true; m_includeOnly = value; }

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
    inline void SetIncludeOnly(Aws::Vector<Aws::String>&& value) { m_includeOnlyHasBeenSet = true; m_includeOnly = std::move(value); }

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
    inline StartReplicationTaskAssessmentRunRequest& WithIncludeOnly(const Aws::Vector<Aws::String>& value) { SetIncludeOnly(value); return *this;}

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
    inline StartReplicationTaskAssessmentRunRequest& WithIncludeOnly(Aws::Vector<Aws::String>&& value) { SetIncludeOnly(std::move(value)); return *this;}

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
    inline StartReplicationTaskAssessmentRunRequest& AddIncludeOnly(const Aws::String& value) { m_includeOnlyHasBeenSet = true; m_includeOnly.push_back(value); return *this; }

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
    inline StartReplicationTaskAssessmentRunRequest& AddIncludeOnly(Aws::String&& value) { m_includeOnlyHasBeenSet = true; m_includeOnly.push_back(std::move(value)); return *this; }

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
    inline StartReplicationTaskAssessmentRunRequest& AddIncludeOnly(const char* value) { m_includeOnlyHasBeenSet = true; m_includeOnly.push_back(value); return *this; }


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
    inline const Aws::Vector<Aws::String>& GetExclude() const{ return m_exclude; }

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
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }

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
    inline void SetExclude(const Aws::Vector<Aws::String>& value) { m_excludeHasBeenSet = true; m_exclude = value; }

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
    inline void SetExclude(Aws::Vector<Aws::String>&& value) { m_excludeHasBeenSet = true; m_exclude = std::move(value); }

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
    inline StartReplicationTaskAssessmentRunRequest& WithExclude(const Aws::Vector<Aws::String>& value) { SetExclude(value); return *this;}

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
    inline StartReplicationTaskAssessmentRunRequest& WithExclude(Aws::Vector<Aws::String>&& value) { SetExclude(std::move(value)); return *this;}

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
    inline StartReplicationTaskAssessmentRunRequest& AddExclude(const Aws::String& value) { m_excludeHasBeenSet = true; m_exclude.push_back(value); return *this; }

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
    inline StartReplicationTaskAssessmentRunRequest& AddExclude(Aws::String&& value) { m_excludeHasBeenSet = true; m_exclude.push_back(std::move(value)); return *this; }

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
    inline StartReplicationTaskAssessmentRunRequest& AddExclude(const char* value) { m_excludeHasBeenSet = true; m_exclude.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
