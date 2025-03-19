/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConfigurationItem.h>
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
  class GetAggregateResourceConfigResult
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateResourceConfigResult() = default;
    AWS_CONFIGSERVICE_API GetAggregateResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a <code>ConfigurationItem</code> object.</p>
     */
    inline const ConfigurationItem& GetConfigurationItem() const { return m_configurationItem; }
    template<typename ConfigurationItemT = ConfigurationItem>
    void SetConfigurationItem(ConfigurationItemT&& value) { m_configurationItemHasBeenSet = true; m_configurationItem = std::forward<ConfigurationItemT>(value); }
    template<typename ConfigurationItemT = ConfigurationItem>
    GetAggregateResourceConfigResult& WithConfigurationItem(ConfigurationItemT&& value) { SetConfigurationItem(std::forward<ConfigurationItemT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAggregateResourceConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConfigurationItem m_configurationItem;
    bool m_configurationItemHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
