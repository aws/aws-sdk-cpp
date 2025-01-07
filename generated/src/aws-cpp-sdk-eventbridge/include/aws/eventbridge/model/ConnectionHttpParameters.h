/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eventbridge/model/ConnectionHeaderParameter.h>
#include <aws/eventbridge/model/ConnectionQueryStringParameter.h>
#include <aws/eventbridge/model/ConnectionBodyParameter.h>
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
   * <p>Any additional parameters for the connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/ConnectionHttpParameters">AWS
   * API Reference</a></p>
   */
  class ConnectionHttpParameters
  {
  public:
    AWS_EVENTBRIDGE_API ConnectionHttpParameters();
    AWS_EVENTBRIDGE_API ConnectionHttpParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API ConnectionHttpParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Any additional header parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionHeaderParameter>& GetHeaderParameters() const{ return m_headerParameters; }
    inline bool HeaderParametersHasBeenSet() const { return m_headerParametersHasBeenSet; }
    inline void SetHeaderParameters(const Aws::Vector<ConnectionHeaderParameter>& value) { m_headerParametersHasBeenSet = true; m_headerParameters = value; }
    inline void SetHeaderParameters(Aws::Vector<ConnectionHeaderParameter>&& value) { m_headerParametersHasBeenSet = true; m_headerParameters = std::move(value); }
    inline ConnectionHttpParameters& WithHeaderParameters(const Aws::Vector<ConnectionHeaderParameter>& value) { SetHeaderParameters(value); return *this;}
    inline ConnectionHttpParameters& WithHeaderParameters(Aws::Vector<ConnectionHeaderParameter>&& value) { SetHeaderParameters(std::move(value)); return *this;}
    inline ConnectionHttpParameters& AddHeaderParameters(const ConnectionHeaderParameter& value) { m_headerParametersHasBeenSet = true; m_headerParameters.push_back(value); return *this; }
    inline ConnectionHttpParameters& AddHeaderParameters(ConnectionHeaderParameter&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any additional query string parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionQueryStringParameter>& GetQueryStringParameters() const{ return m_queryStringParameters; }
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }
    inline void SetQueryStringParameters(const Aws::Vector<ConnectionQueryStringParameter>& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = value; }
    inline void SetQueryStringParameters(Aws::Vector<ConnectionQueryStringParameter>&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::move(value); }
    inline ConnectionHttpParameters& WithQueryStringParameters(const Aws::Vector<ConnectionQueryStringParameter>& value) { SetQueryStringParameters(value); return *this;}
    inline ConnectionHttpParameters& WithQueryStringParameters(Aws::Vector<ConnectionQueryStringParameter>&& value) { SetQueryStringParameters(std::move(value)); return *this;}
    inline ConnectionHttpParameters& AddQueryStringParameters(const ConnectionQueryStringParameter& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.push_back(value); return *this; }
    inline ConnectionHttpParameters& AddQueryStringParameters(ConnectionQueryStringParameter&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any additional body string parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionBodyParameter>& GetBodyParameters() const{ return m_bodyParameters; }
    inline bool BodyParametersHasBeenSet() const { return m_bodyParametersHasBeenSet; }
    inline void SetBodyParameters(const Aws::Vector<ConnectionBodyParameter>& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters = value; }
    inline void SetBodyParameters(Aws::Vector<ConnectionBodyParameter>&& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters = std::move(value); }
    inline ConnectionHttpParameters& WithBodyParameters(const Aws::Vector<ConnectionBodyParameter>& value) { SetBodyParameters(value); return *this;}
    inline ConnectionHttpParameters& WithBodyParameters(Aws::Vector<ConnectionBodyParameter>&& value) { SetBodyParameters(std::move(value)); return *this;}
    inline ConnectionHttpParameters& AddBodyParameters(const ConnectionBodyParameter& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters.push_back(value); return *this; }
    inline ConnectionHttpParameters& AddBodyParameters(ConnectionBodyParameter&& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ConnectionHeaderParameter> m_headerParameters;
    bool m_headerParametersHasBeenSet = false;

    Aws::Vector<ConnectionQueryStringParameter> m_queryStringParameters;
    bool m_queryStringParametersHasBeenSet = false;

    Aws::Vector<ConnectionBodyParameter> m_bodyParameters;
    bool m_bodyParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
