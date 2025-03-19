/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/BaseConfigurationItem.h>
#include <aws/config/model/ResourceKey.h>
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
  class BatchGetResourceConfigResult
  {
  public:
    AWS_CONFIGSERVICE_API BatchGetResourceConfigResult() = default;
    AWS_CONFIGSERVICE_API BatchGetResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API BatchGetResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline const Aws::Vector<BaseConfigurationItem>& GetBaseConfigurationItems() const { return m_baseConfigurationItems; }
    template<typename BaseConfigurationItemsT = Aws::Vector<BaseConfigurationItem>>
    void SetBaseConfigurationItems(BaseConfigurationItemsT&& value) { m_baseConfigurationItemsHasBeenSet = true; m_baseConfigurationItems = std::forward<BaseConfigurationItemsT>(value); }
    template<typename BaseConfigurationItemsT = Aws::Vector<BaseConfigurationItem>>
    BatchGetResourceConfigResult& WithBaseConfigurationItems(BaseConfigurationItemsT&& value) { SetBaseConfigurationItems(std::forward<BaseConfigurationItemsT>(value)); return *this;}
    template<typename BaseConfigurationItemsT = BaseConfigurationItem>
    BatchGetResourceConfigResult& AddBaseConfigurationItems(BaseConfigurationItemsT&& value) { m_baseConfigurationItemsHasBeenSet = true; m_baseConfigurationItems.emplace_back(std::forward<BaseConfigurationItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource keys that were not processed with the current response.
     * The unprocessesResourceKeys value is in the same form as ResourceKeys, so the
     * value can be directly provided to a subsequent BatchGetResourceConfig operation.
     * If there are no unprocessed resource keys, the response contains an empty
     * unprocessedResourceKeys list. </p>
     */
    inline const Aws::Vector<ResourceKey>& GetUnprocessedResourceKeys() const { return m_unprocessedResourceKeys; }
    template<typename UnprocessedResourceKeysT = Aws::Vector<ResourceKey>>
    void SetUnprocessedResourceKeys(UnprocessedResourceKeysT&& value) { m_unprocessedResourceKeysHasBeenSet = true; m_unprocessedResourceKeys = std::forward<UnprocessedResourceKeysT>(value); }
    template<typename UnprocessedResourceKeysT = Aws::Vector<ResourceKey>>
    BatchGetResourceConfigResult& WithUnprocessedResourceKeys(UnprocessedResourceKeysT&& value) { SetUnprocessedResourceKeys(std::forward<UnprocessedResourceKeysT>(value)); return *this;}
    template<typename UnprocessedResourceKeysT = ResourceKey>
    BatchGetResourceConfigResult& AddUnprocessedResourceKeys(UnprocessedResourceKeysT&& value) { m_unprocessedResourceKeysHasBeenSet = true; m_unprocessedResourceKeys.emplace_back(std::forward<UnprocessedResourceKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetResourceConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BaseConfigurationItem> m_baseConfigurationItems;
    bool m_baseConfigurationItemsHasBeenSet = false;

    Aws::Vector<ResourceKey> m_unprocessedResourceKeys;
    bool m_unprocessedResourceKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
