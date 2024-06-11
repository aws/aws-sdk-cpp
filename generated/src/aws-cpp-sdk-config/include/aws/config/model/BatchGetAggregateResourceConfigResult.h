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
    AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigResult();
    AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline const Aws::Vector<BaseConfigurationItem>& GetBaseConfigurationItems() const{ return m_baseConfigurationItems; }
    inline void SetBaseConfigurationItems(const Aws::Vector<BaseConfigurationItem>& value) { m_baseConfigurationItems = value; }
    inline void SetBaseConfigurationItems(Aws::Vector<BaseConfigurationItem>&& value) { m_baseConfigurationItems = std::move(value); }
    inline BatchGetAggregateResourceConfigResult& WithBaseConfigurationItems(const Aws::Vector<BaseConfigurationItem>& value) { SetBaseConfigurationItems(value); return *this;}
    inline BatchGetAggregateResourceConfigResult& WithBaseConfigurationItems(Aws::Vector<BaseConfigurationItem>&& value) { SetBaseConfigurationItems(std::move(value)); return *this;}
    inline BatchGetAggregateResourceConfigResult& AddBaseConfigurationItems(const BaseConfigurationItem& value) { m_baseConfigurationItems.push_back(value); return *this; }
    inline BatchGetAggregateResourceConfigResult& AddBaseConfigurationItems(BaseConfigurationItem&& value) { m_baseConfigurationItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline const Aws::Vector<AggregateResourceIdentifier>& GetUnprocessedResourceIdentifiers() const{ return m_unprocessedResourceIdentifiers; }
    inline void SetUnprocessedResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { m_unprocessedResourceIdentifiers = value; }
    inline void SetUnprocessedResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { m_unprocessedResourceIdentifiers = std::move(value); }
    inline BatchGetAggregateResourceConfigResult& WithUnprocessedResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { SetUnprocessedResourceIdentifiers(value); return *this;}
    inline BatchGetAggregateResourceConfigResult& WithUnprocessedResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { SetUnprocessedResourceIdentifiers(std::move(value)); return *this;}
    inline BatchGetAggregateResourceConfigResult& AddUnprocessedResourceIdentifiers(const AggregateResourceIdentifier& value) { m_unprocessedResourceIdentifiers.push_back(value); return *this; }
    inline BatchGetAggregateResourceConfigResult& AddUnprocessedResourceIdentifiers(AggregateResourceIdentifier&& value) { m_unprocessedResourceIdentifiers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetAggregateResourceConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetAggregateResourceConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetAggregateResourceConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BaseConfigurationItem> m_baseConfigurationItems;

    Aws::Vector<AggregateResourceIdentifier> m_unprocessedResourceIdentifiers;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
