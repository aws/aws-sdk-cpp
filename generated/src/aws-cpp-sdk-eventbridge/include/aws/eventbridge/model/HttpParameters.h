/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EventBridge
{
namespace Model
{

  /**
   * <p>These are custom parameter to be used when the target is an API Gateway APIs
   * or EventBridge ApiDestinations. In the latter case, these are merged with any
   * InvocationParameters specified on the Connection, with any values from the
   * Connection taking precedence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/HttpParameters">AWS
   * API Reference</a></p>
   */
  class HttpParameters
  {
  public:
    AWS_EVENTBRIDGE_API HttpParameters();
    AWS_EVENTBRIDGE_API HttpParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API HttpParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path parameter values to be used to populate API Gateway API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline const Aws::Vector<Aws::String>& GetPathParameterValues() const{ return m_pathParameterValues; }
    inline bool PathParameterValuesHasBeenSet() const { return m_pathParameterValuesHasBeenSet; }
    inline void SetPathParameterValues(const Aws::Vector<Aws::String>& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues = value; }
    inline void SetPathParameterValues(Aws::Vector<Aws::String>&& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues = std::move(value); }
    inline HttpParameters& WithPathParameterValues(const Aws::Vector<Aws::String>& value) { SetPathParameterValues(value); return *this;}
    inline HttpParameters& WithPathParameterValues(Aws::Vector<Aws::String>&& value) { SetPathParameterValues(std::move(value)); return *this;}
    inline HttpParameters& AddPathParameterValues(const Aws::String& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues.push_back(value); return *this; }
    inline HttpParameters& AddPathParameterValues(Aws::String&& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues.push_back(std::move(value)); return *this; }
    inline HttpParameters& AddPathParameterValues(const char* value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * API or EventBridge ApiDestination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaderParameters() const{ return m_headerParameters; }
    inline bool HeaderParametersHasBeenSet() const { return m_headerParametersHasBeenSet; }
    inline void SetHeaderParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_headerParametersHasBeenSet = true; m_headerParameters = value; }
    inline void SetHeaderParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_headerParametersHasBeenSet = true; m_headerParameters = std::move(value); }
    inline HttpParameters& WithHeaderParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHeaderParameters(value); return *this;}
    inline HttpParameters& WithHeaderParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHeaderParameters(std::move(value)); return *this;}
    inline HttpParameters& AddHeaderParameters(const Aws::String& key, const Aws::String& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(key, value); return *this; }
    inline HttpParameters& AddHeaderParameters(Aws::String&& key, const Aws::String& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(std::move(key), value); return *this; }
    inline HttpParameters& AddHeaderParameters(const Aws::String& key, Aws::String&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(key, std::move(value)); return *this; }
    inline HttpParameters& AddHeaderParameters(Aws::String&& key, Aws::String&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline HttpParameters& AddHeaderParameters(const char* key, Aws::String&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(key, std::move(value)); return *this; }
    inline HttpParameters& AddHeaderParameters(Aws::String&& key, const char* value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(std::move(key), value); return *this; }
    inline HttpParameters& AddHeaderParameters(const char* key, const char* value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway API or EventBridge ApiDestination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryStringParameters() const{ return m_queryStringParameters; }
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }
    inline void SetQueryStringParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = value; }
    inline void SetQueryStringParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::move(value); }
    inline HttpParameters& WithQueryStringParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryStringParameters(value); return *this;}
    inline HttpParameters& WithQueryStringParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryStringParameters(std::move(value)); return *this;}
    inline HttpParameters& AddQueryStringParameters(const Aws::String& key, const Aws::String& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, value); return *this; }
    inline HttpParameters& AddQueryStringParameters(Aws::String&& key, const Aws::String& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), value); return *this; }
    inline HttpParameters& AddQueryStringParameters(const Aws::String& key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, std::move(value)); return *this; }
    inline HttpParameters& AddQueryStringParameters(Aws::String&& key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline HttpParameters& AddQueryStringParameters(const char* key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, std::move(value)); return *this; }
    inline HttpParameters& AddQueryStringParameters(Aws::String&& key, const char* value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), value); return *this; }
    inline HttpParameters& AddQueryStringParameters(const char* key, const char* value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_pathParameterValues;
    bool m_pathParameterValuesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_headerParameters;
    bool m_headerParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryStringParameters;
    bool m_queryStringParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
