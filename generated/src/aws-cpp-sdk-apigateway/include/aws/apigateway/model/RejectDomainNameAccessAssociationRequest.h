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
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   */
  class RejectDomainNameAccessAssociationRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API RejectDomainNameAccessAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectDomainNameAccessAssociation"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ARN of the domain name access association resource. </p>
     */
    inline const Aws::String& GetDomainNameAccessAssociationArn() const{ return m_domainNameAccessAssociationArn; }
    inline bool DomainNameAccessAssociationArnHasBeenSet() const { return m_domainNameAccessAssociationArnHasBeenSet; }
    inline void SetDomainNameAccessAssociationArn(const Aws::String& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = value; }
    inline void SetDomainNameAccessAssociationArn(Aws::String&& value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn = std::move(value); }
    inline void SetDomainNameAccessAssociationArn(const char* value) { m_domainNameAccessAssociationArnHasBeenSet = true; m_domainNameAccessAssociationArn.assign(value); }
    inline RejectDomainNameAccessAssociationRequest& WithDomainNameAccessAssociationArn(const Aws::String& value) { SetDomainNameAccessAssociationArn(value); return *this;}
    inline RejectDomainNameAccessAssociationRequest& WithDomainNameAccessAssociationArn(Aws::String&& value) { SetDomainNameAccessAssociationArn(std::move(value)); return *this;}
    inline RejectDomainNameAccessAssociationRequest& WithDomainNameAccessAssociationArn(const char* value) { SetDomainNameAccessAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the domain name. </p>
     */
    inline const Aws::String& GetDomainNameArn() const{ return m_domainNameArn; }
    inline bool DomainNameArnHasBeenSet() const { return m_domainNameArnHasBeenSet; }
    inline void SetDomainNameArn(const Aws::String& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = value; }
    inline void SetDomainNameArn(Aws::String&& value) { m_domainNameArnHasBeenSet = true; m_domainNameArn = std::move(value); }
    inline void SetDomainNameArn(const char* value) { m_domainNameArnHasBeenSet = true; m_domainNameArn.assign(value); }
    inline RejectDomainNameAccessAssociationRequest& WithDomainNameArn(const Aws::String& value) { SetDomainNameArn(value); return *this;}
    inline RejectDomainNameAccessAssociationRequest& WithDomainNameArn(Aws::String&& value) { SetDomainNameArn(std::move(value)); return *this;}
    inline RejectDomainNameAccessAssociationRequest& WithDomainNameArn(const char* value) { SetDomainNameArn(value); return *this;}
    ///@}
  private:

    Aws::String m_domainNameAccessAssociationArn;
    bool m_domainNameAccessAssociationArnHasBeenSet = false;

    Aws::String m_domainNameArn;
    bool m_domainNameArnHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
