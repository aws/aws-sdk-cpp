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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API RegisterAVSDeviceRequest : public AlexaForBusinessRequest
  {
  public:
    RegisterAVSDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAVSDevice"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The client ID of the OEM used for code-based linking authorization on an AVS
     * device.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client ID of the OEM used for code-based linking authorization on an AVS
     * device.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The client ID of the OEM used for code-based linking authorization on an AVS
     * device.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID of the OEM used for code-based linking authorization on an AVS
     * device.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The client ID of the OEM used for code-based linking authorization on an AVS
     * device.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client ID of the OEM used for code-based linking authorization on an AVS
     * device.</p>
     */
    inline RegisterAVSDeviceRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID of the OEM used for code-based linking authorization on an AVS
     * device.</p>
     */
    inline RegisterAVSDeviceRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The client ID of the OEM used for code-based linking authorization on an AVS
     * device.</p>
     */
    inline RegisterAVSDeviceRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The code that is obtained after your AVS device has made a POST request to
     * LWA as a part of the Device Authorization Request component of the OAuth
     * code-based linking specification.</p>
     */
    inline const Aws::String& GetUserCode() const{ return m_userCode; }

    /**
     * <p>The code that is obtained after your AVS device has made a POST request to
     * LWA as a part of the Device Authorization Request component of the OAuth
     * code-based linking specification.</p>
     */
    inline bool UserCodeHasBeenSet() const { return m_userCodeHasBeenSet; }

    /**
     * <p>The code that is obtained after your AVS device has made a POST request to
     * LWA as a part of the Device Authorization Request component of the OAuth
     * code-based linking specification.</p>
     */
    inline void SetUserCode(const Aws::String& value) { m_userCodeHasBeenSet = true; m_userCode = value; }

    /**
     * <p>The code that is obtained after your AVS device has made a POST request to
     * LWA as a part of the Device Authorization Request component of the OAuth
     * code-based linking specification.</p>
     */
    inline void SetUserCode(Aws::String&& value) { m_userCodeHasBeenSet = true; m_userCode = std::move(value); }

    /**
     * <p>The code that is obtained after your AVS device has made a POST request to
     * LWA as a part of the Device Authorization Request component of the OAuth
     * code-based linking specification.</p>
     */
    inline void SetUserCode(const char* value) { m_userCodeHasBeenSet = true; m_userCode.assign(value); }

    /**
     * <p>The code that is obtained after your AVS device has made a POST request to
     * LWA as a part of the Device Authorization Request component of the OAuth
     * code-based linking specification.</p>
     */
    inline RegisterAVSDeviceRequest& WithUserCode(const Aws::String& value) { SetUserCode(value); return *this;}

    /**
     * <p>The code that is obtained after your AVS device has made a POST request to
     * LWA as a part of the Device Authorization Request component of the OAuth
     * code-based linking specification.</p>
     */
    inline RegisterAVSDeviceRequest& WithUserCode(Aws::String&& value) { SetUserCode(std::move(value)); return *this;}

    /**
     * <p>The code that is obtained after your AVS device has made a POST request to
     * LWA as a part of the Device Authorization Request component of the OAuth
     * code-based linking specification.</p>
     */
    inline RegisterAVSDeviceRequest& WithUserCode(const char* value) { SetUserCode(value); return *this;}


    /**
     * <p>The product ID used to identify your AVS device during authorization.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product ID used to identify your AVS device during authorization.</p>
     */
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }

    /**
     * <p>The product ID used to identify your AVS device during authorization.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productIdHasBeenSet = true; m_productId = value; }

    /**
     * <p>The product ID used to identify your AVS device during authorization.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productIdHasBeenSet = true; m_productId = std::move(value); }

    /**
     * <p>The product ID used to identify your AVS device during authorization.</p>
     */
    inline void SetProductId(const char* value) { m_productIdHasBeenSet = true; m_productId.assign(value); }

    /**
     * <p>The product ID used to identify your AVS device during authorization.</p>
     */
    inline RegisterAVSDeviceRequest& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product ID used to identify your AVS device during authorization.</p>
     */
    inline RegisterAVSDeviceRequest& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product ID used to identify your AVS device during authorization.</p>
     */
    inline RegisterAVSDeviceRequest& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>The key generated by the OEM that uniquely identifies a specified instance of
     * your AVS device.</p>
     */
    inline const Aws::String& GetDeviceSerialNumber() const{ return m_deviceSerialNumber; }

    /**
     * <p>The key generated by the OEM that uniquely identifies a specified instance of
     * your AVS device.</p>
     */
    inline bool DeviceSerialNumberHasBeenSet() const { return m_deviceSerialNumberHasBeenSet; }

    /**
     * <p>The key generated by the OEM that uniquely identifies a specified instance of
     * your AVS device.</p>
     */
    inline void SetDeviceSerialNumber(const Aws::String& value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber = value; }

    /**
     * <p>The key generated by the OEM that uniquely identifies a specified instance of
     * your AVS device.</p>
     */
    inline void SetDeviceSerialNumber(Aws::String&& value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber = std::move(value); }

    /**
     * <p>The key generated by the OEM that uniquely identifies a specified instance of
     * your AVS device.</p>
     */
    inline void SetDeviceSerialNumber(const char* value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber.assign(value); }

    /**
     * <p>The key generated by the OEM that uniquely identifies a specified instance of
     * your AVS device.</p>
     */
    inline RegisterAVSDeviceRequest& WithDeviceSerialNumber(const Aws::String& value) { SetDeviceSerialNumber(value); return *this;}

    /**
     * <p>The key generated by the OEM that uniquely identifies a specified instance of
     * your AVS device.</p>
     */
    inline RegisterAVSDeviceRequest& WithDeviceSerialNumber(Aws::String&& value) { SetDeviceSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The key generated by the OEM that uniquely identifies a specified instance of
     * your AVS device.</p>
     */
    inline RegisterAVSDeviceRequest& WithDeviceSerialNumber(const char* value) { SetDeviceSerialNumber(value); return *this;}


    /**
     * <p>The device type ID for your AVS device generated by Amazon when the OEM
     * creates a new product on Amazon's Developer Console.</p>
     */
    inline const Aws::String& GetAmazonId() const{ return m_amazonId; }

    /**
     * <p>The device type ID for your AVS device generated by Amazon when the OEM
     * creates a new product on Amazon's Developer Console.</p>
     */
    inline bool AmazonIdHasBeenSet() const { return m_amazonIdHasBeenSet; }

    /**
     * <p>The device type ID for your AVS device generated by Amazon when the OEM
     * creates a new product on Amazon's Developer Console.</p>
     */
    inline void SetAmazonId(const Aws::String& value) { m_amazonIdHasBeenSet = true; m_amazonId = value; }

    /**
     * <p>The device type ID for your AVS device generated by Amazon when the OEM
     * creates a new product on Amazon's Developer Console.</p>
     */
    inline void SetAmazonId(Aws::String&& value) { m_amazonIdHasBeenSet = true; m_amazonId = std::move(value); }

    /**
     * <p>The device type ID for your AVS device generated by Amazon when the OEM
     * creates a new product on Amazon's Developer Console.</p>
     */
    inline void SetAmazonId(const char* value) { m_amazonIdHasBeenSet = true; m_amazonId.assign(value); }

    /**
     * <p>The device type ID for your AVS device generated by Amazon when the OEM
     * creates a new product on Amazon's Developer Console.</p>
     */
    inline RegisterAVSDeviceRequest& WithAmazonId(const Aws::String& value) { SetAmazonId(value); return *this;}

    /**
     * <p>The device type ID for your AVS device generated by Amazon when the OEM
     * creates a new product on Amazon's Developer Console.</p>
     */
    inline RegisterAVSDeviceRequest& WithAmazonId(Aws::String&& value) { SetAmazonId(std::move(value)); return *this;}

    /**
     * <p>The device type ID for your AVS device generated by Amazon when the OEM
     * creates a new product on Amazon's Developer Console.</p>
     */
    inline RegisterAVSDeviceRequest& WithAmazonId(const char* value) { SetAmazonId(value); return *this;}

  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_userCode;
    bool m_userCodeHasBeenSet;

    Aws::String m_productId;
    bool m_productIdHasBeenSet;

    Aws::String m_deviceSerialNumber;
    bool m_deviceSerialNumberHasBeenSet;

    Aws::String m_amazonId;
    bool m_amazonIdHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
