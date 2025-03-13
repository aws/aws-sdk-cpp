/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   */
  class DeleteDomainNameAccessAssociationRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API DeleteDomainNameAccessAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDomainNameAccessAssociation"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The ARN of the domain name access association resource.</p>
     */
    inline const Aws::String& GetDomainNameAccessAssociationArn() const { return m_domainNameAccessAssociationArn; }
    inline bool DomainNameAccessAssociationArnHasBeenSet() const { return m_domainNameAccessAssociationArnHasBeenSet; }
    template<typename DomainNameAccessAssociationArnT = Aws::String>
    void SetDomainNameAccessAssociationArn(DomainNameAccessAssociationArnT&& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = std::forward<DomainNameAccessAssociationArnT>(value); }
    template<typename DomainNameAccessAssociationArnT = Aws::String>
    DeleteDomainNameAccessAssociationRequest& WithDomainNameAccessAssociationArn(DomainNameAccessAssociationArnT&& value) { SetDomainNameAccessAssociationArn(std::forward<DomainNameAccessAssociationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainNameAccessAssociationArn;
    bool m_domainNameAccessAssociationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
