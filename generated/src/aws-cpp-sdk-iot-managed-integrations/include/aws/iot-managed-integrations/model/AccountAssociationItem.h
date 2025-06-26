/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/AssociationState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure containing information about an account association, including its
   * identifier, state, and related metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/AccountAssociationItem">AWS
   * API Reference</a></p>
   */
  class AccountAssociationItem
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API AccountAssociationItem() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API AccountAssociationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API AccountAssociationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the account association.</p>
     */
    inline const Aws::String& GetAccountAssociationId() const { return m_accountAssociationId; }
    inline bool AccountAssociationIdHasBeenSet() const { return m_accountAssociationIdHasBeenSet; }
    template<typename AccountAssociationIdT = Aws::String>
    void SetAccountAssociationId(AccountAssociationIdT&& value) { m_accountAssociationIdHasBeenSet = true; m_accountAssociationId = std::forward<AccountAssociationIdT>(value); }
    template<typename AccountAssociationIdT = Aws::String>
    AccountAssociationItem& WithAccountAssociationId(AccountAssociationIdT&& value) { SetAccountAssociationId(std::forward<AccountAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the account association, indicating its status in the
     * association lifecycle.</p>
     */
    inline AssociationState GetAssociationState() const { return m_associationState; }
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }
    inline void SetAssociationState(AssociationState value) { m_associationStateHasBeenSet = true; m_associationState = value; }
    inline AccountAssociationItem& WithAssociationState(AssociationState value) { SetAssociationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message explaining any issues with the account association, if
     * applicable.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    AccountAssociationItem& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the connector destination associated with this account
     * association.</p>
     */
    inline const Aws::String& GetConnectorDestinationId() const { return m_connectorDestinationId; }
    inline bool ConnectorDestinationIdHasBeenSet() const { return m_connectorDestinationIdHasBeenSet; }
    template<typename ConnectorDestinationIdT = Aws::String>
    void SetConnectorDestinationId(ConnectorDestinationIdT&& value) { m_connectorDestinationIdHasBeenSet = true; m_connectorDestinationId = std::forward<ConnectorDestinationIdT>(value); }
    template<typename ConnectorDestinationIdT = Aws::String>
    AccountAssociationItem& WithConnectorDestinationId(ConnectorDestinationIdT&& value) { SetConnectorDestinationId(std::forward<ConnectorDestinationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the account association.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AccountAssociationItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the account association.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AccountAssociationItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account association.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AccountAssociationItem& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountAssociationId;
    bool m_accountAssociationIdHasBeenSet = false;

    AssociationState m_associationState{AssociationState::NOT_SET};
    bool m_associationStateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_connectorDestinationId;
    bool m_connectorDestinationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
