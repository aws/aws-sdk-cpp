/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigResult
  {
  public:
    BatchGetAggregateResourceConfigResult();
    BatchGetAggregateResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetAggregateResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline const Aws::Vector<BaseConfigurationItem>& GetBaseConfigurationItems() const{ return m_baseConfigurationItems; }

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline void SetBaseConfigurationItems(const Aws::Vector<BaseConfigurationItem>& value) { m_baseConfigurationItems = value; }

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline void SetBaseConfigurationItems(Aws::Vector<BaseConfigurationItem>&& value) { m_baseConfigurationItems = std::move(value); }

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline BatchGetAggregateResourceConfigResult& WithBaseConfigurationItems(const Aws::Vector<BaseConfigurationItem>& value) { SetBaseConfigurationItems(value); return *this;}

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline BatchGetAggregateResourceConfigResult& WithBaseConfigurationItems(Aws::Vector<BaseConfigurationItem>&& value) { SetBaseConfigurationItems(std::move(value)); return *this;}

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline BatchGetAggregateResourceConfigResult& AddBaseConfigurationItems(const BaseConfigurationItem& value) { m_baseConfigurationItems.push_back(value); return *this; }

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline BatchGetAggregateResourceConfigResult& AddBaseConfigurationItems(BaseConfigurationItem&& value) { m_baseConfigurationItems.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline const Aws::Vector<AggregateResourceIdentifier>& GetUnprocessedResourceIdentifiers() const{ return m_unprocessedResourceIdentifiers; }

    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline void SetUnprocessedResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { m_unprocessedResourceIdentifiers = value; }

    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline void SetUnprocessedResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { m_unprocessedResourceIdentifiers = std::move(value); }

    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline BatchGetAggregateResourceConfigResult& WithUnprocessedResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { SetUnprocessedResourceIdentifiers(value); return *this;}

    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline BatchGetAggregateResourceConfigResult& WithUnprocessedResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { SetUnprocessedResourceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline BatchGetAggregateResourceConfigResult& AddUnprocessedResourceIdentifiers(const AggregateResourceIdentifier& value) { m_unprocessedResourceIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of resource identifiers that were not processed with current scope.
     * The list is empty if all the resources are processed.</p>
     */
    inline BatchGetAggregateResourceConfigResult& AddUnprocessedResourceIdentifiers(AggregateResourceIdentifier&& value) { m_unprocessedResourceIdentifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BaseConfigurationItem> m_baseConfigurationItems;

    Aws::Vector<AggregateResourceIdentifier> m_unprocessedResourceIdentifiers;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
