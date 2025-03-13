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
    AWS_DATABASEMIGRATIONSERVICE_API CreateFleetAdvisorCollectorResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API CreateFleetAdvisorCollectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateFleetAdvisorCollectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the new Fleet Advisor collector, for example:
     * <code>22fda70c-40d5-4acf-b233-a495bd8eb7f5</code> </p>
     */
    inline const Aws::String& GetCollectorReferencedId() const { return m_collectorReferencedId; }
    template<typename CollectorReferencedIdT = Aws::String>
    void SetCollectorReferencedId(CollectorReferencedIdT&& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = std::forward<CollectorReferencedIdT>(value); }
    template<typename CollectorReferencedIdT = Aws::String>
    CreateFleetAdvisorCollectorResult& WithCollectorReferencedId(CollectorReferencedIdT&& value) { SetCollectorReferencedId(std::forward<CollectorReferencedIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetCollectorName() const { return m_collectorName; }
    template<typename CollectorNameT = Aws::String>
    void SetCollectorName(CollectorNameT&& value) { m_collectorNameHasBeenSet = true; m_collectorName = std::forward<CollectorNameT>(value); }
    template<typename CollectorNameT = Aws::String>
    CreateFleetAdvisorCollectorResult& WithCollectorName(CollectorNameT&& value) { SetCollectorName(std::forward<CollectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary description of the Fleet Advisor collector.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFleetAdvisorCollectorResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that grants permissions to access the specified Amazon S3
     * bucket.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const { return m_serviceAccessRoleArn; }
    template<typename ServiceAccessRoleArnT = Aws::String>
    void SetServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::forward<ServiceAccessRoleArnT>(value); }
    template<typename ServiceAccessRoleArnT = Aws::String>
    CreateFleetAdvisorCollectorResult& WithServiceAccessRoleArn(ServiceAccessRoleArnT&& value) { SetServiceAccessRoleArn(std::forward<ServiceAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket that the collector uses to store inventory metadata.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    CreateFleetAdvisorCollectorResult& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateFleetAdvisorCollectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectorReferencedId;
    bool m_collectorReferencedIdHasBeenSet = false;

    Aws::String m_collectorName;
    bool m_collectorNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
