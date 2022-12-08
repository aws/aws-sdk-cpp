/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/RadiusSettings.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>UpdateRadius</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateRadiusRequest">AWS
   * API Reference</a></p>
   */
  class UpdateRadiusRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateRadiusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRadius"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to update the RADIUS server
     * information.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

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
    inline UpdateRadiusRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

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
    inline bool RadiusSettingsHasBeenSet() const { return m_radiusSettingsHasBeenSet; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline void SetRadiusSettings(const RadiusSettings& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = value; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline void SetRadiusSettings(RadiusSettings&& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = std::move(value); }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline UpdateRadiusRequest& WithRadiusSettings(const RadiusSettings& value) { SetRadiusSettings(value); return *this;}

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline UpdateRadiusRequest& WithRadiusSettings(RadiusSettings&& value) { SetRadiusSettings(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    RadiusSettings m_radiusSettings;
    bool m_radiusSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
