/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/LambdaInvokeOperation.h>
#include <aws/s3control/model/S3CopyObjectOperation.h>
#include <aws/s3control/model/S3SetObjectAclOperation.h>
#include <aws/s3control/model/S3SetObjectTaggingOperation.h>
#include <aws/s3control/model/S3DeleteObjectTaggingOperation.h>
#include <aws/s3control/model/S3InitiateRestoreObjectOperation.h>
#include <aws/s3control/model/S3SetObjectLegalHoldOperation.h>
#include <aws/s3control/model/S3SetObjectRetentionOperation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>The operation that you want this job to perform on every object listed in the
   * manifest. For more information about the available operations, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Operations</a>
   * in the <i>Amazon Simple Storage Service User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobOperation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API JobOperation
  {
  public:
    JobOperation();
    JobOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    JobOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on every object in
     * the manifest.</p>
     */
    inline const LambdaInvokeOperation& GetLambdaInvoke() const{ return m_lambdaInvoke; }

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on every object in
     * the manifest.</p>
     */
    inline bool LambdaInvokeHasBeenSet() const { return m_lambdaInvokeHasBeenSet; }

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on every object in
     * the manifest.</p>
     */
    inline void SetLambdaInvoke(const LambdaInvokeOperation& value) { m_lambdaInvokeHasBeenSet = true; m_lambdaInvoke = value; }

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on every object in
     * the manifest.</p>
     */
    inline void SetLambdaInvoke(LambdaInvokeOperation&& value) { m_lambdaInvokeHasBeenSet = true; m_lambdaInvoke = std::move(value); }

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on every object in
     * the manifest.</p>
     */
    inline JobOperation& WithLambdaInvoke(const LambdaInvokeOperation& value) { SetLambdaInvoke(value); return *this;}

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on every object in
     * the manifest.</p>
     */
    inline JobOperation& WithLambdaInvoke(LambdaInvokeOperation&& value) { SetLambdaInvoke(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to run a PUT Copy object call on every object in
     * the manifest.</p>
     */
    inline const S3CopyObjectOperation& GetS3PutObjectCopy() const{ return m_s3PutObjectCopy; }

    /**
     * <p>Directs the specified job to run a PUT Copy object call on every object in
     * the manifest.</p>
     */
    inline bool S3PutObjectCopyHasBeenSet() const { return m_s3PutObjectCopyHasBeenSet; }

    /**
     * <p>Directs the specified job to run a PUT Copy object call on every object in
     * the manifest.</p>
     */
    inline void SetS3PutObjectCopy(const S3CopyObjectOperation& value) { m_s3PutObjectCopyHasBeenSet = true; m_s3PutObjectCopy = value; }

    /**
     * <p>Directs the specified job to run a PUT Copy object call on every object in
     * the manifest.</p>
     */
    inline void SetS3PutObjectCopy(S3CopyObjectOperation&& value) { m_s3PutObjectCopyHasBeenSet = true; m_s3PutObjectCopy = std::move(value); }

    /**
     * <p>Directs the specified job to run a PUT Copy object call on every object in
     * the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectCopy(const S3CopyObjectOperation& value) { SetS3PutObjectCopy(value); return *this;}

    /**
     * <p>Directs the specified job to run a PUT Copy object call on every object in
     * the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectCopy(S3CopyObjectOperation&& value) { SetS3PutObjectCopy(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to run a PUT Object acl call on every object in the
     * manifest.</p>
     */
    inline const S3SetObjectAclOperation& GetS3PutObjectAcl() const{ return m_s3PutObjectAcl; }

    /**
     * <p>Directs the specified job to run a PUT Object acl call on every object in the
     * manifest.</p>
     */
    inline bool S3PutObjectAclHasBeenSet() const { return m_s3PutObjectAclHasBeenSet; }

    /**
     * <p>Directs the specified job to run a PUT Object acl call on every object in the
     * manifest.</p>
     */
    inline void SetS3PutObjectAcl(const S3SetObjectAclOperation& value) { m_s3PutObjectAclHasBeenSet = true; m_s3PutObjectAcl = value; }

    /**
     * <p>Directs the specified job to run a PUT Object acl call on every object in the
     * manifest.</p>
     */
    inline void SetS3PutObjectAcl(S3SetObjectAclOperation&& value) { m_s3PutObjectAclHasBeenSet = true; m_s3PutObjectAcl = std::move(value); }

    /**
     * <p>Directs the specified job to run a PUT Object acl call on every object in the
     * manifest.</p>
     */
    inline JobOperation& WithS3PutObjectAcl(const S3SetObjectAclOperation& value) { SetS3PutObjectAcl(value); return *this;}

    /**
     * <p>Directs the specified job to run a PUT Object acl call on every object in the
     * manifest.</p>
     */
    inline JobOperation& WithS3PutObjectAcl(S3SetObjectAclOperation&& value) { SetS3PutObjectAcl(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to run a PUT Object tagging call on every object in
     * the manifest.</p>
     */
    inline const S3SetObjectTaggingOperation& GetS3PutObjectTagging() const{ return m_s3PutObjectTagging; }

    /**
     * <p>Directs the specified job to run a PUT Object tagging call on every object in
     * the manifest.</p>
     */
    inline bool S3PutObjectTaggingHasBeenSet() const { return m_s3PutObjectTaggingHasBeenSet; }

    /**
     * <p>Directs the specified job to run a PUT Object tagging call on every object in
     * the manifest.</p>
     */
    inline void SetS3PutObjectTagging(const S3SetObjectTaggingOperation& value) { m_s3PutObjectTaggingHasBeenSet = true; m_s3PutObjectTagging = value; }

    /**
     * <p>Directs the specified job to run a PUT Object tagging call on every object in
     * the manifest.</p>
     */
    inline void SetS3PutObjectTagging(S3SetObjectTaggingOperation&& value) { m_s3PutObjectTaggingHasBeenSet = true; m_s3PutObjectTagging = std::move(value); }

    /**
     * <p>Directs the specified job to run a PUT Object tagging call on every object in
     * the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectTagging(const S3SetObjectTaggingOperation& value) { SetS3PutObjectTagging(value); return *this;}

    /**
     * <p>Directs the specified job to run a PUT Object tagging call on every object in
     * the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectTagging(S3SetObjectTaggingOperation&& value) { SetS3PutObjectTagging(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to execute a DELETE Object tagging call on every
     * object in the manifest.</p>
     */
    inline const S3DeleteObjectTaggingOperation& GetS3DeleteObjectTagging() const{ return m_s3DeleteObjectTagging; }

    /**
     * <p>Directs the specified job to execute a DELETE Object tagging call on every
     * object in the manifest.</p>
     */
    inline bool S3DeleteObjectTaggingHasBeenSet() const { return m_s3DeleteObjectTaggingHasBeenSet; }

    /**
     * <p>Directs the specified job to execute a DELETE Object tagging call on every
     * object in the manifest.</p>
     */
    inline void SetS3DeleteObjectTagging(const S3DeleteObjectTaggingOperation& value) { m_s3DeleteObjectTaggingHasBeenSet = true; m_s3DeleteObjectTagging = value; }

    /**
     * <p>Directs the specified job to execute a DELETE Object tagging call on every
     * object in the manifest.</p>
     */
    inline void SetS3DeleteObjectTagging(S3DeleteObjectTaggingOperation&& value) { m_s3DeleteObjectTaggingHasBeenSet = true; m_s3DeleteObjectTagging = std::move(value); }

    /**
     * <p>Directs the specified job to execute a DELETE Object tagging call on every
     * object in the manifest.</p>
     */
    inline JobOperation& WithS3DeleteObjectTagging(const S3DeleteObjectTaggingOperation& value) { SetS3DeleteObjectTagging(value); return *this;}

    /**
     * <p>Directs the specified job to execute a DELETE Object tagging call on every
     * object in the manifest.</p>
     */
    inline JobOperation& WithS3DeleteObjectTagging(S3DeleteObjectTaggingOperation&& value) { SetS3DeleteObjectTagging(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to initiate restore requests for every archived
     * object in the manifest.</p>
     */
    inline const S3InitiateRestoreObjectOperation& GetS3InitiateRestoreObject() const{ return m_s3InitiateRestoreObject; }

    /**
     * <p>Directs the specified job to initiate restore requests for every archived
     * object in the manifest.</p>
     */
    inline bool S3InitiateRestoreObjectHasBeenSet() const { return m_s3InitiateRestoreObjectHasBeenSet; }

    /**
     * <p>Directs the specified job to initiate restore requests for every archived
     * object in the manifest.</p>
     */
    inline void SetS3InitiateRestoreObject(const S3InitiateRestoreObjectOperation& value) { m_s3InitiateRestoreObjectHasBeenSet = true; m_s3InitiateRestoreObject = value; }

    /**
     * <p>Directs the specified job to initiate restore requests for every archived
     * object in the manifest.</p>
     */
    inline void SetS3InitiateRestoreObject(S3InitiateRestoreObjectOperation&& value) { m_s3InitiateRestoreObjectHasBeenSet = true; m_s3InitiateRestoreObject = std::move(value); }

    /**
     * <p>Directs the specified job to initiate restore requests for every archived
     * object in the manifest.</p>
     */
    inline JobOperation& WithS3InitiateRestoreObject(const S3InitiateRestoreObjectOperation& value) { SetS3InitiateRestoreObject(value); return *this;}

    /**
     * <p>Directs the specified job to initiate restore requests for every archived
     * object in the manifest.</p>
     */
    inline JobOperation& WithS3InitiateRestoreObject(S3InitiateRestoreObjectOperation&& value) { SetS3InitiateRestoreObject(std::move(value)); return *this;}


    
    inline const S3SetObjectLegalHoldOperation& GetS3PutObjectLegalHold() const{ return m_s3PutObjectLegalHold; }

    
    inline bool S3PutObjectLegalHoldHasBeenSet() const { return m_s3PutObjectLegalHoldHasBeenSet; }

    
    inline void SetS3PutObjectLegalHold(const S3SetObjectLegalHoldOperation& value) { m_s3PutObjectLegalHoldHasBeenSet = true; m_s3PutObjectLegalHold = value; }

    
    inline void SetS3PutObjectLegalHold(S3SetObjectLegalHoldOperation&& value) { m_s3PutObjectLegalHoldHasBeenSet = true; m_s3PutObjectLegalHold = std::move(value); }

    
    inline JobOperation& WithS3PutObjectLegalHold(const S3SetObjectLegalHoldOperation& value) { SetS3PutObjectLegalHold(value); return *this;}

    
    inline JobOperation& WithS3PutObjectLegalHold(S3SetObjectLegalHoldOperation&& value) { SetS3PutObjectLegalHold(std::move(value)); return *this;}


    
    inline const S3SetObjectRetentionOperation& GetS3PutObjectRetention() const{ return m_s3PutObjectRetention; }

    
    inline bool S3PutObjectRetentionHasBeenSet() const { return m_s3PutObjectRetentionHasBeenSet; }

    
    inline void SetS3PutObjectRetention(const S3SetObjectRetentionOperation& value) { m_s3PutObjectRetentionHasBeenSet = true; m_s3PutObjectRetention = value; }

    
    inline void SetS3PutObjectRetention(S3SetObjectRetentionOperation&& value) { m_s3PutObjectRetentionHasBeenSet = true; m_s3PutObjectRetention = std::move(value); }

    
    inline JobOperation& WithS3PutObjectRetention(const S3SetObjectRetentionOperation& value) { SetS3PutObjectRetention(value); return *this;}

    
    inline JobOperation& WithS3PutObjectRetention(S3SetObjectRetentionOperation&& value) { SetS3PutObjectRetention(std::move(value)); return *this;}

  private:

    LambdaInvokeOperation m_lambdaInvoke;
    bool m_lambdaInvokeHasBeenSet;

    S3CopyObjectOperation m_s3PutObjectCopy;
    bool m_s3PutObjectCopyHasBeenSet;

    S3SetObjectAclOperation m_s3PutObjectAcl;
    bool m_s3PutObjectAclHasBeenSet;

    S3SetObjectTaggingOperation m_s3PutObjectTagging;
    bool m_s3PutObjectTaggingHasBeenSet;

    S3DeleteObjectTaggingOperation m_s3DeleteObjectTagging;
    bool m_s3DeleteObjectTaggingHasBeenSet;

    S3InitiateRestoreObjectOperation m_s3InitiateRestoreObject;
    bool m_s3InitiateRestoreObjectHasBeenSet;

    S3SetObjectLegalHoldOperation m_s3PutObjectLegalHold;
    bool m_s3PutObjectLegalHoldHasBeenSet;

    S3SetObjectRetentionOperation m_s3PutObjectRetention;
    bool m_s3PutObjectRetentionHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
