/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class GetApiMappingRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API GetApiMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApiMapping"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API mapping identifier.</p>
     */
    inline const Aws::String& GetApiMappingId() const{ return m_apiMappingId; }
    inline bool ApiMappingIdHasBeenSet() const { return m_apiMappingIdHasBeenSet; }
    inline void SetApiMappingId(const Aws::String& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = value; }
    inline void SetApiMappingId(Aws::String&& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = std::move(value); }
    inline void SetApiMappingId(const char* value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId.assign(value); }
    inline GetApiMappingRequest& WithApiMappingId(const Aws::String& value) { SetApiMappingId(value); return *this;}
    inline GetApiMappingRequest& WithApiMappingId(Aws::String&& value) { SetApiMappingId(std::move(value)); return *this;}
    inline GetApiMappingRequest& WithApiMappingId(const char* value) { SetApiMappingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline GetApiMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetApiMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetApiMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}
  private:

    Aws::String m_apiMappingId;
    bool m_apiMappingIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
