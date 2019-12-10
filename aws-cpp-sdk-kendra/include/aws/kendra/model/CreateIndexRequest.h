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
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ServerSideEncryptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AWS_KENDRA_API CreateIndexRequest : public KendraRequest
  {
  public:
    CreateIndexRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIndex"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the new index.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the new index.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the new index.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the new index.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the new index.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the new index.</p>
     */
    inline CreateIndexRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the new index.</p>
     */
    inline CreateIndexRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the new index.</p>
     */
    inline CreateIndexRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access your Amazon
     * CloudWatch logs and metrics. This is also the role used when you use the
     * <code>BatchPutDocument</code> operation to index documents from an Amazon S3
     * bucket.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access your Amazon
     * CloudWatch logs and metrics. This is also the role used when you use the
     * <code>BatchPutDocument</code> operation to index documents from an Amazon S3
     * bucket.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access your Amazon
     * CloudWatch logs and metrics. This is also the role used when you use the
     * <code>BatchPutDocument</code> operation to index documents from an Amazon S3
     * bucket.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access your Amazon
     * CloudWatch logs and metrics. This is also the role used when you use the
     * <code>BatchPutDocument</code> operation to index documents from an Amazon S3
     * bucket.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access your Amazon
     * CloudWatch logs and metrics. This is also the role used when you use the
     * <code>BatchPutDocument</code> operation to index documents from an Amazon S3
     * bucket.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access your Amazon
     * CloudWatch logs and metrics. This is also the role used when you use the
     * <code>BatchPutDocument</code> operation to index documents from an Amazon S3
     * bucket.</p>
     */
    inline CreateIndexRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access your Amazon
     * CloudWatch logs and metrics. This is also the role used when you use the
     * <code>BatchPutDocument</code> operation to index documents from an Amazon S3
     * bucket.</p>
     */
    inline CreateIndexRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role that gives Amazon Kendra permissions to access your Amazon
     * CloudWatch logs and metrics. This is also the role used when you use the
     * <code>BatchPutDocument</code> operation to index documents from an Amazon S3
     * bucket.</p>
     */
    inline CreateIndexRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline CreateIndexRequest& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The identifier of the AWS KMS customer managed key (CMK) to use to encrypt
     * data indexed by Amazon Kendra. Amazon Kendra doesn't support asymmetric
     * CMKs.</p>
     */
    inline CreateIndexRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description for the index.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the index.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the index.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the index.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the index.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the index.</p>
     */
    inline CreateIndexRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the index.</p>
     */
    inline CreateIndexRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the index.</p>
     */
    inline CreateIndexRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
