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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ServiceActionDefinitionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ServiceActionDefinitionKey.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API CreateServiceActionRequest : public ServiceCatalogRequest
  {
  public:
    CreateServiceActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceAction"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The self-service action name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The self-service action name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The self-service action name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The self-service action name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The self-service action name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The self-service action name.</p>
     */
    inline CreateServiceActionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The self-service action name.</p>
     */
    inline CreateServiceActionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The self-service action name.</p>
     */
    inline CreateServiceActionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The service action definition type. For example,
     * <code>SSM_AUTOMATION</code>.</p>
     */
    inline const ServiceActionDefinitionType& GetDefinitionType() const{ return m_definitionType; }

    /**
     * <p>The service action definition type. For example,
     * <code>SSM_AUTOMATION</code>.</p>
     */
    inline bool DefinitionTypeHasBeenSet() const { return m_definitionTypeHasBeenSet; }

    /**
     * <p>The service action definition type. For example,
     * <code>SSM_AUTOMATION</code>.</p>
     */
    inline void SetDefinitionType(const ServiceActionDefinitionType& value) { m_definitionTypeHasBeenSet = true; m_definitionType = value; }

    /**
     * <p>The service action definition type. For example,
     * <code>SSM_AUTOMATION</code>.</p>
     */
    inline void SetDefinitionType(ServiceActionDefinitionType&& value) { m_definitionTypeHasBeenSet = true; m_definitionType = std::move(value); }

    /**
     * <p>The service action definition type. For example,
     * <code>SSM_AUTOMATION</code>.</p>
     */
    inline CreateServiceActionRequest& WithDefinitionType(const ServiceActionDefinitionType& value) { SetDefinitionType(value); return *this;}

    /**
     * <p>The service action definition type. For example,
     * <code>SSM_AUTOMATION</code>.</p>
     */
    inline CreateServiceActionRequest& WithDefinitionType(ServiceActionDefinitionType&& value) { SetDefinitionType(std::move(value)); return *this;}


    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline const Aws::Map<ServiceActionDefinitionKey, Aws::String>& GetDefinition() const{ return m_definition; }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline void SetDefinition(const Aws::Map<ServiceActionDefinitionKey, Aws::String>& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline void SetDefinition(Aws::Map<ServiceActionDefinitionKey, Aws::String>&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline CreateServiceActionRequest& WithDefinition(const Aws::Map<ServiceActionDefinitionKey, Aws::String>& value) { SetDefinition(value); return *this;}

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline CreateServiceActionRequest& WithDefinition(Aws::Map<ServiceActionDefinitionKey, Aws::String>&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline CreateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.emplace(key, value); return *this; }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline CreateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, const Aws::String& value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), value); return *this; }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline CreateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline CreateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, Aws::String&& value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline CreateServiceActionRequest& AddDefinition(ServiceActionDefinitionKey&& key, const char* value) { m_definitionHasBeenSet = true; m_definition.emplace(std::move(key), value); return *this; }

    /**
     * <p>The self-service action definition. Can be one of the following:</p> <dl>
     * <dt>Name</dt> <dd> <p>The name of the AWS Systems Manager Document. For example,
     * <code>AWS-RestartEC2Instance</code>.</p> </dd> <dt>Version</dt> <dd> <p>The AWS
     * Systems Manager automation document version. For example, <code>"Version":
     * "1"</code> </p> </dd> <dt>AssumeRole</dt> <dd> <p>The Amazon Resource Name (ARN)
     * of the role that performs the self-service actions on your behalf. For example,
     * <code>"AssumeRole": "arn:aws:iam::12345678910:role/ActionRole"</code>.</p> <p>To
     * reuse the provisioned product launch role, set to <code>"AssumeRole":
     * "LAUNCH_ROLE"</code>.</p> </dd> <dt>Parameters</dt> <dd> <p>The list of
     * parameters in JSON format.</p> <p>For example:
     * <code>[{\"Name\":\"InstanceId\",\"Type\":\"TARGET\"}]</code>.</p> </dd> </dl>
     */
    inline CreateServiceActionRequest& AddDefinition(const ServiceActionDefinitionKey& key, const char* value) { m_definitionHasBeenSet = true; m_definition.emplace(key, value); return *this; }


    /**
     * <p>The self-service action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The self-service action description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The self-service action description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The self-service action description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The self-service action description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The self-service action description.</p>
     */
    inline CreateServiceActionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The self-service action description.</p>
     */
    inline CreateServiceActionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The self-service action description.</p>
     */
    inline CreateServiceActionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreateServiceActionRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreateServiceActionRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline CreateServiceActionRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreateServiceActionRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreateServiceActionRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that you provide to ensure idempotency. If multiple
     * requests differ only by the idempotency token, the same response is returned for
     * each repeated request.</p>
     */
    inline CreateServiceActionRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ServiceActionDefinitionType m_definitionType;
    bool m_definitionTypeHasBeenSet;

    Aws::Map<ServiceActionDefinitionKey, Aws::String> m_definition;
    bool m_definitionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
