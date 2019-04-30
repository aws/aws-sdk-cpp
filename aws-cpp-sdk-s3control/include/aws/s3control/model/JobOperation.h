/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/LambdaInvokeOperation.h>
#include <aws/s3control/model/S3CopyObjectOperation.h>
#include <aws/s3control/model/S3SetObjectAclOperation.h>
#include <aws/s3control/model/S3SetObjectTaggingOperation.h>
#include <aws/s3control/model/S3InitiateRestoreObjectOperation.h>
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
   * <p>The operation that you want this job to perform on each object listed in the
   * manifest. For more information about the available operations, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-operations.html">Available
   * Operations</a> in the <i>Amazon Simple Storage Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
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
     * <p>Directs the specified job to invoke an AWS Lambda function on each object in
     * the manifest.</p>
     */
    inline const LambdaInvokeOperation& GetLambdaInvoke() const{ return m_lambdaInvoke; }

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on each object in
     * the manifest.</p>
     */
    inline bool LambdaInvokeHasBeenSet() const { return m_lambdaInvokeHasBeenSet; }

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on each object in
     * the manifest.</p>
     */
    inline void SetLambdaInvoke(const LambdaInvokeOperation& value) { m_lambdaInvokeHasBeenSet = true; m_lambdaInvoke = value; }

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on each object in
     * the manifest.</p>
     */
    inline void SetLambdaInvoke(LambdaInvokeOperation&& value) { m_lambdaInvokeHasBeenSet = true; m_lambdaInvoke = std::move(value); }

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on each object in
     * the manifest.</p>
     */
    inline JobOperation& WithLambdaInvoke(const LambdaInvokeOperation& value) { SetLambdaInvoke(value); return *this;}

    /**
     * <p>Directs the specified job to invoke an AWS Lambda function on each object in
     * the manifest.</p>
     */
    inline JobOperation& WithLambdaInvoke(LambdaInvokeOperation&& value) { SetLambdaInvoke(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to execute a PUT Copy object call on each object in
     * the manifest.</p>
     */
    inline const S3CopyObjectOperation& GetS3PutObjectCopy() const{ return m_s3PutObjectCopy; }

    /**
     * <p>Directs the specified job to execute a PUT Copy object call on each object in
     * the manifest.</p>
     */
    inline bool S3PutObjectCopyHasBeenSet() const { return m_s3PutObjectCopyHasBeenSet; }

    /**
     * <p>Directs the specified job to execute a PUT Copy object call on each object in
     * the manifest.</p>
     */
    inline void SetS3PutObjectCopy(const S3CopyObjectOperation& value) { m_s3PutObjectCopyHasBeenSet = true; m_s3PutObjectCopy = value; }

    /**
     * <p>Directs the specified job to execute a PUT Copy object call on each object in
     * the manifest.</p>
     */
    inline void SetS3PutObjectCopy(S3CopyObjectOperation&& value) { m_s3PutObjectCopyHasBeenSet = true; m_s3PutObjectCopy = std::move(value); }

    /**
     * <p>Directs the specified job to execute a PUT Copy object call on each object in
     * the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectCopy(const S3CopyObjectOperation& value) { SetS3PutObjectCopy(value); return *this;}

    /**
     * <p>Directs the specified job to execute a PUT Copy object call on each object in
     * the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectCopy(S3CopyObjectOperation&& value) { SetS3PutObjectCopy(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to execute a PUT Object acl call on each object in
     * the manifest.</p>
     */
    inline const S3SetObjectAclOperation& GetS3PutObjectAcl() const{ return m_s3PutObjectAcl; }

    /**
     * <p>Directs the specified job to execute a PUT Object acl call on each object in
     * the manifest.</p>
     */
    inline bool S3PutObjectAclHasBeenSet() const { return m_s3PutObjectAclHasBeenSet; }

    /**
     * <p>Directs the specified job to execute a PUT Object acl call on each object in
     * the manifest.</p>
     */
    inline void SetS3PutObjectAcl(const S3SetObjectAclOperation& value) { m_s3PutObjectAclHasBeenSet = true; m_s3PutObjectAcl = value; }

    /**
     * <p>Directs the specified job to execute a PUT Object acl call on each object in
     * the manifest.</p>
     */
    inline void SetS3PutObjectAcl(S3SetObjectAclOperation&& value) { m_s3PutObjectAclHasBeenSet = true; m_s3PutObjectAcl = std::move(value); }

    /**
     * <p>Directs the specified job to execute a PUT Object acl call on each object in
     * the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectAcl(const S3SetObjectAclOperation& value) { SetS3PutObjectAcl(value); return *this;}

    /**
     * <p>Directs the specified job to execute a PUT Object acl call on each object in
     * the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectAcl(S3SetObjectAclOperation&& value) { SetS3PutObjectAcl(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to execute a PUT Object tagging call on each object
     * in the manifest.</p>
     */
    inline const S3SetObjectTaggingOperation& GetS3PutObjectTagging() const{ return m_s3PutObjectTagging; }

    /**
     * <p>Directs the specified job to execute a PUT Object tagging call on each object
     * in the manifest.</p>
     */
    inline bool S3PutObjectTaggingHasBeenSet() const { return m_s3PutObjectTaggingHasBeenSet; }

    /**
     * <p>Directs the specified job to execute a PUT Object tagging call on each object
     * in the manifest.</p>
     */
    inline void SetS3PutObjectTagging(const S3SetObjectTaggingOperation& value) { m_s3PutObjectTaggingHasBeenSet = true; m_s3PutObjectTagging = value; }

    /**
     * <p>Directs the specified job to execute a PUT Object tagging call on each object
     * in the manifest.</p>
     */
    inline void SetS3PutObjectTagging(S3SetObjectTaggingOperation&& value) { m_s3PutObjectTaggingHasBeenSet = true; m_s3PutObjectTagging = std::move(value); }

    /**
     * <p>Directs the specified job to execute a PUT Object tagging call on each object
     * in the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectTagging(const S3SetObjectTaggingOperation& value) { SetS3PutObjectTagging(value); return *this;}

    /**
     * <p>Directs the specified job to execute a PUT Object tagging call on each object
     * in the manifest.</p>
     */
    inline JobOperation& WithS3PutObjectTagging(S3SetObjectTaggingOperation&& value) { SetS3PutObjectTagging(std::move(value)); return *this;}


    /**
     * <p>Directs the specified job to execute an Initiate Glacier Restore call on each
     * object in the manifest.</p>
     */
    inline const S3InitiateRestoreObjectOperation& GetS3InitiateRestoreObject() const{ return m_s3InitiateRestoreObject; }

    /**
     * <p>Directs the specified job to execute an Initiate Glacier Restore call on each
     * object in the manifest.</p>
     */
    inline bool S3InitiateRestoreObjectHasBeenSet() const { return m_s3InitiateRestoreObjectHasBeenSet; }

    /**
     * <p>Directs the specified job to execute an Initiate Glacier Restore call on each
     * object in the manifest.</p>
     */
    inline void SetS3InitiateRestoreObject(const S3InitiateRestoreObjectOperation& value) { m_s3InitiateRestoreObjectHasBeenSet = true; m_s3InitiateRestoreObject = value; }

    /**
     * <p>Directs the specified job to execute an Initiate Glacier Restore call on each
     * object in the manifest.</p>
     */
    inline void SetS3InitiateRestoreObject(S3InitiateRestoreObjectOperation&& value) { m_s3InitiateRestoreObjectHasBeenSet = true; m_s3InitiateRestoreObject = std::move(value); }

    /**
     * <p>Directs the specified job to execute an Initiate Glacier Restore call on each
     * object in the manifest.</p>
     */
    inline JobOperation& WithS3InitiateRestoreObject(const S3InitiateRestoreObjectOperation& value) { SetS3InitiateRestoreObject(value); return *this;}

    /**
     * <p>Directs the specified job to execute an Initiate Glacier Restore call on each
     * object in the manifest.</p>
     */
    inline JobOperation& WithS3InitiateRestoreObject(S3InitiateRestoreObjectOperation&& value) { SetS3InitiateRestoreObject(std::move(value)); return *this;}

  private:

    LambdaInvokeOperation m_lambdaInvoke;
    bool m_lambdaInvokeHasBeenSet;

    S3CopyObjectOperation m_s3PutObjectCopy;
    bool m_s3PutObjectCopyHasBeenSet;

    S3SetObjectAclOperation m_s3PutObjectAcl;
    bool m_s3PutObjectAclHasBeenSet;

    S3SetObjectTaggingOperation m_s3PutObjectTagging;
    bool m_s3PutObjectTaggingHasBeenSet;

    S3InitiateRestoreObjectOperation m_s3InitiateRestoreObject;
    bool m_s3InitiateRestoreObjectHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
