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
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information on a Device<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Device">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Device
  {
  public:
    Device();
    Device(const Aws::Utils::Json::JsonValue& jsonValue);
    Device& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Certificate arn of the device.
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * Certificate arn of the device.
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * Certificate arn of the device.
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * Certificate arn of the device.
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * Certificate arn of the device.
     */
    inline Device& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * Certificate arn of the device.
     */
    inline Device& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * Certificate arn of the device.
     */
    inline Device& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * Element Id for this entry in the list.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Element Id for this entry in the list.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Element Id for this entry in the list.
     */
    inline Device& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Element Id for this entry in the list.
     */
    inline Device& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Element Id for this entry in the list.
     */
    inline Device& WithId(const char* value) { SetId(value); return *this;}


    /**
     * If true, the local shadow value automatically syncs with the cloud's shadow
     * state.
     */
    inline bool GetSyncShadow() const{ return m_syncShadow; }

    /**
     * If true, the local shadow value automatically syncs with the cloud's shadow
     * state.
     */
    inline void SetSyncShadow(bool value) { m_syncShadowHasBeenSet = true; m_syncShadow = value; }

    /**
     * If true, the local shadow value automatically syncs with the cloud's shadow
     * state.
     */
    inline Device& WithSyncShadow(bool value) { SetSyncShadow(value); return *this;}


    /**
     * Thing arn of the device.
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * Thing arn of the device.
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * Thing arn of the device.
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * Thing arn of the device.
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * Thing arn of the device.
     */
    inline Device& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * Thing arn of the device.
     */
    inline Device& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * Thing arn of the device.
     */
    inline Device& WithThingArn(const char* value) { SetThingArn(value); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    bool m_syncShadow;
    bool m_syncShadowHasBeenSet;

    Aws::String m_thingArn;
    bool m_thingArnHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
