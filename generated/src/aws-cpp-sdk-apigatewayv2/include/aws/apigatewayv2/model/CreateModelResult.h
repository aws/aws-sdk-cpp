/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateModelResult
  {
  public:
    AWS_APIGATEWAYV2_API CreateModelResult();
    AWS_APIGATEWAYV2_API CreateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API CreateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The content-type for the model, for example, "application/json".</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline CreateModelResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline CreateModelResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline CreateModelResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateModelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateModelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateModelResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model identifier.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline void SetModelId(const Aws::String& value) { m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelId.assign(value); }
    inline CreateModelResult& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline CreateModelResult& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline CreateModelResult& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model. Must be alphanumeric.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateModelResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateModelResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateModelResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema for the model. For application/json models, this should be JSON
     * schema draft 4 model.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline void SetSchema(const Aws::String& value) { m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schema.assign(value); }
    inline CreateModelResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline CreateModelResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline CreateModelResult& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contentType;

    Aws::String m_description;

    Aws::String m_modelId;

    Aws::String m_name;

    Aws::String m_schema;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
