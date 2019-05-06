/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/MarketplaceMeteringRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>Contains input to the ResolveCustomer operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomerRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MARKETPLACEMETERING_API ResolveCustomerRequest : public MarketplaceMeteringRequest
  {
  public:
    ResolveCustomerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResolveCustomer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a CustomerIdentifier and product code.</p>
     */
    inline const Aws::String& GetRegistrationToken() const{ return m_registrationToken; }

    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a CustomerIdentifier and product code.</p>
     */
    inline bool RegistrationTokenHasBeenSet() const { return m_registrationTokenHasBeenSet; }

    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a CustomerIdentifier and product code.</p>
     */
    inline void SetRegistrationToken(const Aws::String& value) { m_registrationTokenHasBeenSet = true; m_registrationToken = value; }

    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a CustomerIdentifier and product code.</p>
     */
    inline void SetRegistrationToken(Aws::String&& value) { m_registrationTokenHasBeenSet = true; m_registrationToken = std::move(value); }

    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a CustomerIdentifier and product code.</p>
     */
    inline void SetRegistrationToken(const char* value) { m_registrationTokenHasBeenSet = true; m_registrationToken.assign(value); }

    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a CustomerIdentifier and product code.</p>
     */
    inline ResolveCustomerRequest& WithRegistrationToken(const Aws::String& value) { SetRegistrationToken(value); return *this;}

    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a CustomerIdentifier and product code.</p>
     */
    inline ResolveCustomerRequest& WithRegistrationToken(Aws::String&& value) { SetRegistrationToken(std::move(value)); return *this;}

    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a CustomerIdentifier and product code.</p>
     */
    inline ResolveCustomerRequest& WithRegistrationToken(const char* value) { SetRegistrationToken(value); return *this;}

  private:

    Aws::String m_registrationToken;
    bool m_registrationTokenHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
