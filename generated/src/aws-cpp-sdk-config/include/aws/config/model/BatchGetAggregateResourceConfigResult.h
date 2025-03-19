/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/BaseConfigurationItem.h>
#include <aws/config/model/AggregateResourceIdentifier.h>
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
  class BatchGetAggregateResourceConfigResult
  {
  public:
    AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigResult() = default;
    AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline const Aws::Vector<BaseConfigurationItem>& GetBaseConfigurationItems() const { return m_baseConfigurationItems; }
    template<typename BaseConfigurationItemsT = Aws::Vector<BaseConfigurationItem>>
    void SetBaseConfigurationItems(BaseConfigurationItemsT&& value) { m_baseConfigurationItemsHasBeenSet = true; m_baseConfigurationItems = std::forward<BaseConfigurationItemsT>(value); }
    template<typename BaseConfigurationItemsT = Aws::Vector<BaseConfigurationItem>>
    BatchGetAggregateResourceConfigResult& WithBaseConfigurationItems(BaseConfigurationItemsT&& value) { SetBaseConfigurationItems(std::forward<BaseConfigurationItemsT>(value)); return *this;}
    template<typename BaseConfigurationItemsT = BaseConfigurationItem>
    BatchGetAggregateResourceConfigResult& AddBaseConfigurationItems(BaseConfigurationItemsT&& value) { m_baseConfigurationItemsHasBeenSet = true; m_baseConfigurationItems.emplace_back(std::forward<BaseConfigurationItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline const Aws::Vector<AggregateResourceIdentifier>& GetUnprocessedResourceIdentifiers() const { return m_unprocessedResourceIdentifiers; }
    template<typename UnprocessedResourceIdentifiersT = Aws::Vector<AggregateResourceIdentifier>>
    void SetUnprocessedResourceIdentifiers(UnprocessedResourceIdentifiersT&& value) { m_unprocessedResourceIdentifiersHasBeenSet = true; m_unprocessedResourceIdentifiers = std::forward<UnprocessedResourceIdentifiersT>(value); }
    template<typename UnprocessedResourceIdentifiersT = Aws::Vector<AggregateResourceIdentifier>>
    BatchGetAggregateResourceConfigResult& WithUnprocessedResourceIdentifiers(UnprocessedResourceIdentifiersT&& value) { SetUnprocessedResourceIdentifiers(std::forward<UnprocessedResourceIdentifiersT>(value)); return *this;}
    template<typename UnprocessedResourceIdentifiersT = AggregateResourceIdentifier>
    BatchGetAggregateResourceConfigResult& AddUnprocessedResourceIdentifiers(UnprocessedResourceIdentifiersT&& value) { m_unprocessedResourceIdentifiersHasBeenSet = true; m_unprocessedResourceIdentifiers.emplace_back(std::forward<UnprocessedResourceIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetAggregateResourceConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BaseConfigurationItem> m_baseConfigurationItems;
    bool m_baseConfigurationItemsHasBeenSet = false;

    Aws::Vector<AggregateResourceIdentifier> m_unprocessedResourceIdentifiers;
    bool m_unprocessedResourceIdentifiersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
