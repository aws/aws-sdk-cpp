/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkPolicyAlias.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetCoreNetworkPolicyRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetCoreNetworkPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCoreNetworkPolicy"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline GetCoreNetworkPolicyRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline GetCoreNetworkPolicyRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline GetCoreNetworkPolicyRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ID of a core network policy version.</p>
     */
    inline int GetPolicyVersionId() const{ return m_policyVersionId; }

    /**
     * <p>The ID of a core network policy version.</p>
     */
    inline bool PolicyVersionIdHasBeenSet() const { return m_policyVersionIdHasBeenSet; }

    /**
     * <p>The ID of a core network policy version.</p>
     */
    inline void SetPolicyVersionId(int value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }

    /**
     * <p>The ID of a core network policy version.</p>
     */
    inline GetCoreNetworkPolicyRequest& WithPolicyVersionId(int value) { SetPolicyVersionId(value); return *this;}


    /**
     * <p>The alias of a core network policy </p>
     */
    inline const CoreNetworkPolicyAlias& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias of a core network policy </p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias of a core network policy </p>
     */
    inline void SetAlias(const CoreNetworkPolicyAlias& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias of a core network policy </p>
     */
    inline void SetAlias(CoreNetworkPolicyAlias&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias of a core network policy </p>
     */
    inline GetCoreNetworkPolicyRequest& WithAlias(const CoreNetworkPolicyAlias& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias of a core network policy </p>
     */
    inline GetCoreNetworkPolicyRequest& WithAlias(CoreNetworkPolicyAlias&& value) { SetAlias(std::move(value)); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    int m_policyVersionId;
    bool m_policyVersionIdHasBeenSet = false;

    CoreNetworkPolicyAlias m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
