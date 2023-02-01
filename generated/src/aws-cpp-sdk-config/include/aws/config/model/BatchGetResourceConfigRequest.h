/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ResourceKey.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class BatchGetResourceConfigRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API BatchGetResourceConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetResourceConfig"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID.</p>
     */
    inline const Aws::Vector<ResourceKey>& GetResourceKeys() const{ return m_resourceKeys; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID.</p>
     */
    inline bool ResourceKeysHasBeenSet() const { return m_resourceKeysHasBeenSet; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID.</p>
     */
    inline void SetResourceKeys(const Aws::Vector<ResourceKey>& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = value; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID.</p>
     */
    inline void SetResourceKeys(Aws::Vector<ResourceKey>&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys = std::move(value); }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID.</p>
     */
    inline BatchGetResourceConfigRequest& WithResourceKeys(const Aws::Vector<ResourceKey>& value) { SetResourceKeys(value); return *this;}

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID.</p>
     */
    inline BatchGetResourceConfigRequest& WithResourceKeys(Aws::Vector<ResourceKey>&& value) { SetResourceKeys(std::move(value)); return *this;}

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID.</p>
     */
    inline BatchGetResourceConfigRequest& AddResourceKeys(const ResourceKey& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(value); return *this; }

    /**
     * <p>A list of resource keys to be processed with the current request. Each
     * element in the list consists of the resource type and resource ID.</p>
     */
    inline BatchGetResourceConfigRequest& AddResourceKeys(ResourceKey&& value) { m_resourceKeysHasBeenSet = true; m_resourceKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResourceKey> m_resourceKeys;
    bool m_resourceKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
