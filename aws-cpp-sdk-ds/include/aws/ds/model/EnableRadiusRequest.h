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
   * <p>Contains the inputs for the <a>EnableRadius</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/EnableRadiusRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API EnableRadiusRequest : public DirectoryServiceRequest
  {
  public:
    EnableRadiusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableRadius"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which to enable MFA.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to enable MFA.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which to enable MFA.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to enable MFA.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for which to enable MFA.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which to enable MFA.</p>
     */
    inline EnableRadiusRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to enable MFA.</p>
     */
    inline EnableRadiusRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which to enable MFA.</p>
     */
    inline EnableRadiusRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


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
    inline EnableRadiusRequest& WithRadiusSettings(const RadiusSettings& value) { SetRadiusSettings(value); return *this;}

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline EnableRadiusRequest& WithRadiusSettings(RadiusSettings&& value) { SetRadiusSettings(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    RadiusSettings m_radiusSettings;
    bool m_radiusSettingsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
