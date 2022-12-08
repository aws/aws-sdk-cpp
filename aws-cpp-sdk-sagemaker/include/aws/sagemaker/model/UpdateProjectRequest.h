/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ServiceCatalogProvisioningUpdateDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateProjectRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProject"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline UpdateProjectRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline UpdateProjectRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline UpdateProjectRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The description for the project.</p>
     */
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }

    /**
     * <p>The description for the project.</p>
     */
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }

    /**
     * <p>The description for the project.</p>
     */
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = value; }

    /**
     * <p>The description for the project.</p>
     */
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::move(value); }

    /**
     * <p>The description for the project.</p>
     */
    inline void SetProjectDescription(const char* value) { m_projectDescriptionHasBeenSet = true; m_projectDescription.assign(value); }

    /**
     * <p>The description for the project.</p>
     */
    inline UpdateProjectRequest& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}

    /**
     * <p>The description for the project.</p>
     */
    inline UpdateProjectRequest& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the project.</p>
     */
    inline UpdateProjectRequest& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}


    /**
     * <p>The product ID and provisioning artifact ID to provision a service catalog.
     * The provisioning artifact ID will default to the latest provisioning artifact ID
     * of the product, if you don't provide the provisioning artifact ID. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>. </p>
     */
    inline const ServiceCatalogProvisioningUpdateDetails& GetServiceCatalogProvisioningUpdateDetails() const{ return m_serviceCatalogProvisioningUpdateDetails; }

    /**
     * <p>The product ID and provisioning artifact ID to provision a service catalog.
     * The provisioning artifact ID will default to the latest provisioning artifact ID
     * of the product, if you don't provide the provisioning artifact ID. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>. </p>
     */
    inline bool ServiceCatalogProvisioningUpdateDetailsHasBeenSet() const { return m_serviceCatalogProvisioningUpdateDetailsHasBeenSet; }

    /**
     * <p>The product ID and provisioning artifact ID to provision a service catalog.
     * The provisioning artifact ID will default to the latest provisioning artifact ID
     * of the product, if you don't provide the provisioning artifact ID. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>. </p>
     */
    inline void SetServiceCatalogProvisioningUpdateDetails(const ServiceCatalogProvisioningUpdateDetails& value) { m_serviceCatalogProvisioningUpdateDetailsHasBeenSet = true; m_serviceCatalogProvisioningUpdateDetails = value; }

    /**
     * <p>The product ID and provisioning artifact ID to provision a service catalog.
     * The provisioning artifact ID will default to the latest provisioning artifact ID
     * of the product, if you don't provide the provisioning artifact ID. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>. </p>
     */
    inline void SetServiceCatalogProvisioningUpdateDetails(ServiceCatalogProvisioningUpdateDetails&& value) { m_serviceCatalogProvisioningUpdateDetailsHasBeenSet = true; m_serviceCatalogProvisioningUpdateDetails = std::move(value); }

    /**
     * <p>The product ID and provisioning artifact ID to provision a service catalog.
     * The provisioning artifact ID will default to the latest provisioning artifact ID
     * of the product, if you don't provide the provisioning artifact ID. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>. </p>
     */
    inline UpdateProjectRequest& WithServiceCatalogProvisioningUpdateDetails(const ServiceCatalogProvisioningUpdateDetails& value) { SetServiceCatalogProvisioningUpdateDetails(value); return *this;}

    /**
     * <p>The product ID and provisioning artifact ID to provision a service catalog.
     * The provisioning artifact ID will default to the latest provisioning artifact ID
     * of the product, if you don't provide the provisioning artifact ID. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/introduction.html">What
     * is Amazon Web Services Service Catalog</a>. </p>
     */
    inline UpdateProjectRequest& WithServiceCatalogProvisioningUpdateDetails(ServiceCatalogProvisioningUpdateDetails&& value) { SetServiceCatalogProvisioningUpdateDetails(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline UpdateProjectRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline UpdateProjectRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline UpdateProjectRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>. In addition, the project must have tag update
     * constraints set in order to include this parameter in the request. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/constraints-resourceupdate.html">Amazon
     * Web Services Service Catalog Tag Update Constraints</a>.</p>
     */
    inline UpdateProjectRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    ServiceCatalogProvisioningUpdateDetails m_serviceCatalogProvisioningUpdateDetails;
    bool m_serviceCatalogProvisioningUpdateDetailsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
