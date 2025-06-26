/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class ListManagedThingAccountAssociationsRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListManagedThingAccountAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListManagedThingAccountAssociations"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;

    AWS_IOTMANAGEDINTEGRATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the managed thing to list account associations for.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    ListManagedThingAccountAssociationsRequest& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the account association to filter results by. When
     * specified, only associations with this account association ID will be
     * returned.</p>
     */
    inline const Aws::String& GetAccountAssociationId() const { return m_accountAssociationId; }
    inline bool AccountAssociationIdHasBeenSet() const { return m_accountAssociationIdHasBeenSet; }
    template<typename AccountAssociationIdT = Aws::String>
    void SetAccountAssociationId(AccountAssociationIdT&& value) { m_accountAssociationIdHasBeenSet = true; m_accountAssociationId = std::forward<AccountAssociationIdT>(value); }
    template<typename AccountAssociationIdT = Aws::String>
    ListManagedThingAccountAssociationsRequest& WithAccountAssociationId(AccountAssociationIdT&& value) { SetAccountAssociationId(std::forward<AccountAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of account associations to return in a single
     * response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListManagedThingAccountAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedThingAccountAssociationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    Aws::String m_accountAssociationId;
    bool m_accountAssociationIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
