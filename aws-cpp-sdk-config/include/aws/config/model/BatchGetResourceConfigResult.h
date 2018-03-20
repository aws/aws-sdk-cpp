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
  class AWS_CONFIGSERVICE_API BatchGetResourceConfigResult
  {
  public:
    BatchGetResourceConfigResult();
    BatchGetResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline BatchGetResourceConfigResult& WithBaseConfigurationItems(const Aws::Vector<BaseConfigurationItem>& value) { SetBaseConfigurationItems(value); return *this;}

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline BatchGetResourceConfigResult& WithBaseConfigurationItems(Aws::Vector<BaseConfigurationItem>&& value) { SetBaseConfigurationItems(std::move(value)); return *this;}

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline BatchGetResourceConfigResult& AddBaseConfigurationItems(const BaseConfigurationItem& value) { m_baseConfigurationItems.push_back(value); return *this; }

    /**
     * <p>A list that contains the current configuration of one or more resources.</p>
     */
    inline BatchGetResourceConfigResult& AddBaseConfigurationItems(BaseConfigurationItem&& value) { m_baseConfigurationItems.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of resource keys that were not processed with the current response.
     * The unprocessesResourceKeys value is in the same form as ResourceKeys, so the
     * value can be directly provided to a subsequent BatchGetResourceConfig operation.
     * If there are no unprocessed resource keys, the response contains an empty
     * unprocessedResourceKeys list. </p>
     */
    inline const Aws::Vector<ResourceKey>& GetUnprocessedResourceKeys() const{ return m_unprocessedResourceKeys; }

    /**
     * <p>A list of resource keys that were not processed with the current response.
     * The unprocessesResourceKeys value is in the same form as ResourceKeys, so the
     * value can be directly provided to a subsequent BatchGetResourceConfig operation.
     * If there are no unprocessed resource keys, the response contains an empty
     * unprocessedResourceKeys list. </p>
     */
    inline void SetUnprocessedResourceKeys(const Aws::Vector<ResourceKey>& value) { m_unprocessedResourceKeys = value; }

    /**
     * <p>A list of resource keys that were not processed with the current response.
     * The unprocessesResourceKeys value is in the same form as ResourceKeys, so the
     * value can be directly provided to a subsequent BatchGetResourceConfig operation.
     * If there are no unprocessed resource keys, the response contains an empty
     * unprocessedResourceKeys list. </p>
     */
    inline void SetUnprocessedResourceKeys(Aws::Vector<ResourceKey>&& value) { m_unprocessedResourceKeys = std::move(value); }

    /**
     * <p>A list of resource keys that were not processed with the current response.
     * The unprocessesResourceKeys value is in the same form as ResourceKeys, so the
     * value can be directly provided to a subsequent BatchGetResourceConfig operation.
     * If there are no unprocessed resource keys, the response contains an empty
     * unprocessedResourceKeys list. </p>
     */
    inline BatchGetResourceConfigResult& WithUnprocessedResourceKeys(const Aws::Vector<ResourceKey>& value) { SetUnprocessedResourceKeys(value); return *this;}

    /**
     * <p>A list of resource keys that were not processed with the current response.
     * The unprocessesResourceKeys value is in the same form as ResourceKeys, so the
     * value can be directly provided to a subsequent BatchGetResourceConfig operation.
     * If there are no unprocessed resource keys, the response contains an empty
     * unprocessedResourceKeys list. </p>
     */
    inline BatchGetResourceConfigResult& WithUnprocessedResourceKeys(Aws::Vector<ResourceKey>&& value) { SetUnprocessedResourceKeys(std::move(value)); return *this;}

    /**
     * <p>A list of resource keys that were not processed with the current response.
     * The unprocessesResourceKeys value is in the same form as ResourceKeys, so the
     * value can be directly provided to a subsequent BatchGetResourceConfig operation.
     * If there are no unprocessed resource keys, the response contains an empty
     * unprocessedResourceKeys list. </p>
     */
    inline BatchGetResourceConfigResult& AddUnprocessedResourceKeys(const ResourceKey& value) { m_unprocessedResourceKeys.push_back(value); return *this; }

    /**
     * <p>A list of resource keys that were not processed with the current response.
     * The unprocessesResourceKeys value is in the same form as ResourceKeys, so the
     * value can be directly provided to a subsequent BatchGetResourceConfig operation.
     * If there are no unprocessed resource keys, the response contains an empty
     * unprocessedResourceKeys list. </p>
     */
    inline BatchGetResourceConfigResult& AddUnprocessedResourceKeys(ResourceKey&& value) { m_unprocessedResourceKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BaseConfigurationItem> m_baseConfigurationItems;

    Aws::Vector<ResourceKey> m_unprocessedResourceKeys;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
