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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/mediaconnect/model/Transport.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The settings for an output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Output">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API Output
  {
  public:
    Output();
    Output(Aws::Utils::Json::JsonView jsonValue);
    Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A description of the output.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description of the output.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description of the output.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description of the output.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description of the output.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description of the output.
     */
    inline Output& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description of the output.
     */
    inline Output& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description of the output.
     */
    inline Output& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The address where you want to send the output.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * The address where you want to send the output.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * The address where you want to send the output.
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * The address where you want to send the output.
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * The address where you want to send the output.
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * The address where you want to send the output.
     */
    inline Output& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * The address where you want to send the output.
     */
    inline Output& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * The address where you want to send the output.
     */
    inline Output& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline Output& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}

    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline Output& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline Output& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline Output& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline Output& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline const Aws::String& GetMediaLiveInputArn() const{ return m_mediaLiveInputArn; }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline bool MediaLiveInputArnHasBeenSet() const { return m_mediaLiveInputArnHasBeenSet; }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline void SetMediaLiveInputArn(const Aws::String& value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn = value; }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline void SetMediaLiveInputArn(Aws::String&& value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn = std::move(value); }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline void SetMediaLiveInputArn(const char* value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn.assign(value); }

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline Output& WithMediaLiveInputArn(const Aws::String& value) { SetMediaLiveInputArn(value); return *this;}

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline Output& WithMediaLiveInputArn(Aws::String&& value) { SetMediaLiveInputArn(std::move(value)); return *this;}

    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline Output& WithMediaLiveInputArn(const char* value) { SetMediaLiveInputArn(value); return *this;}


    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline Output& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline Output& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline Output& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The ARN of the output.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }

    /**
     * The ARN of the output.
     */
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }

    /**
     * The ARN of the output.
     */
    inline void SetOutputArn(const Aws::String& value) { m_outputArnHasBeenSet = true; m_outputArn = value; }

    /**
     * The ARN of the output.
     */
    inline void SetOutputArn(Aws::String&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::move(value); }

    /**
     * The ARN of the output.
     */
    inline void SetOutputArn(const char* value) { m_outputArnHasBeenSet = true; m_outputArn.assign(value); }

    /**
     * The ARN of the output.
     */
    inline Output& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}

    /**
     * The ARN of the output.
     */
    inline Output& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}

    /**
     * The ARN of the output.
     */
    inline Output& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}


    /**
     * The port to use when content is distributed to this output.
     */
    inline int GetPort() const{ return m_port; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * The port to use when content is distributed to this output.
     */
    inline Output& WithPort(int value) { SetPort(value); return *this;}


    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline const Transport& GetTransport() const{ return m_transport; }

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline void SetTransport(const Transport& value) { m_transportHasBeenSet = true; m_transport = value; }

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline void SetTransport(Transport&& value) { m_transportHasBeenSet = true; m_transport = std::move(value); }

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline Output& WithTransport(const Transport& value) { SetTransport(value); return *this;}

    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline Output& WithTransport(Transport&& value) { SetTransport(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_destination;
    bool m_destinationHasBeenSet;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet;

    Aws::String m_mediaLiveInputArn;
    bool m_mediaLiveInputArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_outputArn;
    bool m_outputArnHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Transport m_transport;
    bool m_transportHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
