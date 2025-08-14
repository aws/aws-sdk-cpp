/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/DirectConnectGatewayState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Tag.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about a Direct Connect gateway, which enables you to connect
   * virtual interfaces and virtual private gateway or transit
   * gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DirectConnectGateway">AWS
   * API Reference</a></p>
   */
  class DirectConnectGateway
  {
  public:
    AWS_DIRECTCONNECT_API DirectConnectGateway() = default;
    AWS_DIRECTCONNECT_API DirectConnectGateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API DirectConnectGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const { return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    template<typename DirectConnectGatewayIdT = Aws::String>
    void SetDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::forward<DirectConnectGatewayIdT>(value); }
    template<typename DirectConnectGatewayIdT = Aws::String>
    DirectConnectGateway& WithDirectConnectGatewayId(DirectConnectGatewayIdT&& value) { SetDirectConnectGatewayId(std::forward<DirectConnectGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayName() const { return m_directConnectGatewayName; }
    inline bool DirectConnectGatewayNameHasBeenSet() const { return m_directConnectGatewayNameHasBeenSet; }
    template<typename DirectConnectGatewayNameT = Aws::String>
    void SetDirectConnectGatewayName(DirectConnectGatewayNameT&& value) { m_directConnectGatewayNameHasBeenSet = true; m_directConnectGatewayName = std::forward<DirectConnectGatewayNameT>(value); }
    template<typename DirectConnectGatewayNameT = Aws::String>
    DirectConnectGateway& WithDirectConnectGatewayName(DirectConnectGatewayNameT&& value) { SetDirectConnectGatewayName(std::forward<DirectConnectGatewayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The autonomous system number (AS) for the Amazon side of the connection.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline DirectConnectGateway& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Direct Connect
     * gateway.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    DirectConnectGateway& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Direct Connect gateway. The following are the possible
     * values:</p> <ul> <li> <p> <code>pending</code>: The initial state after calling
     * <a>CreateDirectConnectGateway</a>.</p> </li> <li> <p> <code>available</code>:
     * The Direct Connect gateway is ready for use.</p> </li> <li> <p>
     * <code>deleting</code>: The initial state after calling
     * <a>DeleteDirectConnectGateway</a>.</p> </li> <li> <p> <code>deleted</code>: The
     * Direct Connect gateway is deleted and cannot pass traffic.</p> </li> </ul>
     */
    inline DirectConnectGatewayState GetDirectConnectGatewayState() const { return m_directConnectGatewayState; }
    inline bool DirectConnectGatewayStateHasBeenSet() const { return m_directConnectGatewayStateHasBeenSet; }
    inline void SetDirectConnectGatewayState(DirectConnectGatewayState value) { m_directConnectGatewayStateHasBeenSet = true; m_directConnectGatewayState = value; }
    inline DirectConnectGateway& WithDirectConnectGatewayState(DirectConnectGatewayState value) { SetDirectConnectGatewayState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message if the state of an object failed to advance.</p>
     */
    inline const Aws::String& GetStateChangeError() const { return m_stateChangeError; }
    inline bool StateChangeErrorHasBeenSet() const { return m_stateChangeErrorHasBeenSet; }
    template<typename StateChangeErrorT = Aws::String>
    void SetStateChangeError(StateChangeErrorT&& value) { m_stateChangeErrorHasBeenSet = true; m_stateChangeError = std::forward<StateChangeErrorT>(value); }
    template<typename StateChangeErrorT = Aws::String>
    DirectConnectGateway& WithStateChangeError(StateChangeErrorT&& value) { SetStateChangeError(std::forward<StateChangeErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a tag.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DirectConnectGateway& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DirectConnectGateway& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    Aws::String m_directConnectGatewayName;
    bool m_directConnectGatewayNameHasBeenSet = false;

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    DirectConnectGatewayState m_directConnectGatewayState{DirectConnectGatewayState::NOT_SET};
    bool m_directConnectGatewayStateHasBeenSet = false;

    Aws::String m_stateChangeError;
    bool m_stateChangeErrorHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
