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
  class AWS_GREENGRASS_API GetDeviceDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetDeviceDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeviceDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The ID of the device definition.
     */
    inline const Aws::String& GetDeviceDefinitionId() const{ return m_deviceDefinitionId; }

    /**
     * The ID of the device definition.
     */
    inline bool DeviceDefinitionIdHasBeenSet() const { return m_deviceDefinitionIdHasBeenSet; }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(const Aws::String& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = value; }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(Aws::String&& value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId = std::move(value); }

    /**
     * The ID of the device definition.
     */
    inline void SetDeviceDefinitionId(const char* value) { m_deviceDefinitionIdHasBeenSet = true; m_deviceDefinitionId.assign(value); }

    /**
     * The ID of the device definition.
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionId(const Aws::String& value) { SetDeviceDefinitionId(value); return *this;}

    /**
     * The ID of the device definition.
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionId(Aws::String&& value) { SetDeviceDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the device definition.
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionId(const char* value) { SetDeviceDefinitionId(value); return *this;}


    /**
     * The ID of the device definition version.
     */
    inline const Aws::String& GetDeviceDefinitionVersionId() const{ return m_deviceDefinitionVersionId; }

    /**
     * The ID of the device definition version.
     */
    inline bool DeviceDefinitionVersionIdHasBeenSet() const { return m_deviceDefinitionVersionIdHasBeenSet; }

    /**
     * The ID of the device definition version.
     */
    inline void SetDeviceDefinitionVersionId(const Aws::String& value) { m_deviceDefinitionVersionIdHasBeenSet = true; m_deviceDefinitionVersionId = value; }

    /**
     * The ID of the device definition version.
     */
    inline void SetDeviceDefinitionVersionId(Aws::String&& value) { m_deviceDefinitionVersionIdHasBeenSet = true; m_deviceDefinitionVersionId = std::move(value); }

    /**
     * The ID of the device definition version.
     */
    inline void SetDeviceDefinitionVersionId(const char* value) { m_deviceDefinitionVersionIdHasBeenSet = true; m_deviceDefinitionVersionId.assign(value); }

    /**
     * The ID of the device definition version.
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionVersionId(const Aws::String& value) { SetDeviceDefinitionVersionId(value); return *this;}

    /**
     * The ID of the device definition version.
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionVersionId(Aws::String&& value) { SetDeviceDefinitionVersionId(std::move(value)); return *this;}

    /**
     * The ID of the device definition version.
     */
    inline GetDeviceDefinitionVersionRequest& WithDeviceDefinitionVersionId(const char* value) { SetDeviceDefinitionVersionId(value); return *this;}


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetDeviceDefinitionVersionRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetDeviceDefinitionVersionRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetDeviceDefinitionVersionRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_deviceDefinitionId;
    bool m_deviceDefinitionIdHasBeenSet;

    Aws::String m_deviceDefinitionVersionId;
    bool m_deviceDefinitionVersionIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
