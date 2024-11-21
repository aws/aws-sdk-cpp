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
    AWS_APIGATEWAY_API DeleteDomainNameAccessAssociationRequest();

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
    inline const Aws::String& GetDomainNameAccessAssociationArn() const{ return m_domainNameAccessAssociationArn; }
    inline bool DomainNameAccessAssociationArnHasBeenSet() const { return m_domainNameAccessAssociationArnHasBeenSet; }
    inline void SetDomainNameAccessAssociationArn(const Aws::String& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = value; }
    inline void SetDomainNameAccessAssociationArn(Aws::String&& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = std::move(value); }
    inline void SetDomainNameAccessAssociationArn(const char* value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn.assign(value); }
    inline DeleteDomainNameAccessAssociationRequest& WithDomainNameAccessAssociationArn(const Aws::String& value) { SetDomainNameAccessAssociationArn(value); return *this;}
    inline DeleteDomainNameAccessAssociationRequest& WithDomainNameAccessAssociationArn(Aws::String&& value) { SetDomainNameAccessAssociationArn(std::move(value)); return *this;}
    inline DeleteDomainNameAccessAssociationRequest& WithDomainNameAccessAssociationArn(const char* value) { SetDomainNameAccessAssociationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_domainNameAccessAssociationArn;
    bool m_domainNameAccessAssociationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
