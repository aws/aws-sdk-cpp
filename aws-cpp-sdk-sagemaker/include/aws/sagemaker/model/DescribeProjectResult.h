/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ServiceCatalogProvisioningDetails.h>
#include <aws/sagemaker/model/ServiceCatalogProvisionedProductDetails.h>
#include <aws/sagemaker/model/ProjectStatus.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeProjectResult
  {
  public:
    AWS_SAGEMAKER_API DescribeProjectResult();
    AWS_SAGEMAKER_API DescribeProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline DescribeProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline DescribeProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline DescribeProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline DescribeProjectResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline DescribeProjectResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline DescribeProjectResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The ID of the project.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The ID of the project.</p>
     */
    inline DescribeProjectResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the project.</p>
     */
    inline DescribeProjectResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project.</p>
     */
    inline DescribeProjectResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The description of the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescription = value; }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescription = std::move(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline void SetProjectDescription(const char* value) { m_projectDescription.assign(value); }

    /**
     * <p>The description of the project.</p>
     */
    inline DescribeProjectResult& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline DescribeProjectResult& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the project.</p>
     */
    inline DescribeProjectResult& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}


    /**
     * <p>Information used to provision a service catalog product. For information, see
     * <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>.</p>
     */
    inline const ServiceCatalogProvisioningDetails& GetServiceCatalogProvisioningDetails() const{ return m_serviceCatalogProvisioningDetails; }

    /**
     * <p>Information used to provision a service catalog product. For information, see
     * <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>.</p>
     */
    inline void SetServiceCatalogProvisioningDetails(const ServiceCatalogProvisioningDetails& value) { m_serviceCatalogProvisioningDetails = value; }

    /**
     * <p>Information used to provision a service catalog product. For information, see
     * <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>.</p>
     */
    inline void SetServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetails&& value) { m_serviceCatalogProvisioningDetails = std::move(value); }

    /**
     * <p>Information used to provision a service catalog product. For information, see
     * <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>.</p>
     */
    inline DescribeProjectResult& WithServiceCatalogProvisioningDetails(const ServiceCatalogProvisioningDetails& value) { SetServiceCatalogProvisioningDetails(value); return *this;}

    /**
     * <p>Information used to provision a service catalog product. For information, see
     * <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>.</p>
     */
    inline DescribeProjectResult& WithServiceCatalogProvisioningDetails(ServiceCatalogProvisioningDetails&& value) { SetServiceCatalogProvisioningDetails(std::move(value)); return *this;}


    /**
     * <p>Information about a provisioned service catalog product.</p>
     */
    inline const ServiceCatalogProvisionedProductDetails& GetServiceCatalogProvisionedProductDetails() const{ return m_serviceCatalogProvisionedProductDetails; }

    /**
     * <p>Information about a provisioned service catalog product.</p>
     */
    inline void SetServiceCatalogProvisionedProductDetails(const ServiceCatalogProvisionedProductDetails& value) { m_serviceCatalogProvisionedProductDetails = value; }

    /**
     * <p>Information about a provisioned service catalog product.</p>
     */
    inline void SetServiceCatalogProvisionedProductDetails(ServiceCatalogProvisionedProductDetails&& value) { m_serviceCatalogProvisionedProductDetails = std::move(value); }

    /**
     * <p>Information about a provisioned service catalog product.</p>
     */
    inline DescribeProjectResult& WithServiceCatalogProvisionedProductDetails(const ServiceCatalogProvisionedProductDetails& value) { SetServiceCatalogProvisionedProductDetails(value); return *this;}

    /**
     * <p>Information about a provisioned service catalog product.</p>
     */
    inline DescribeProjectResult& WithServiceCatalogProvisionedProductDetails(ServiceCatalogProvisionedProductDetails&& value) { SetServiceCatalogProvisionedProductDetails(std::move(value)); return *this;}


    /**
     * <p>The status of the project.</p>
     */
    inline const ProjectStatus& GetProjectStatus() const{ return m_projectStatus; }

    /**
     * <p>The status of the project.</p>
     */
    inline void SetProjectStatus(const ProjectStatus& value) { m_projectStatus = value; }

    /**
     * <p>The status of the project.</p>
     */
    inline void SetProjectStatus(ProjectStatus&& value) { m_projectStatus = std::move(value); }

    /**
     * <p>The status of the project.</p>
     */
    inline DescribeProjectResult& WithProjectStatus(const ProjectStatus& value) { SetProjectStatus(value); return *this;}

    /**
     * <p>The status of the project.</p>
     */
    inline DescribeProjectResult& WithProjectStatus(ProjectStatus&& value) { SetProjectStatus(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }

    
    inline DescribeProjectResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline DescribeProjectResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The time when the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the project was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when the project was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when the project was created.</p>
     */
    inline DescribeProjectResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the project was created.</p>
     */
    inline DescribeProjectResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when project was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp when project was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The timestamp when project was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp when project was last modified.</p>
     */
    inline DescribeProjectResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp when project was last modified.</p>
     */
    inline DescribeProjectResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }

    
    inline DescribeProjectResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline DescribeProjectResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}

  private:

    Aws::String m_projectArn;

    Aws::String m_projectName;

    Aws::String m_projectId;

    Aws::String m_projectDescription;

    ServiceCatalogProvisioningDetails m_serviceCatalogProvisioningDetails;

    ServiceCatalogProvisionedProductDetails m_serviceCatalogProvisionedProductDetails;

    ProjectStatus m_projectStatus;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
