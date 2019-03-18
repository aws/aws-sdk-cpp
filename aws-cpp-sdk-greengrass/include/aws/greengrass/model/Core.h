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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a core.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Core">AWS API
   * Reference</a></p>
   */
  class AWS_GREENGRASS_API Core
  {
  public:
    Core();
    Core(Aws::Utils::Json::JsonView jsonValue);
    Core& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the certificate associated with the core.
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * The ARN of the certificate associated with the core.
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * The ARN of the certificate associated with the core.
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * The ARN of the certificate associated with the core.
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * The ARN of the certificate associated with the core.
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * The ARN of the certificate associated with the core.
     */
    inline Core& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * The ARN of the certificate associated with the core.
     */
    inline Core& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * The ARN of the certificate associated with the core.
     */
    inline Core& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * A descriptive or arbitrary ID for the core. This value must be unique within the
     * core definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A descriptive or arbitrary ID for the core. This value must be unique within the
     * core definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A descriptive or arbitrary ID for the core. This value must be unique within the
     * core definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A descriptive or arbitrary ID for the core. This value must be unique within the
     * core definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A descriptive or arbitrary ID for the core. This value must be unique within the
     * core definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A descriptive or arbitrary ID for the core. This value must be unique within the
     * core definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline Core& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A descriptive or arbitrary ID for the core. This value must be unique within the
     * core definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline Core& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A descriptive or arbitrary ID for the core. This value must be unique within the
     * core definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline Core& WithId(const char* value) { SetId(value); return *this;}


    /**
     * If true, the core's local shadow is automatically synced with the cloud.
     */
    inline bool GetSyncShadow() const{ return m_syncShadow; }

    /**
     * If true, the core's local shadow is automatically synced with the cloud.
     */
    inline bool SyncShadowHasBeenSet() const { return m_syncShadowHasBeenSet; }

    /**
     * If true, the core's local shadow is automatically synced with the cloud.
     */
    inline void SetSyncShadow(bool value) { m_syncShadowHasBeenSet = true; m_syncShadow = value; }

    /**
     * If true, the core's local shadow is automatically synced with the cloud.
     */
    inline Core& WithSyncShadow(bool value) { SetSyncShadow(value); return *this;}


    /**
     * The ARN of the thing which is the core.
     */
    inline const Aws::String& GetThingArn() const{ return m_thingArn; }

    /**
     * The ARN of the thing which is the core.
     */
    inline bool ThingArnHasBeenSet() const { return m_thingArnHasBeenSet; }

    /**
     * The ARN of the thing which is the core.
     */
    inline void SetThingArn(const Aws::String& value) { m_thingArnHasBeenSet = true; m_thingArn = value; }

    /**
     * The ARN of the thing which is the core.
     */
    inline void SetThingArn(Aws::String&& value) { m_thingArnHasBeenSet = true; m_thingArn = std::move(value); }

    /**
     * The ARN of the thing which is the core.
     */
    inline void SetThingArn(const char* value) { m_thingArnHasBeenSet = true; m_thingArn.assign(value); }

    /**
     * The ARN of the thing which is the core.
     */
    inline Core& WithThingArn(const Aws::String& value) { SetThingArn(value); return *this;}

    /**
     * The ARN of the thing which is the core.
     */
    inline Core& WithThingArn(Aws::String&& value) { SetThingArn(std::move(value)); return *this;}

    /**
     * The ARN of the thing which is the core.
     */
    inline Core& WithThingArn(const char* value) { SetThingArn(value); return *this;}

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
