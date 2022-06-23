/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/model/ConnectionHeaderParameter.h>
#include <aws/events/model/ConnectionQueryStringParameter.h>
#include <aws/events/model/ConnectionBodyParameter.h>
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
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>Contains additional parameters for the connection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/ConnectionHttpParameters">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API ConnectionHttpParameters
  {
  public:
    ConnectionHttpParameters();
    ConnectionHttpParameters(Aws::Utils::Json::JsonView jsonValue);
    ConnectionHttpParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionHeaderParameter>& GetHeaderParameters() const{ return m_headerParameters; }

    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline bool HeaderParametersHasBeenSet() const { return m_headerParametersHasBeenSet; }

    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline void SetHeaderParameters(const Aws::Vector<ConnectionHeaderParameter>& value) { m_headerParametersHasBeenSet = true; m_headerParameters = value; }

    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline void SetHeaderParameters(Aws::Vector<ConnectionHeaderParameter>&& value) { m_headerParametersHasBeenSet = true; m_headerParameters = std::move(value); }

    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& WithHeaderParameters(const Aws::Vector<ConnectionHeaderParameter>& value) { SetHeaderParameters(value); return *this;}

    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& WithHeaderParameters(Aws::Vector<ConnectionHeaderParameter>&& value) { SetHeaderParameters(std::move(value)); return *this;}

    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& AddHeaderParameters(const ConnectionHeaderParameter& value) { m_headerParametersHasBeenSet = true; m_headerParameters.push_back(value); return *this; }

    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& AddHeaderParameters(ConnectionHeaderParameter&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionQueryStringParameter>& GetQueryStringParameters() const{ return m_queryStringParameters; }

    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }

    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline void SetQueryStringParameters(const Aws::Vector<ConnectionQueryStringParameter>& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = value; }

    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline void SetQueryStringParameters(Aws::Vector<ConnectionQueryStringParameter>&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::move(value); }

    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& WithQueryStringParameters(const Aws::Vector<ConnectionQueryStringParameter>& value) { SetQueryStringParameters(value); return *this;}

    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& WithQueryStringParameters(Aws::Vector<ConnectionQueryStringParameter>&& value) { SetQueryStringParameters(std::move(value)); return *this;}

    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& AddQueryStringParameters(const ConnectionQueryStringParameter& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.push_back(value); return *this; }

    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& AddQueryStringParameters(ConnectionQueryStringParameter&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionBodyParameter>& GetBodyParameters() const{ return m_bodyParameters; }

    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline bool BodyParametersHasBeenSet() const { return m_bodyParametersHasBeenSet; }

    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline void SetBodyParameters(const Aws::Vector<ConnectionBodyParameter>& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters = value; }

    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline void SetBodyParameters(Aws::Vector<ConnectionBodyParameter>&& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters = std::move(value); }

    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& WithBodyParameters(const Aws::Vector<ConnectionBodyParameter>& value) { SetBodyParameters(value); return *this;}

    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& WithBodyParameters(Aws::Vector<ConnectionBodyParameter>&& value) { SetBodyParameters(std::move(value)); return *this;}

    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& AddBodyParameters(const ConnectionBodyParameter& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters.push_back(value); return *this; }

    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline ConnectionHttpParameters& AddBodyParameters(ConnectionBodyParameter&& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ConnectionHeaderParameter> m_headerParameters;
    bool m_headerParametersHasBeenSet;

    Aws::Vector<ConnectionQueryStringParameter> m_queryStringParameters;
    bool m_queryStringParametersHasBeenSet;

    Aws::Vector<ConnectionBodyParameter> m_bodyParameters;
    bool m_bodyParametersHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
