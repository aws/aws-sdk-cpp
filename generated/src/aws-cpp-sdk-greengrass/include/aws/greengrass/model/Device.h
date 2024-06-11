/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Device">AWS
   * API Reference</a></p>
   */
  class Device
  {
  public:
    AWS_GREENGRASS_API Device();
    AWS_GREENGRASS_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the certificate associated with the device.
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline Device& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline Device& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline Device& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A descriptive or arbitrary ID for the device. This value must be unique within
     * the device definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Device& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Device& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Device& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * If true, the device's local shadow will be automatically synced with the cloud.
     */
    inline bool GetSyncShadow() const{ return m_syncShadow; }
    inline bool SyncShadowHasBeenSet() const { return m_syncShadowHasBeenSet; }
    inline void SetSyncShadow(bool value) { m_syncShadowHasBeenSet = true; m_syncShadow = value; }
    inline Device& WithSyncShadow(bool value) { SetSyncShadow(value); return *this;}
    ///@}

    ///@{
    /**
     * The thing ARN of the device.
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }
    inline Device& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}
    inline Device& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}
    inline Device& WithThingArn(const char* value) { SetThingArn(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_syncShadow;
    bool m_syncShadowHasBeenSet = false;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
