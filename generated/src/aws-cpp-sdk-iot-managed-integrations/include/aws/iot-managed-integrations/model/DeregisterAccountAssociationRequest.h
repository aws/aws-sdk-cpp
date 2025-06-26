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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Request for deregister a managed thing from account association</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeregisterAccountAssociationRequest">AWS
   * API Reference</a></p>
   */
  class DeregisterAccountAssociationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API DeregisterAccountAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterAccountAssociation"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the managed thing to be deregistered from the account
     * association.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    DeregisterAccountAssociationRequest& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account association to be deregistered.</p>
     */
    inline const Aws::String& GetAccountAssociationId() const { return m_accountAssociationId; }
    inline bool AccountAssociationIdHasBeenSet() const { return m_accountAssociationIdHasBeenSet; }
    template<typename AccountAssociationIdT = Aws::String>
    void SetAccountAssociationId(AccountAssociationIdT&& value) { m_accountAssociationIdHasBeenSet = true; m_accountAssociationId = std::forward<AccountAssociationIdT>(value); }
    template<typename AccountAssociationIdT = Aws::String>
    DeregisterAccountAssociationRequest& WithAccountAssociationId(AccountAssociationIdT&& value) { SetAccountAssociationId(std::forward<AccountAssociationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    Aws::String m_accountAssociationId;
    bool m_accountAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
