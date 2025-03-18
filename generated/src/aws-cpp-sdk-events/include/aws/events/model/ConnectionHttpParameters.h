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
  class ConnectionHttpParameters
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ConnectionHttpParameters() = default;
    AWS_CLOUDWATCHEVENTS_API ConnectionHttpParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API ConnectionHttpParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains additional header parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionHeaderParameter>& GetHeaderParameters() const { return m_headerParameters; }
    inline bool HeaderParametersHasBeenSet() const { return m_headerParametersHasBeenSet; }
    template<typename HeaderParametersT = Aws::Vector<ConnectionHeaderParameter>>
    void SetHeaderParameters(HeaderParametersT&& value) { m_headerParametersHasBeenSet = true; m_headerParameters = std::forward<HeaderParametersT>(value); }
    template<typename HeaderParametersT = Aws::Vector<ConnectionHeaderParameter>>
    ConnectionHttpParameters& WithHeaderParameters(HeaderParametersT&& value) { SetHeaderParameters(std::forward<HeaderParametersT>(value)); return *this;}
    template<typename HeaderParametersT = ConnectionHeaderParameter>
    ConnectionHttpParameters& AddHeaderParameters(HeaderParametersT&& value) { m_headerParametersHasBeenSet = true; m_headerParameters.emplace_back(std::forward<HeaderParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains additional query string parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionQueryStringParameter>& GetQueryStringParameters() const { return m_queryStringParameters; }
    inline bool QueryStringParametersHasBeenSet() const { return m_queryStringParametersHasBeenSet; }
    template<typename QueryStringParametersT = Aws::Vector<ConnectionQueryStringParameter>>
    void SetQueryStringParameters(QueryStringParametersT&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters = std::forward<QueryStringParametersT>(value); }
    template<typename QueryStringParametersT = Aws::Vector<ConnectionQueryStringParameter>>
    ConnectionHttpParameters& WithQueryStringParameters(QueryStringParametersT&& value) { SetQueryStringParameters(std::forward<QueryStringParametersT>(value)); return *this;}
    template<typename QueryStringParametersT = ConnectionQueryStringParameter>
    ConnectionHttpParameters& AddQueryStringParameters(QueryStringParametersT&& value) { m_queryStringParametersHasBeenSet = true; m_queryStringParameters.emplace_back(std::forward<QueryStringParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains additional body string parameters for the connection.</p>
     */
    inline const Aws::Vector<ConnectionBodyParameter>& GetBodyParameters() const { return m_bodyParameters; }
    inline bool BodyParametersHasBeenSet() const { return m_bodyParametersHasBeenSet; }
    template<typename BodyParametersT = Aws::Vector<ConnectionBodyParameter>>
    void SetBodyParameters(BodyParametersT&& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters = std::forward<BodyParametersT>(value); }
    template<typename BodyParametersT = Aws::Vector<ConnectionBodyParameter>>
    ConnectionHttpParameters& WithBodyParameters(BodyParametersT&& value) { SetBodyParameters(std::forward<BodyParametersT>(value)); return *this;}
    template<typename BodyParametersT = ConnectionBodyParameter>
    ConnectionHttpParameters& AddBodyParameters(BodyParametersT&& value) { m_bodyParametersHasBeenSet = true; m_bodyParameters.emplace_back(std::forward<BodyParametersT>(value)); return *this; }
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
} // namespace CloudWatchEvents
} // namespace Aws
