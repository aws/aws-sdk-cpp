﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceEndpointType.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/migration-hub-refactor-spaces/model/LambdaEndpointConfig.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/UrlEndpointConfig.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class AWS_MIGRATIONHUBREFACTORSPACES_API GetServiceResult
  {
  public:
    GetServiceResult();
    GetServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline GetServiceResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline GetServiceResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline GetServiceResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline GetServiceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline GetServiceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline GetServiceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the service creator.</p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the service creator.</p>
     */
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the service creator.</p>
     */
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the service creator.</p>
     */
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the service creator.</p>
     */
    inline GetServiceResult& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service creator.</p>
     */
    inline GetServiceResult& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service creator.</p>
     */
    inline GetServiceResult& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}


    /**
     * <p>The timestamp of when the service is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp of when the service is created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The timestamp of when the service is created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The timestamp of when the service is created.</p>
     */
    inline GetServiceResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp of when the service is created.</p>
     */
    inline GetServiceResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The description of the service. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the service. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the service. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the service. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the service. </p>
     */
    inline GetServiceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the service. </p>
     */
    inline GetServiceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the service. </p>
     */
    inline GetServiceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The endpoint type of the service.</p>
     */
    inline const ServiceEndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The endpoint type of the service.</p>
     */
    inline void SetEndpointType(const ServiceEndpointType& value) { m_endpointType = value; }

    /**
     * <p>The endpoint type of the service.</p>
     */
    inline void SetEndpointType(ServiceEndpointType&& value) { m_endpointType = std::move(value); }

    /**
     * <p>The endpoint type of the service.</p>
     */
    inline GetServiceResult& WithEndpointType(const ServiceEndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The endpoint type of the service.</p>
     */
    inline GetServiceResult& WithEndpointType(ServiceEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline GetServiceResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline GetServiceResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the environment.</p>
     */
    inline GetServiceResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline void SetError(const ErrorResponse& value) { m_error = value; }

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline void SetError(ErrorResponse&& value) { m_error = std::move(value); }

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline GetServiceResult& WithError(const ErrorResponse& value) { SetError(value); return *this;}

    /**
     * <p>Any error associated with the service resource. </p>
     */
    inline GetServiceResult& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The configuration for the Lambda endpoint type.</p> <p>The <b>Arn</b> is the
     * Amazon Resource Name (ARN) of the Lambda function associated with this service.
     * </p>
     */
    inline const LambdaEndpointConfig& GetLambdaEndpoint() const{ return m_lambdaEndpoint; }

    /**
     * <p>The configuration for the Lambda endpoint type.</p> <p>The <b>Arn</b> is the
     * Amazon Resource Name (ARN) of the Lambda function associated with this service.
     * </p>
     */
    inline void SetLambdaEndpoint(const LambdaEndpointConfig& value) { m_lambdaEndpoint = value; }

    /**
     * <p>The configuration for the Lambda endpoint type.</p> <p>The <b>Arn</b> is the
     * Amazon Resource Name (ARN) of the Lambda function associated with this service.
     * </p>
     */
    inline void SetLambdaEndpoint(LambdaEndpointConfig&& value) { m_lambdaEndpoint = std::move(value); }

    /**
     * <p>The configuration for the Lambda endpoint type.</p> <p>The <b>Arn</b> is the
     * Amazon Resource Name (ARN) of the Lambda function associated with this service.
     * </p>
     */
    inline GetServiceResult& WithLambdaEndpoint(const LambdaEndpointConfig& value) { SetLambdaEndpoint(value); return *this;}

    /**
     * <p>The configuration for the Lambda endpoint type.</p> <p>The <b>Arn</b> is the
     * Amazon Resource Name (ARN) of the Lambda function associated with this service.
     * </p>
     */
    inline GetServiceResult& WithLambdaEndpoint(LambdaEndpointConfig&& value) { SetLambdaEndpoint(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline GetServiceResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the service was last updated. </p>
     */
    inline GetServiceResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline GetServiceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline GetServiceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline GetServiceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline GetServiceResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline GetServiceResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline GetServiceResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The unique identifier of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceId = value; }

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceId = std::move(value); }

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceId.assign(value); }

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline GetServiceResult& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline GetServiceResult& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the service.</p>
     */
    inline GetServiceResult& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The current state of the service. </p>
     */
    inline const ServiceState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the service. </p>
     */
    inline void SetState(const ServiceState& value) { m_state = value; }

    /**
     * <p>The current state of the service. </p>
     */
    inline void SetState(ServiceState&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the service. </p>
     */
    inline GetServiceResult& WithState(const ServiceState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the service. </p>
     */
    inline GetServiceResult& WithState(ServiceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the service. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair. </p>
     */
    inline GetServiceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The configuration for the URL endpoint type.</p> <p>The <b>Url</b> isthe URL
     * of the endpoint type.</p> <p>The <b>HealthUrl</b> is the health check URL of the
     * endpoint type. </p>
     */
    inline const UrlEndpointConfig& GetUrlEndpoint() const{ return m_urlEndpoint; }

    /**
     * <p>The configuration for the URL endpoint type.</p> <p>The <b>Url</b> isthe URL
     * of the endpoint type.</p> <p>The <b>HealthUrl</b> is the health check URL of the
     * endpoint type. </p>
     */
    inline void SetUrlEndpoint(const UrlEndpointConfig& value) { m_urlEndpoint = value; }

    /**
     * <p>The configuration for the URL endpoint type.</p> <p>The <b>Url</b> isthe URL
     * of the endpoint type.</p> <p>The <b>HealthUrl</b> is the health check URL of the
     * endpoint type. </p>
     */
    inline void SetUrlEndpoint(UrlEndpointConfig&& value) { m_urlEndpoint = std::move(value); }

    /**
     * <p>The configuration for the URL endpoint type.</p> <p>The <b>Url</b> isthe URL
     * of the endpoint type.</p> <p>The <b>HealthUrl</b> is the health check URL of the
     * endpoint type. </p>
     */
    inline GetServiceResult& WithUrlEndpoint(const UrlEndpointConfig& value) { SetUrlEndpoint(value); return *this;}

    /**
     * <p>The configuration for the URL endpoint type.</p> <p>The <b>Url</b> isthe URL
     * of the endpoint type.</p> <p>The <b>HealthUrl</b> is the health check URL of the
     * endpoint type. </p>
     */
    inline GetServiceResult& WithUrlEndpoint(UrlEndpointConfig&& value) { SetUrlEndpoint(std::move(value)); return *this;}


    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcId = value; }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcId = std::move(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline void SetVpcId(const char* value) { m_vpcId.assign(value); }

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline GetServiceResult& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline GetServiceResult& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private cloud (VPC). </p>
     */
    inline GetServiceResult& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::String m_applicationId;

    Aws::String m_arn;

    Aws::String m_createdByAccountId;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_description;

    ServiceEndpointType m_endpointType;

    Aws::String m_environmentId;

    ErrorResponse m_error;

    LambdaEndpointConfig m_lambdaEndpoint;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_name;

    Aws::String m_ownerAccountId;

    Aws::String m_serviceId;

    ServiceState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    UrlEndpointConfig m_urlEndpoint;

    Aws::String m_vpcId;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
