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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>ActivateGatewayInput$ActivationKey</a> </p> </li> <li> <p>
   * <a>ActivateGatewayInput$GatewayName</a> </p> </li> <li> <p>
   * <a>ActivateGatewayInput$GatewayRegion</a> </p> </li> <li> <p>
   * <a>ActivateGatewayInput$GatewayTimezone</a> </p> </li> <li> <p>
   * <a>ActivateGatewayInput$GatewayType</a> </p> </li> <li> <p>
   * <a>ActivateGatewayInput$TapeDriveType</a> </p> </li> <li> <p>
   * <a>ActivateGatewayInput$MediumChangerType</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ActivateGatewayInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API ActivateGatewayRequest : public StorageGatewayRequest
  {
  public:
    ActivateGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ActivateGateway"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Your gateway activation key. You can obtain the activation key by sending an
     * HTTP GET request with redirects enabled to the gateway IP address (port 80). The
     * redirect URL returned in the response provides you the activation key for your
     * gateway in the query string parameter <code>activationKey</code>. It may also
     * include other activation-related parameters, however, these are merely defaults
     * -- the arguments you pass to the <code>ActivateGateway</code> API call determine
     * the actual configuration of your gateway. </p> <p>For more information, see
     * https://docs.aws.amazon.com/storagegateway/latest/userguide/get-activation-key.html
     * in the Storage Gateway User Guide.</p>
     */
    inline const Aws::String& GetActivationKey() const{ return m_activationKey; }

    /**
     * <p>Your gateway activation key. You can obtain the activation key by sending an
     * HTTP GET request with redirects enabled to the gateway IP address (port 80). The
     * redirect URL returned in the response provides you the activation key for your
     * gateway in the query string parameter <code>activationKey</code>. It may also
     * include other activation-related parameters, however, these are merely defaults
     * -- the arguments you pass to the <code>ActivateGateway</code> API call determine
     * the actual configuration of your gateway. </p> <p>For more information, see
     * https://docs.aws.amazon.com/storagegateway/latest/userguide/get-activation-key.html
     * in the Storage Gateway User Guide.</p>
     */
    inline bool ActivationKeyHasBeenSet() const { return m_activationKeyHasBeenSet; }

    /**
     * <p>Your gateway activation key. You can obtain the activation key by sending an
     * HTTP GET request with redirects enabled to the gateway IP address (port 80). The
     * redirect URL returned in the response provides you the activation key for your
     * gateway in the query string parameter <code>activationKey</code>. It may also
     * include other activation-related parameters, however, these are merely defaults
     * -- the arguments you pass to the <code>ActivateGateway</code> API call determine
     * the actual configuration of your gateway. </p> <p>For more information, see
     * https://docs.aws.amazon.com/storagegateway/latest/userguide/get-activation-key.html
     * in the Storage Gateway User Guide.</p>
     */
    inline void SetActivationKey(const Aws::String& value) { m_activationKeyHasBeenSet = true; m_activationKey = value; }

    /**
     * <p>Your gateway activation key. You can obtain the activation key by sending an
     * HTTP GET request with redirects enabled to the gateway IP address (port 80). The
     * redirect URL returned in the response provides you the activation key for your
     * gateway in the query string parameter <code>activationKey</code>. It may also
     * include other activation-related parameters, however, these are merely defaults
     * -- the arguments you pass to the <code>ActivateGateway</code> API call determine
     * the actual configuration of your gateway. </p> <p>For more information, see
     * https://docs.aws.amazon.com/storagegateway/latest/userguide/get-activation-key.html
     * in the Storage Gateway User Guide.</p>
     */
    inline void SetActivationKey(Aws::String&& value) { m_activationKeyHasBeenSet = true; m_activationKey = std::move(value); }

    /**
     * <p>Your gateway activation key. You can obtain the activation key by sending an
     * HTTP GET request with redirects enabled to the gateway IP address (port 80). The
     * redirect URL returned in the response provides you the activation key for your
     * gateway in the query string parameter <code>activationKey</code>. It may also
     * include other activation-related parameters, however, these are merely defaults
     * -- the arguments you pass to the <code>ActivateGateway</code> API call determine
     * the actual configuration of your gateway. </p> <p>For more information, see
     * https://docs.aws.amazon.com/storagegateway/latest/userguide/get-activation-key.html
     * in the Storage Gateway User Guide.</p>
     */
    inline void SetActivationKey(const char* value) { m_activationKeyHasBeenSet = true; m_activationKey.assign(value); }

    /**
     * <p>Your gateway activation key. You can obtain the activation key by sending an
     * HTTP GET request with redirects enabled to the gateway IP address (port 80). The
     * redirect URL returned in the response provides you the activation key for your
     * gateway in the query string parameter <code>activationKey</code>. It may also
     * include other activation-related parameters, however, these are merely defaults
     * -- the arguments you pass to the <code>ActivateGateway</code> API call determine
     * the actual configuration of your gateway. </p> <p>For more information, see
     * https://docs.aws.amazon.com/storagegateway/latest/userguide/get-activation-key.html
     * in the Storage Gateway User Guide.</p>
     */
    inline ActivateGatewayRequest& WithActivationKey(const Aws::String& value) { SetActivationKey(value); return *this;}

    /**
     * <p>Your gateway activation key. You can obtain the activation key by sending an
     * HTTP GET request with redirects enabled to the gateway IP address (port 80). The
     * redirect URL returned in the response provides you the activation key for your
     * gateway in the query string parameter <code>activationKey</code>. It may also
     * include other activation-related parameters, however, these are merely defaults
     * -- the arguments you pass to the <code>ActivateGateway</code> API call determine
     * the actual configuration of your gateway. </p> <p>For more information, see
     * https://docs.aws.amazon.com/storagegateway/latest/userguide/get-activation-key.html
     * in the Storage Gateway User Guide.</p>
     */
    inline ActivateGatewayRequest& WithActivationKey(Aws::String&& value) { SetActivationKey(std::move(value)); return *this;}

    /**
     * <p>Your gateway activation key. You can obtain the activation key by sending an
     * HTTP GET request with redirects enabled to the gateway IP address (port 80). The
     * redirect URL returned in the response provides you the activation key for your
     * gateway in the query string parameter <code>activationKey</code>. It may also
     * include other activation-related parameters, however, these are merely defaults
     * -- the arguments you pass to the <code>ActivateGateway</code> API call determine
     * the actual configuration of your gateway. </p> <p>For more information, see
     * https://docs.aws.amazon.com/storagegateway/latest/userguide/get-activation-key.html
     * in the Storage Gateway User Guide.</p>
     */
    inline ActivateGatewayRequest& WithActivationKey(const char* value) { SetActivationKey(value); return *this;}


    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline bool GatewayNameHasBeenSet() const { return m_gatewayNameHasBeenSet; }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(const Aws::String& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = value; }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(Aws::String&& value) { m_gatewayNameHasBeenSet = true; m_gatewayName = std::move(value); }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(const char* value) { m_gatewayNameHasBeenSet = true; m_gatewayName.assign(value); }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline ActivateGatewayRequest& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline ActivateGatewayRequest& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline ActivateGatewayRequest& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}


    /**
     * <p>A value that indicates the time zone you want to set for the gateway. The
     * time zone is of the format "GMT-hr:mm" or "GMT+hr:mm". For example, GMT-4:00
     * indicates the time is 4 hours behind GMT. GMT+2:00 indicates the time is 2 hours
     * ahead of GMT. The time zone is used, for example, for scheduling snapshots and
     * your gateway's maintenance schedule.</p>
     */
    inline const Aws::String& GetGatewayTimezone() const{ return m_gatewayTimezone; }

    /**
     * <p>A value that indicates the time zone you want to set for the gateway. The
     * time zone is of the format "GMT-hr:mm" or "GMT+hr:mm". For example, GMT-4:00
     * indicates the time is 4 hours behind GMT. GMT+2:00 indicates the time is 2 hours
     * ahead of GMT. The time zone is used, for example, for scheduling snapshots and
     * your gateway's maintenance schedule.</p>
     */
    inline bool GatewayTimezoneHasBeenSet() const { return m_gatewayTimezoneHasBeenSet; }

    /**
     * <p>A value that indicates the time zone you want to set for the gateway. The
     * time zone is of the format "GMT-hr:mm" or "GMT+hr:mm". For example, GMT-4:00
     * indicates the time is 4 hours behind GMT. GMT+2:00 indicates the time is 2 hours
     * ahead of GMT. The time zone is used, for example, for scheduling snapshots and
     * your gateway's maintenance schedule.</p>
     */
    inline void SetGatewayTimezone(const Aws::String& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = value; }

    /**
     * <p>A value that indicates the time zone you want to set for the gateway. The
     * time zone is of the format "GMT-hr:mm" or "GMT+hr:mm". For example, GMT-4:00
     * indicates the time is 4 hours behind GMT. GMT+2:00 indicates the time is 2 hours
     * ahead of GMT. The time zone is used, for example, for scheduling snapshots and
     * your gateway's maintenance schedule.</p>
     */
    inline void SetGatewayTimezone(Aws::String&& value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone = std::move(value); }

    /**
     * <p>A value that indicates the time zone you want to set for the gateway. The
     * time zone is of the format "GMT-hr:mm" or "GMT+hr:mm". For example, GMT-4:00
     * indicates the time is 4 hours behind GMT. GMT+2:00 indicates the time is 2 hours
     * ahead of GMT. The time zone is used, for example, for scheduling snapshots and
     * your gateway's maintenance schedule.</p>
     */
    inline void SetGatewayTimezone(const char* value) { m_gatewayTimezoneHasBeenSet = true; m_gatewayTimezone.assign(value); }

    /**
     * <p>A value that indicates the time zone you want to set for the gateway. The
     * time zone is of the format "GMT-hr:mm" or "GMT+hr:mm". For example, GMT-4:00
     * indicates the time is 4 hours behind GMT. GMT+2:00 indicates the time is 2 hours
     * ahead of GMT. The time zone is used, for example, for scheduling snapshots and
     * your gateway's maintenance schedule.</p>
     */
    inline ActivateGatewayRequest& WithGatewayTimezone(const Aws::String& value) { SetGatewayTimezone(value); return *this;}

    /**
     * <p>A value that indicates the time zone you want to set for the gateway. The
     * time zone is of the format "GMT-hr:mm" or "GMT+hr:mm". For example, GMT-4:00
     * indicates the time is 4 hours behind GMT. GMT+2:00 indicates the time is 2 hours
     * ahead of GMT. The time zone is used, for example, for scheduling snapshots and
     * your gateway's maintenance schedule.</p>
     */
    inline ActivateGatewayRequest& WithGatewayTimezone(Aws::String&& value) { SetGatewayTimezone(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the time zone you want to set for the gateway. The
     * time zone is of the format "GMT-hr:mm" or "GMT+hr:mm". For example, GMT-4:00
     * indicates the time is 4 hours behind GMT. GMT+2:00 indicates the time is 2 hours
     * ahead of GMT. The time zone is used, for example, for scheduling snapshots and
     * your gateway's maintenance schedule.</p>
     */
    inline ActivateGatewayRequest& WithGatewayTimezone(const char* value) { SetGatewayTimezone(value); return *this;}


    /**
     * <p>A value that indicates the region where you want to store your data. The
     * gateway region specified must be the same region as the region in your
     * <code>Host</code> header in the request. For more information about available
     * regions and endpoints for AWS Storage Gateway, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">Regions
     * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p> <p> Valid
     * Values: See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS
     * Storage Gateway Regions and Endpoints</a> in the AWS General Reference. </p>
     */
    inline const Aws::String& GetGatewayRegion() const{ return m_gatewayRegion; }

    /**
     * <p>A value that indicates the region where you want to store your data. The
     * gateway region specified must be the same region as the region in your
     * <code>Host</code> header in the request. For more information about available
     * regions and endpoints for AWS Storage Gateway, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">Regions
     * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p> <p> Valid
     * Values: See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS
     * Storage Gateway Regions and Endpoints</a> in the AWS General Reference. </p>
     */
    inline bool GatewayRegionHasBeenSet() const { return m_gatewayRegionHasBeenSet; }

    /**
     * <p>A value that indicates the region where you want to store your data. The
     * gateway region specified must be the same region as the region in your
     * <code>Host</code> header in the request. For more information about available
     * regions and endpoints for AWS Storage Gateway, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">Regions
     * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p> <p> Valid
     * Values: See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS
     * Storage Gateway Regions and Endpoints</a> in the AWS General Reference. </p>
     */
    inline void SetGatewayRegion(const Aws::String& value) { m_gatewayRegionHasBeenSet = true; m_gatewayRegion = value; }

    /**
     * <p>A value that indicates the region where you want to store your data. The
     * gateway region specified must be the same region as the region in your
     * <code>Host</code> header in the request. For more information about available
     * regions and endpoints for AWS Storage Gateway, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">Regions
     * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p> <p> Valid
     * Values: See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS
     * Storage Gateway Regions and Endpoints</a> in the AWS General Reference. </p>
     */
    inline void SetGatewayRegion(Aws::String&& value) { m_gatewayRegionHasBeenSet = true; m_gatewayRegion = std::move(value); }

    /**
     * <p>A value that indicates the region where you want to store your data. The
     * gateway region specified must be the same region as the region in your
     * <code>Host</code> header in the request. For more information about available
     * regions and endpoints for AWS Storage Gateway, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">Regions
     * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p> <p> Valid
     * Values: See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS
     * Storage Gateway Regions and Endpoints</a> in the AWS General Reference. </p>
     */
    inline void SetGatewayRegion(const char* value) { m_gatewayRegionHasBeenSet = true; m_gatewayRegion.assign(value); }

    /**
     * <p>A value that indicates the region where you want to store your data. The
     * gateway region specified must be the same region as the region in your
     * <code>Host</code> header in the request. For more information about available
     * regions and endpoints for AWS Storage Gateway, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">Regions
     * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p> <p> Valid
     * Values: See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS
     * Storage Gateway Regions and Endpoints</a> in the AWS General Reference. </p>
     */
    inline ActivateGatewayRequest& WithGatewayRegion(const Aws::String& value) { SetGatewayRegion(value); return *this;}

    /**
     * <p>A value that indicates the region where you want to store your data. The
     * gateway region specified must be the same region as the region in your
     * <code>Host</code> header in the request. For more information about available
     * regions and endpoints for AWS Storage Gateway, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">Regions
     * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p> <p> Valid
     * Values: See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS
     * Storage Gateway Regions and Endpoints</a> in the AWS General Reference. </p>
     */
    inline ActivateGatewayRequest& WithGatewayRegion(Aws::String&& value) { SetGatewayRegion(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the region where you want to store your data. The
     * gateway region specified must be the same region as the region in your
     * <code>Host</code> header in the request. For more information about available
     * regions and endpoints for AWS Storage Gateway, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">Regions
     * and Endpoints</a> in the <i>Amazon Web Services Glossary</i>.</p> <p> Valid
     * Values: See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sg_region">AWS
     * Storage Gateway Regions and Endpoints</a> in the AWS General Reference. </p>
     */
    inline ActivateGatewayRequest& WithGatewayRegion(const char* value) { SetGatewayRegion(value); return *this;}


    /**
     * <p>A value that defines the type of gateway to activate. The type specified is
     * critical to all later functions of the gateway and cannot be changed after
     * activation. The default value is <code>CACHED</code>. </p> <p> Valid Values:
     * "STORED", "CACHED", "VTL", "FILE_S3"</p>
     */
    inline const Aws::String& GetGatewayType() const{ return m_gatewayType; }

    /**
     * <p>A value that defines the type of gateway to activate. The type specified is
     * critical to all later functions of the gateway and cannot be changed after
     * activation. The default value is <code>CACHED</code>. </p> <p> Valid Values:
     * "STORED", "CACHED", "VTL", "FILE_S3"</p>
     */
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }

    /**
     * <p>A value that defines the type of gateway to activate. The type specified is
     * critical to all later functions of the gateway and cannot be changed after
     * activation. The default value is <code>CACHED</code>. </p> <p> Valid Values:
     * "STORED", "CACHED", "VTL", "FILE_S3"</p>
     */
    inline void SetGatewayType(const Aws::String& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }

    /**
     * <p>A value that defines the type of gateway to activate. The type specified is
     * critical to all later functions of the gateway and cannot be changed after
     * activation. The default value is <code>CACHED</code>. </p> <p> Valid Values:
     * "STORED", "CACHED", "VTL", "FILE_S3"</p>
     */
    inline void SetGatewayType(Aws::String&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = std::move(value); }

    /**
     * <p>A value that defines the type of gateway to activate. The type specified is
     * critical to all later functions of the gateway and cannot be changed after
     * activation. The default value is <code>CACHED</code>. </p> <p> Valid Values:
     * "STORED", "CACHED", "VTL", "FILE_S3"</p>
     */
    inline void SetGatewayType(const char* value) { m_gatewayTypeHasBeenSet = true; m_gatewayType.assign(value); }

    /**
     * <p>A value that defines the type of gateway to activate. The type specified is
     * critical to all later functions of the gateway and cannot be changed after
     * activation. The default value is <code>CACHED</code>. </p> <p> Valid Values:
     * "STORED", "CACHED", "VTL", "FILE_S3"</p>
     */
    inline ActivateGatewayRequest& WithGatewayType(const Aws::String& value) { SetGatewayType(value); return *this;}

    /**
     * <p>A value that defines the type of gateway to activate. The type specified is
     * critical to all later functions of the gateway and cannot be changed after
     * activation. The default value is <code>CACHED</code>. </p> <p> Valid Values:
     * "STORED", "CACHED", "VTL", "FILE_S3"</p>
     */
    inline ActivateGatewayRequest& WithGatewayType(Aws::String&& value) { SetGatewayType(std::move(value)); return *this;}

    /**
     * <p>A value that defines the type of gateway to activate. The type specified is
     * critical to all later functions of the gateway and cannot be changed after
     * activation. The default value is <code>CACHED</code>. </p> <p> Valid Values:
     * "STORED", "CACHED", "VTL", "FILE_S3"</p>
     */
    inline ActivateGatewayRequest& WithGatewayType(const char* value) { SetGatewayType(value); return *this;}


    /**
     * <p>The value that indicates the type of tape drive to use for tape gateway. This
     * field is optional.</p> <p> Valid Values: "IBM-ULT3580-TD5" </p>
     */
    inline const Aws::String& GetTapeDriveType() const{ return m_tapeDriveType; }

    /**
     * <p>The value that indicates the type of tape drive to use for tape gateway. This
     * field is optional.</p> <p> Valid Values: "IBM-ULT3580-TD5" </p>
     */
    inline bool TapeDriveTypeHasBeenSet() const { return m_tapeDriveTypeHasBeenSet; }

    /**
     * <p>The value that indicates the type of tape drive to use for tape gateway. This
     * field is optional.</p> <p> Valid Values: "IBM-ULT3580-TD5" </p>
     */
    inline void SetTapeDriveType(const Aws::String& value) { m_tapeDriveTypeHasBeenSet = true; m_tapeDriveType = value; }

    /**
     * <p>The value that indicates the type of tape drive to use for tape gateway. This
     * field is optional.</p> <p> Valid Values: "IBM-ULT3580-TD5" </p>
     */
    inline void SetTapeDriveType(Aws::String&& value) { m_tapeDriveTypeHasBeenSet = true; m_tapeDriveType = std::move(value); }

    /**
     * <p>The value that indicates the type of tape drive to use for tape gateway. This
     * field is optional.</p> <p> Valid Values: "IBM-ULT3580-TD5" </p>
     */
    inline void SetTapeDriveType(const char* value) { m_tapeDriveTypeHasBeenSet = true; m_tapeDriveType.assign(value); }

    /**
     * <p>The value that indicates the type of tape drive to use for tape gateway. This
     * field is optional.</p> <p> Valid Values: "IBM-ULT3580-TD5" </p>
     */
    inline ActivateGatewayRequest& WithTapeDriveType(const Aws::String& value) { SetTapeDriveType(value); return *this;}

    /**
     * <p>The value that indicates the type of tape drive to use for tape gateway. This
     * field is optional.</p> <p> Valid Values: "IBM-ULT3580-TD5" </p>
     */
    inline ActivateGatewayRequest& WithTapeDriveType(Aws::String&& value) { SetTapeDriveType(std::move(value)); return *this;}

    /**
     * <p>The value that indicates the type of tape drive to use for tape gateway. This
     * field is optional.</p> <p> Valid Values: "IBM-ULT3580-TD5" </p>
     */
    inline ActivateGatewayRequest& WithTapeDriveType(const char* value) { SetTapeDriveType(value); return *this;}


    /**
     * <p>The value that indicates the type of medium changer to use for tape gateway.
     * This field is optional.</p> <p> Valid Values: "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline const Aws::String& GetMediumChangerType() const{ return m_mediumChangerType; }

    /**
     * <p>The value that indicates the type of medium changer to use for tape gateway.
     * This field is optional.</p> <p> Valid Values: "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline bool MediumChangerTypeHasBeenSet() const { return m_mediumChangerTypeHasBeenSet; }

    /**
     * <p>The value that indicates the type of medium changer to use for tape gateway.
     * This field is optional.</p> <p> Valid Values: "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline void SetMediumChangerType(const Aws::String& value) { m_mediumChangerTypeHasBeenSet = true; m_mediumChangerType = value; }

    /**
     * <p>The value that indicates the type of medium changer to use for tape gateway.
     * This field is optional.</p> <p> Valid Values: "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline void SetMediumChangerType(Aws::String&& value) { m_mediumChangerTypeHasBeenSet = true; m_mediumChangerType = std::move(value); }

    /**
     * <p>The value that indicates the type of medium changer to use for tape gateway.
     * This field is optional.</p> <p> Valid Values: "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline void SetMediumChangerType(const char* value) { m_mediumChangerTypeHasBeenSet = true; m_mediumChangerType.assign(value); }

    /**
     * <p>The value that indicates the type of medium changer to use for tape gateway.
     * This field is optional.</p> <p> Valid Values: "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline ActivateGatewayRequest& WithMediumChangerType(const Aws::String& value) { SetMediumChangerType(value); return *this;}

    /**
     * <p>The value that indicates the type of medium changer to use for tape gateway.
     * This field is optional.</p> <p> Valid Values: "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline ActivateGatewayRequest& WithMediumChangerType(Aws::String&& value) { SetMediumChangerType(std::move(value)); return *this;}

    /**
     * <p>The value that indicates the type of medium changer to use for tape gateway.
     * This field is optional.</p> <p> Valid Values: "STK-L700", "AWS-Gateway-VTL"</p>
     */
    inline ActivateGatewayRequest& WithMediumChangerType(const char* value) { SetMediumChangerType(value); return *this;}


    /**
     * <p>A list of up to 50 tags that can be assigned to the gateway. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the gateway. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the gateway. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the gateway. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags that can be assigned to the gateway. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline ActivateGatewayRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to the gateway. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline ActivateGatewayRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags that can be assigned to the gateway. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline ActivateGatewayRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags that can be assigned to the gateway. Each tag is a
     * key-value pair.</p> <note> <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> </note>
     */
    inline ActivateGatewayRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_activationKey;
    bool m_activationKeyHasBeenSet;

    Aws::String m_gatewayName;
    bool m_gatewayNameHasBeenSet;

    Aws::String m_gatewayTimezone;
    bool m_gatewayTimezoneHasBeenSet;

    Aws::String m_gatewayRegion;
    bool m_gatewayRegionHasBeenSet;

    Aws::String m_gatewayType;
    bool m_gatewayTypeHasBeenSet;

    Aws::String m_tapeDriveType;
    bool m_tapeDriveTypeHasBeenSet;

    Aws::String m_mediumChangerType;
    bool m_mediumChangerTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
