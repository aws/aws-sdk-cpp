/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConfigurationAggregator.h>
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
namespace ConfigService
{
namespace Model
{
  class PutConfigurationAggregatorResult
  {
  public:
    AWS_CONFIGSERVICE_API PutConfigurationAggregatorResult() = default;
    AWS_CONFIGSERVICE_API PutConfigurationAggregatorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutConfigurationAggregatorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a ConfigurationAggregator object.</p>
     */
    inline const ConfigurationAggregator& GetConfigurationAggregator() const { return m_configurationAggregator; }
    template<typename ConfigurationAggregatorT = ConfigurationAggregator>
    void SetConfigurationAggregator(ConfigurationAggregatorT&& value) { m_configurationAggregatorHasBeenSet = true; m_configurationAggregator = std::forward<ConfigurationAggregatorT>(value); }
    template<typename ConfigurationAggregatorT = ConfigurationAggregator>
    PutConfigurationAggregatorResult& WithConfigurationAggregator(ConfigurationAggregatorT&& value) { SetConfigurationAggregator(std::forward<ConfigurationAggregatorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutConfigurationAggregatorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfigurationAggregator m_configurationAggregator;
    bool m_configurationAggregatorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
