/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class CreateDirectConnectGatewayRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API CreateDirectConnectGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDirectConnectGateway"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayName() const { return m_directConnectGatewayName; }
    inline bool DirectConnectGatewayNameHasBeenSet() const { return m_directConnectGatewayNameHasBeenSet; }
    template<typename DirectConnectGatewayNameT = Aws::String>
    void SetDirectConnectGatewayName(DirectConnectGatewayNameT&& value) { m_directConnectGatewayNameHasBeenSet = true; m_directConnectGatewayName = std::forward<DirectConnectGatewayNameT>(value); }
    template<typename DirectConnectGatewayNameT = Aws::String>
    CreateDirectConnectGatewayRequest& WithDirectConnectGatewayName(DirectConnectGatewayNameT&& value) { SetDirectConnectGatewayName(std::forward<DirectConnectGatewayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pair tags associated with the request.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDirectConnectGatewayRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDirectConnectGatewayRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The autonomous system number (ASN) for Border Gateway Protocol (BGP) to be
     * configured on the Amazon side of the connection. The ASN must be in the private
     * range of 64,512 to 65,534 or 4,200,000,000 to 4,294,967,294. The default is
     * 64512.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline CreateDirectConnectGatewayRequest& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}
  private:

    Aws::String m_directConnectGatewayName;
    bool m_directConnectGatewayNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
