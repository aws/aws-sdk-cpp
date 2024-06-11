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


    ///@{
    /**
     * <p>The name of your Fleet Advisor collector (for example,
     * <code>sample-collector</code>).</p>
     */
    inline const Aws::String& GetCollectorName() const{ return m_collectorName; }
    inline bool CollectorNameHasBeenSet() const { return m_collectorNameHasBeenSet; }
    inline void SetCollectorName(const Aws::String& value) { m_collectorNameHasBeenSet = true; m_collectorName = value; }
    inline void SetCollectorName(Aws::String&& value) { m_collectorNameHasBeenSet = true; m_collectorName = std::move(value); }
    inline void SetCollectorName(const char* value) { m_collectorNameHasBeenSet = true; m_collectorName.assign(value); }
    inline CreateFleetAdvisorCollectorRequest& WithCollectorName(const Aws::String& value) { SetCollectorName(value); return *this;}
    inline CreateFleetAdvisorCollectorRequest& WithCollectorName(Aws::String&& value) { SetCollectorName(std::move(value)); return *this;}
    inline CreateFleetAdvisorCollectorRequest& WithCollectorName(const char* value) { SetCollectorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary description of your Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateFleetAdvisorCollectorRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateFleetAdvisorCollectorRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateFleetAdvisorCollectorRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }
    inline CreateFleetAdvisorCollectorRequest& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}
    inline CreateFleetAdvisorCollectorRequest& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}
    inline CreateFleetAdvisorCollectorRequest& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket that the Fleet Advisor collector uses to store inventory
     * metadata.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline CreateFleetAdvisorCollectorRequest& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline CreateFleetAdvisorCollectorRequest& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline CreateFleetAdvisorCollectorRequest& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}
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
