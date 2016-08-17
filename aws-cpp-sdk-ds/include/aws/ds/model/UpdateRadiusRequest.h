/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/RadiusSettings.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>UpdateRadius</a> operation.</p>
   */
  class AWS_DIRECTORYSERVICE_API UpdateRadiusRequest : public DirectoryServiceRequest
  {
  public:
    UpdateRadiusRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline UpdateRadiusRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline UpdateRadiusRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline UpdateRadiusRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline const RadiusSettings& GetRadiusSettings() const{ return m_radiusSettings; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline void SetRadiusSettings(const RadiusSettings& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = value; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline void SetRadiusSettings(RadiusSettings&& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = value; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline UpdateRadiusRequest& WithRadiusSettings(const RadiusSettings& value) { SetRadiusSettings(value); return *this;}

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline UpdateRadiusRequest& WithRadiusSettings(RadiusSettings&& value) { SetRadiusSettings(value); return *this;}

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    RadiusSettings m_radiusSettings;
    bool m_radiusSettingsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
