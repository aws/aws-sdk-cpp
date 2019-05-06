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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to add a new <a>Model</a> to an existing <a>RestApi</a>
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateModelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateModelRequest : public APIGatewayRequest
  {
  public:
    CreateModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModel"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The <a>RestApi</a> identifier under which the <a>Model</a> will be
     * created.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The <a>RestApi</a> identifier under which the <a>Model</a> will be
     * created.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>[Required] The <a>RestApi</a> identifier under which the <a>Model</a> will be
     * created.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The <a>RestApi</a> identifier under which the <a>Model</a> will be
     * created.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The <a>RestApi</a> identifier under which the <a>Model</a> will be
     * created.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The <a>RestApi</a> identifier under which the <a>Model</a> will be
     * created.</p>
     */
    inline CreateModelRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The <a>RestApi</a> identifier under which the <a>Model</a> will be
     * created.</p>
     */
    inline CreateModelRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The <a>RestApi</a> identifier under which the <a>Model</a> will be
     * created.</p>
     */
    inline CreateModelRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] The name of the model. Must be alphanumeric.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>[Required] The name of the model. Must be alphanumeric.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>[Required] The name of the model. Must be alphanumeric.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>[Required] The name of the model. Must be alphanumeric.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>[Required] The name of the model. Must be alphanumeric.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>[Required] The name of the model. Must be alphanumeric.</p>
     */
    inline CreateModelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>[Required] The name of the model. Must be alphanumeric.</p>
     */
    inline CreateModelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>[Required] The name of the model. Must be alphanumeric.</p>
     */
    inline CreateModelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the model.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the model.</p>
     */
    inline CreateModelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline CreateModelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline CreateModelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model.</p>
     */
    inline CreateModelRequest& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model.</p>
     */
    inline CreateModelRequest& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="https://tools.ietf.org/html/draft-zyp-json-schema-04"
     * target="_blank">JSON schema draft 4</a> model.</p>
     */
    inline CreateModelRequest& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>[Required] The content-type for the model.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>[Required] The content-type for the model.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>[Required] The content-type for the model.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>[Required] The content-type for the model.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>[Required] The content-type for the model.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>[Required] The content-type for the model.</p>
     */
    inline CreateModelRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>[Required] The content-type for the model.</p>
     */
    inline CreateModelRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>[Required] The content-type for the model.</p>
     */
    inline CreateModelRequest& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_schema;
    bool m_schemaHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
