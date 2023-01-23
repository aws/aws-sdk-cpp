/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchGetResourceConfigResult
  {
  public:
    AWS_CONFIGSERVICE_API BatchGetResourceConfigResult();
    AWS_CONFIGSERVICE_API BatchGetResourceConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API BatchGetResourceConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
