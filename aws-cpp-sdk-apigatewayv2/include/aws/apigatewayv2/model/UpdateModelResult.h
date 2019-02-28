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
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class AWS_APIGATEWAYV2_API UpdateModelResult
  {
  public:
    UpdateModelResult();
    UpdateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The content-type for the model, for example, "application/json".</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content-type for the model, for example, "application/json".</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content-type for the model, for example, "application/json".</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content-type for the model, for example, "application/json".</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content-type for the model, for example, "application/json".</p>
     */
    inline UpdateModelResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content-type for the model, for example, "application/json".</p>
     */
    inline UpdateModelResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content-type for the model, for example, "application/json".</p>
     */
    inline UpdateModelResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>The description of the model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the model.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the model.</p>
     */
    inline UpdateModelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline UpdateModelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the model.</p>
     */
    inline UpdateModelResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The model identifier.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The model identifier.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelId = value; }

    /**
     * <p>The model identifier.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelId = std::move(value); }

    /**
     * <p>The model identifier.</p>
     */
    inline void SetModelId(const char* value) { m_modelId.assign(value); }

    /**
     * <p>The model identifier.</p>
     */
    inline UpdateModelResult& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The model identifier.</p>
     */
    inline UpdateModelResult& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The model identifier.</p>
     */
    inline UpdateModelResult& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The name of the model. Must be alphanumeric.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the model. Must be alphanumeric.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the model. Must be alphanumeric.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the model. Must be alphanumeric.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the model. Must be alphanumeric.</p>
     */
    inline UpdateModelResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the model. Must be alphanumeric.</p>
     */
    inline UpdateModelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the model. Must be alphanumeric.</p>
     */
    inline UpdateModelResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The schema for the model. For application/json models, this should be JSON
     * schema
 draft 4 model.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema for the model. For application/json models, this should be JSON
     * schema
 draft 4 model.</p>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>The schema for the model. For application/json models, this should be JSON
     * schema
 draft 4 model.</p>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>The schema for the model. For application/json models, this should be JSON
     * schema
 draft 4 model.</p>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>The schema for the model. For application/json models, this should be JSON
     * schema
 draft 4 model.</p>
     */
    inline UpdateModelResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema for the model. For application/json models, this should be JSON
     * schema
 draft 4 model.</p>
     */
    inline UpdateModelResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema for the model. For application/json models, this should be JSON
     * schema
 draft 4 model.</p>
     */
    inline UpdateModelResult& WithSchema(const char* value) { SetSchema(value); return *this;}

  private:

    Aws::String m_contentType;

    Aws::String m_description;

    Aws::String m_modelId;

    Aws::String m_name;

    Aws::String m_schema;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
