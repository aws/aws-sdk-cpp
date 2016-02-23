/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents the structure of a request or response payload for a method.</p>
   */
  class AWS_APIGATEWAY_API Model
  {
  public:
    Model();
    Model(const Aws::Utils::Json::JsonValue& jsonValue);
    Model& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline Model& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline Model& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the model resource.</p>
     */
    inline Model& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline Model& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the model.</p>
     */
    inline Model& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline Model& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline Model& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="http://json-schema.org/documentation.html"
     * target="_blank">JSON-schema draft v4</a> model.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="http://json-schema.org/documentation.html"
     * target="_blank">JSON-schema draft v4</a> model.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="http://json-schema.org/documentation.html"
     * target="_blank">JSON-schema draft v4</a> model.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="http://json-schema.org/documentation.html"
     * target="_blank">JSON-schema draft v4</a> model.</p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="http://json-schema.org/documentation.html"
     * target="_blank">JSON-schema draft v4</a> model.</p>
     */
    inline Model& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="http://json-schema.org/documentation.html"
     * target="_blank">JSON-schema draft v4</a> model.</p>
     */
    inline Model& WithSchema(Aws::String&& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema for the model. For <code>application/json</code> models, this
     * should be <a href="http://json-schema.org/documentation.html"
     * target="_blank">JSON-schema draft v4</a> model.</p>
     */
    inline Model& WithSchema(const char* value) { SetSchema(value); return *this;}

    /**
     * <p>The content-type for the model.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content-type for the model.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content-type for the model.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content-type for the model.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The content-type for the model.</p>
     */
    inline Model& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content-type for the model.</p>
     */
    inline Model& WithContentType(Aws::String&& value) { SetContentType(value); return *this;}

    /**
     * <p>The content-type for the model.</p>
     */
    inline Model& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
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
