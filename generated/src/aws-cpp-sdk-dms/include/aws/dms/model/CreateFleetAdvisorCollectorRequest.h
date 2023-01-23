/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class CreateFleetAdvisorCollectorRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateFleetAdvisorCollectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleetAdvisorCollector"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline const Aws::String& GetCollectorName() const{ return m_collectorName; }

    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline bool CollectorNameHasBeenSet() const { return m_collectorNameHasBeenSet; }

    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline void SetCollectorName(const Aws::String& value) { m_collectorNameHasBeenSet = true; m_collectorName = value; }

    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline void SetCollectorName(Aws::String&& value) { m_collectorNameHasBeenSet = true; m_collectorName = std::move(value); }

    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline void SetCollectorName(const char* value) { m_collectorNameHasBeenSet = true; m_collectorName.assign(value); }

    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithCollectorName(const Aws::String& value) { SetCollectorName(value); return *this;}

    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithCollectorName(Aws::String&& value) { SetCollectorName(std::move(value)); return *this;}

    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithCollectorName(const char* value) { SetCollectorName(value); return *this;}


    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline CreateFleetAdvisorCollectorRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}

  private:

    Aws::String m_collectorName;
    bool m_collectorNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
