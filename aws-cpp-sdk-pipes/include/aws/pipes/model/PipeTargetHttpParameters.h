/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>These are custom parameter to be used when the target is an API Gateway REST
   * APIs or EventBridge ApiDestinations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetHttpParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetHttpParameters
  {
  public:
    AWS_PIPES_API PipeTargetHttpParameters();
    AWS_PIPES_API PipeTargetHttpParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetHttpParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHeaderParameters() const{ return m_headerParameters; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline bool HeaderParametersHasBeenSet() const { return m_headerParametersHasBeenSet; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline void SetHeaderParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_headerParametersHasBeenSet = true; m_headerParameters = value; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline void SetHeaderParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_headerParametersHasBeenSet = true; m_headerParameters = std::move(value); }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& WithHeaderParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHeaderParameters(value); return *this;}

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& WithHeaderParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHeaderParameters(std::move(value)); return *this;}

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddHeaderParameters(const Aws::String& key, const Aws::String& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(key, value); return *this; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddHeaderParameters(Aws::String&& key, const Aws::String& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddHeaderParameters(const Aws::String& key, Aws::String&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddHeaderParameters(Aws::String&& key, Aws::String&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddHeaderParameters(const char* key, Aws::String&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddHeaderParameters(Aws::String&& key, const char* value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The headers that need to be sent as part of request invoking the API Gateway
     * REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddHeaderParameters(const char* key, const char* value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace(key, value); return *this; }


    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline const Aws::Vector<Aws::String>& GetPathParameterValues() const{ return m_pathParameterValues; }

    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline bool PathParameterValuesHasBeenSet() const { return m_pathParameterValuesHasBeenSet; }

    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline void SetPathParameterValues(const Aws::Vector<Aws::String>& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues = value; }

    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline void SetPathParameterValues(Aws::Vector<Aws::String>&& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues = std::move(value); }

    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline PipeTargetHttpParameters& WithPathParameterValues(const Aws::Vector<Aws::String>& value) { SetPathParameterValues(value); return *this;}

    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline PipeTargetHttpParameters& WithPathParameterValues(Aws::Vector<Aws::String>&& value) { SetPathParameterValues(std::move(value)); return *this;}

    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline PipeTargetHttpParameters& AddPathParameterValues(const Aws::String& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues.push_back(value); return *this; }

    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline PipeTargetHttpParameters& AddPathParameterValues(Aws::String&& value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The path parameter values to be used to populate API Gateway REST API or
     * EventBridge ApiDestination path wildcards ("*").</p>
     */
    inline PipeTargetHttpParameters& AddPathParameterValues(const char* value) { m_pathParameterValuesHasBeenSet = true; m_pathParameterValues.push_back(value); return *this; }


    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryStringParameters() const{ return m_queryStringParameters; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline void SetQueryStringParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = value; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline void SetQueryStringParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::move(value); }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& WithQueryStringParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryStringParameters(value); return *this;}

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& WithQueryStringParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryStringParameters(std::move(value)); return *this;}

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddQueryStringParameters(const Aws::String& key, const Aws::String& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, value); return *this; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddQueryStringParameters(Aws::String&& key, const Aws::String& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddQueryStringParameters(const Aws::String& key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddQueryStringParameters(Aws::String&& key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddQueryStringParameters(const char* key, Aws::String&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddQueryStringParameters(Aws::String&& key, const char* value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The query string keys/values that need to be sent as part of request invoking
     * the API Gateway REST API or EventBridge ApiDestination.</p>
     */
    inline PipeTargetHttpParameters& AddQueryStringParameters(const char* key, const char* value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_headerParameters;
    bool m_headerParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_pathParameterValues;
    bool m_pathParameterValuesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryStringParameters;
    bool m_queryStringParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
