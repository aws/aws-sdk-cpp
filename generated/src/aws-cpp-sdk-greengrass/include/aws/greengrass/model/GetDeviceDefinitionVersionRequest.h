/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Greengrass
{
namespace Model
{

  /**
   */
  class GetDeviceDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetDeviceDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeviceDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * The ID of the device definition.
     */
    inline const Aws::String& GetDeviceDefinitionId() const { return m_deviceDefinitionId; }
    inline bool DeviceDefinitionIdHasBeenSet() const { return m_deviceDefinitionIdHasBeenSet; }
    template<typename DeviceDefinitionIdT = Aws::String>
    void SetDeviceDefinitionId(DeviceDefinitionIdT&& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = std::forward<DeviceDefinitionIdT>(value); }
    template<typename DeviceDefinitionIdT = Aws::String>
    GetDeviceDefinitionVersionRequest& WithDeviceDefinitionId(DeviceDefinitionIdT&& value) { SetDeviceDefinitionId(std::forward<DeviceDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the device definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListDeviceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a device definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetDeviceDefinitionVersionId() const { return m_deviceDefinitionVersionId; }
    inline bool DeviceDefinitionVersionIdHasBeenSet() const { return m_deviceDefinitionVersionIdHasBeenSet; }
    template<typename DeviceDefinitionVersionIdT = Aws::String>
    void SetDeviceDefinitionVersionId(DeviceDefinitionVersionIdT&& value) { m_deviceDefinitionVersionIdHasBeenSet = true; m_deviceDefinitionVersionId = std::forward<DeviceDefinitionVersionIdT>(value); }
    template<typename DeviceDefinitionVersionIdT = Aws::String>
    GetDeviceDefinitionVersionRequest& WithDeviceDefinitionVersionId(DeviceDefinitionVersionIdT&& value) { SetDeviceDefinitionVersionId(std::forward<DeviceDefinitionVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDeviceDefinitionVersionRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceDefinitionId;
    bool m_deviceDefinitionIdHasBeenSet = false;

    Aws::String m_deviceDefinitionVersionId;
    bool m_deviceDefinitionVersionIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
