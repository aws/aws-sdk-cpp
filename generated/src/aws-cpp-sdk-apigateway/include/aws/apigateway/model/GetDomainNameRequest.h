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
   * <p>Request to get the name of a DomainName resource.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDomainNameRequest">AWS
   * API Reference</a></p>
   */
  class GetDomainNameRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetDomainNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDomainName"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the DomainName resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline GetDomainNameRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetDomainNameRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetDomainNameRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the domain name resource. Required for private custom
     * domain names. </p>
     */
    inline const Aws::String& GetDomainNameId() const{ return m_domainNameId; }
    inline bool DomainNameIdHasBeenSet() const { return m_domainNameIdHasBeenSet; }
    inline void SetDomainNameId(const Aws::String& value) { m_domainNameIdHasBeenSet = true; m_domainNameId = value; }
    inline void SetDomainNameId(Aws::String&& value) { m_domainNameIdHasBeenSet = true; m_domainNameId = std::move(value); }
    inline void SetDomainNameId(const char* value) { m_domainNameIdHasBeenSet = true; m_domainNameId.assign(value); }
    inline GetDomainNameRequest& WithDomainNameId(const Aws::String& value) { SetDomainNameId(value); return *this;}
    inline GetDomainNameRequest& WithDomainNameId(Aws::String&& value) { SetDomainNameId(std::move(value)); return *this;}
    inline GetDomainNameRequest& WithDomainNameId(const char* value) { SetDomainNameId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainNameId;
    bool m_domainNameIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
