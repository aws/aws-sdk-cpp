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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/ParameterConstraints.h>
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
  class AWS_APIGATEWAYV2_API UpdateRouteResponseResult
  {
  public:
    UpdateRouteResponseResult();
    UpdateRouteResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRouteResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpression = value; }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpression = std::move(value); }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpression.assign(value); }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}


    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModels = value; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModels = std::move(value); }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModels.emplace(key, value); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseModels(const char* key, Aws::String&& value) { m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseModels(Aws::String&& key, const char* value) { m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseModels(const char* key, const char* value) { m_responseModels.emplace(key, value); return *this; }


    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_responseParameters = value; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_responseParameters = std::move(value); }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseParameters(const Aws::String& key, const ParameterConstraints& value) { m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseParameters(Aws::String&& key, const ParameterConstraints& value) { m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseParameters(const Aws::String& key, ParameterConstraints&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseParameters(Aws::String&& key, ParameterConstraints&& value) { m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseParameters(const char* key, ParameterConstraints&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline UpdateRouteResponseResult& AddResponseParameters(const char* key, const ParameterConstraints& value) { m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseId() const{ return m_routeResponseId; }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline void SetRouteResponseId(const Aws::String& value) { m_routeResponseId = value; }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline void SetRouteResponseId(Aws::String&& value) { m_routeResponseId = std::move(value); }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline void SetRouteResponseId(const char* value) { m_routeResponseId.assign(value); }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithRouteResponseId(const Aws::String& value) { SetRouteResponseId(value); return *this;}

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithRouteResponseId(Aws::String&& value) { SetRouteResponseId(std::move(value)); return *this;}

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithRouteResponseId(const char* value) { SetRouteResponseId(value); return *this;}


    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseKey() const{ return m_routeResponseKey; }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline void SetRouteResponseKey(const Aws::String& value) { m_routeResponseKey = value; }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline void SetRouteResponseKey(Aws::String&& value) { m_routeResponseKey = std::move(value); }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline void SetRouteResponseKey(const char* value) { m_routeResponseKey.assign(value); }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithRouteResponseKey(const Aws::String& value) { SetRouteResponseKey(value); return *this;}

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithRouteResponseKey(Aws::String&& value) { SetRouteResponseKey(std::move(value)); return *this;}

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline UpdateRouteResponseResult& WithRouteResponseKey(const char* value) { SetRouteResponseKey(value); return *this;}

  private:

    Aws::String m_modelSelectionExpression;

    Aws::Map<Aws::String, Aws::String> m_responseModels;

    Aws::Map<Aws::String, ParameterConstraints> m_responseParameters;

    Aws::String m_routeResponseId;

    Aws::String m_routeResponseKey;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
