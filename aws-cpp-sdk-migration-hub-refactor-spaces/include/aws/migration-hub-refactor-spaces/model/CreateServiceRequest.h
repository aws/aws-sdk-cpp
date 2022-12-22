/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceEndpointType.h>
#include <aws/migration-hub-refactor-spaces/model/LambdaEndpointInput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/UrlEndpointInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class CreateServiceRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the application which the service is created.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const{ return m_applicationIdentifier; }

    /**
     * <p>The ID of the application which the service is created.</p>
     */
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }

    /**
     * <p>The ID of the application which the service is created.</p>
     */
    inline void SetApplicationIdentifier(const Aws::String& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = value; }

    /**
     * <p>The ID of the application which the service is created.</p>
     */
    inline void SetApplicationIdentifier(Aws::String&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::move(value); }

    /**
     * <p>The ID of the application which the service is created.</p>
     */
    inline void SetApplicationIdentifier(const char* value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier.assign(value); }

    /**
     * <p>The ID of the application which the service is created.</p>
     */
    inline CreateServiceRequest& WithApplicationIdentifier(const Aws::String& value) { SetApplicationIdentifier(value); return *this;}

    /**
     * <p>The ID of the application which the service is created.</p>
     */
    inline CreateServiceRequest& WithApplicationIdentifier(Aws::String&& value) { SetApplicationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the application which the service is created.</p>
     */
    inline CreateServiceRequest& WithApplicationIdentifier(const char* value) { SetApplicationIdentifier(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateServiceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateServiceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateServiceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of the service.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the service.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the service.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the service.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the service.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the service.</p>
     */
    inline CreateServiceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the service.</p>
     */
    inline CreateServiceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the service.</p>
     */
    inline CreateServiceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of endpoint to use for the service. The type can be a URL in a VPC
     * or an Lambda function.</p>
     */
    inline const ServiceEndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint to use for the service. The type can be a URL in a VPC
     * or an Lambda function.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint to use for the service. The type can be a URL in a VPC
     * or an Lambda function.</p>
     */
    inline void SetEndpointType(const ServiceEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint to use for the service. The type can be a URL in a VPC
     * or an Lambda function.</p>
     */
    inline void SetEndpointType(ServiceEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint to use for the service. The type can be a URL in a VPC
     * or an Lambda function.</p>
     */
    inline CreateServiceRequest& WithEndpointType(const ServiceEndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint to use for the service. The type can be a URL in a VPC
     * or an Lambda function.</p>
     */
    inline CreateServiceRequest& WithEndpointType(ServiceEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The ID of the environment in which the service is created.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The ID of the environment in which the service is created.</p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The ID of the environment in which the service is created.</p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The ID of the environment in which the service is created.</p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The ID of the environment in which the service is created.</p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The ID of the environment in which the service is created.</p>
     */
    inline CreateServiceRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The ID of the environment in which the service is created.</p>
     */
    inline CreateServiceRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment in which the service is created.</p>
     */
    inline CreateServiceRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The configuration for the Lambda endpoint type.</p>
     */
    inline const LambdaEndpointInput& GetLambdaEndpoint() const{ return m_lambdaEndpoint; }

    /**
     * <p>The configuration for the Lambda endpoint type.</p>
     */
    inline bool LambdaEndpointHasBeenSet() const { return m_lambdaEndpointHasBeenSet; }

    /**
     * <p>The configuration for the Lambda endpoint type.</p>
     */
    inline void SetLambdaEndpoint(const LambdaEndpointInput& value) { m_lambdaEndpointHasBeenSet = true; m_lambdaEndpoint = value; }

    /**
     * <p>The configuration for the Lambda endpoint type.</p>
     */
    inline void SetLambdaEndpoint(LambdaEndpointInput&& value) { m_lambdaEndpointHasBeenSet = true; m_lambdaEndpoint = std::move(value); }

    /**
     * <p>The configuration for the Lambda endpoint type.</p>
     */
    inline CreateServiceRequest& WithLambdaEndpoint(const LambdaEndpointInput& value) { SetLambdaEndpoint(value); return *this;}

    /**
     * <p>The configuration for the Lambda endpoint type.</p>
     */
    inline CreateServiceRequest& WithLambdaEndpoint(LambdaEndpointInput&& value) { SetLambdaEndpoint(std::move(value)); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline CreateServiceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline CreateServiceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline CreateServiceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateServiceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The configuration for the URL endpoint type. When creating a route to a
     * service, Refactor Spaces automatically resolves the address in the
     * <code>UrlEndpointInput</code> object URL when the Domain Name System (DNS)
     * time-to-live (TTL) expires, or every 60 seconds for TTLs less than 60
     * seconds.</p>
     */
    inline const UrlEndpointInput& GetUrlEndpoint() const{ return m_urlEndpoint; }

    /**
     * <p>The configuration for the URL endpoint type. When creating a route to a
     * service, Refactor Spaces automatically resolves the address in the
     * <code>UrlEndpointInput</code> object URL when the Domain Name System (DNS)
     * time-to-live (TTL) expires, or every 60 seconds for TTLs less than 60
     * seconds.</p>
     */
    inline bool UrlEndpointHasBeenSet() const { return m_urlEndpointHasBeenSet; }

    /**
     * <p>The configuration for the URL endpoint type. When creating a route to a
     * service, Refactor Spaces automatically resolves the address in the
     * <code>UrlEndpointInput</code> object URL when the Domain Name System (DNS)
     * time-to-live (TTL) expires, or every 60 seconds for TTLs less than 60
     * seconds.</p>
     */
    inline void SetUrlEndpoint(const UrlEndpointInput& value) { m_urlEndpointHasBeenSet = true; m_urlEndpoint = value; }

    /**
     * <p>The configuration for the URL endpoint type. When creating a route to a
     * service, Refactor Spaces automatically resolves the address in the
     * <code>UrlEndpointInput</code> object URL when the Domain Name System (DNS)
     * time-to-live (TTL) expires, or every 60 seconds for TTLs less than 60
     * seconds.</p>
     */
    inline void SetUrlEndpoint(UrlEndpointInput&& value) { m_urlEndpointHasBeenSet = true; m_urlEndpoint = std::move(value); }

    /**
     * <p>The configuration for the URL endpoint type. When creating a route to a
     * service, Refactor Spaces automatically resolves the address in the
     * <code>UrlEndpointInput</code> object URL when the Domain Name System (DNS)
     * time-to-live (TTL) expires, or every 60 seconds for TTLs less than 60
     * seconds.</p>
     */
    inline CreateServiceRequest& WithUrlEndpoint(const UrlEndpointInput& value) { SetUrlEndpoint(value); return *this;}

    /**
     * <p>The configuration for the URL endpoint type. When creating a route to a
     * service, Refactor Spaces automatically resolves the address in the
     * <code>UrlEndpointInput</code> object URL when the Domain Name System (DNS)
     * time-to-live (TTL) expires, or every 60 seconds for TTLs less than 60
     * seconds.</p>
     */
    inline CreateServiceRequest& WithUrlEndpoint(UrlEndpointInput&& value) { SetUrlEndpoint(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateServiceRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateServiceRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateServiceRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ServiceEndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    LambdaEndpointInput m_lambdaEndpoint;
    bool m_lambdaEndpointHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    UrlEndpointInput m_urlEndpoint;
    bool m_urlEndpointHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
