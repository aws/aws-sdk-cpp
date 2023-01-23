/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{
  class CreateFleetAdvisorCollectorResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateFleetAdvisorCollectorResult();
    AWS_DATABASEMIGRATIONSERVICE_API CreateFleetAdvisorCollectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateFleetAdvisorCollectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the new Fleet Advisor collector, for example:
     * <code>22fda70c-40d5-4acf-b233-a495bd8eb7f5</code> </p>
     */
    inline const Aws::String& GetCollectorReferencedId() const{ return m_collectorReferencedId; }

    /**
     * <p>The unique ID of the new Fleet Advisor collector, for example:
     * <code>22fda70c-40d5-4acf-b233-a495bd8eb7f5</code> </p>
     */
    inline void SetCollectorReferencedId(const Aws::String& value) { m_collectorReferencedId = value; }

    /**
     * <p>The unique ID of the new Fleet Advisor collector, for example:
     * <code>22fda70c-40d5-4acf-b233-a495bd8eb7f5</code> </p>
     */
    inline void SetCollectorReferencedId(Aws::String&& value) { m_collectorReferencedId = std::move(value); }

    /**
     * <p>The unique ID of the new Fleet Advisor collector, for example:
     * <code>22fda70c-40d5-4acf-b233-a495bd8eb7f5</code> </p>
     */
    inline void SetCollectorReferencedId(const char* value) { m_collectorReferencedId.assign(value); }

    /**
     * <p>The unique ID of the new Fleet Advisor collector, for example:
     * <code>22fda70c-40d5-4acf-b233-a495bd8eb7f5</code> </p>
     */
    inline CreateFleetAdvisorCollectorResult& WithCollectorReferencedId(const Aws::String& value) { SetCollectorReferencedId(value); return *this;}

    /**
     * <p>The unique ID of the new Fleet Advisor collector, for example:
     * <code>22fda70c-40d5-4acf-b233-a495bd8eb7f5</code> </p>
     */
    inline CreateFleetAdvisorCollectorResult& WithCollectorReferencedId(Aws::String&& value) { SetCollectorReferencedId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the new Fleet Advisor collector, for example:
     * <code>22fda70c-40d5-4acf-b233-a495bd8eb7f5</code> </p>
     */
    inline CreateFleetAdvisorCollectorResult& WithCollectorReferencedId(const char* value) { SetCollectorReferencedId(value); return *this;}


    /**
     * <p>The name of the new Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetCollectorName() const{ return m_collectorName; }

    /**
     * <p>The name of the new Fleet Advisor collector.</p>
     */
    inline void SetCollectorName(const Aws::String& value) { m_collectorName = value; }

    /**
     * <p>The name of the new Fleet Advisor collector.</p>
     */
    inline void SetCollectorName(Aws::String&& value) { m_collectorName = std::move(value); }

    /**
     * <p>The name of the new Fleet Advisor collector.</p>
     */
    inline void SetCollectorName(const char* value) { m_collectorName.assign(value); }

    /**
     * <p>The name of the new Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithCollectorName(const Aws::String& value) { SetCollectorName(value); return *this;}

    /**
     * <p>The name of the new Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithCollectorName(Aws::String&& value) { SetCollectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the new Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithCollectorName(const char* value) { SetCollectorName(value); return *this;}


    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArn = value; }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArn.assign(value); }

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p>The Amazon S3 bucket that the collector uses to store inventory metadata.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The Amazon S3 bucket that the collector uses to store inventory metadata.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketName = value; }

    /**
     * <p>The Amazon S3 bucket that the collector uses to store inventory metadata.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketName = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that the collector uses to store inventory metadata.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketName.assign(value); }

    /**
     * <p>The Amazon S3 bucket that the collector uses to store inventory metadata.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that the collector uses to store inventory metadata.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that the collector uses to store inventory metadata.</p>
     */
    inline CreateFleetAdvisorCollectorResult& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}

  private:

    Aws::String m_collectorReferencedId;

    Aws::String m_collectorName;

    Aws::String m_description;

    Aws::String m_serviceAccessRoleArn;

    Aws::String m_s3BucketName;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
