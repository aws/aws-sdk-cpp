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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the UpdateLag operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/UpdateLagRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API UpdateLagRequest : public DirectConnectRequest
  {
  public:
    UpdateLagRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the LAG to update.</p> <p>Example: dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    /**
     * <p>The ID of the LAG to update.</p> <p>Example: dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    /**
     * <p>The ID of the LAG to update.</p> <p>Example: dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    /**
     * <p>The ID of the LAG to update.</p> <p>Example: dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }

    /**
     * <p>The ID of the LAG to update.</p> <p>Example: dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline UpdateLagRequest& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG to update.</p> <p>Example: dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline UpdateLagRequest& WithLagId(Aws::String&& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG to update.</p> <p>Example: dxlag-abc123</p> <p>Default:
     * None</p>
     */
    inline UpdateLagRequest& WithLagId(const char* value) { SetLagId(value); return *this;}

    /**
     * <p>The name for the LAG.</p> <p>Example: "<code>3x10G LAG to AWS</code>"</p>
     * <p>Default: None</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }

    /**
     * <p>The name for the LAG.</p> <p>Example: "<code>3x10G LAG to AWS</code>"</p>
     * <p>Default: None</p>
     */
    inline void SetLagName(const Aws::String& value) { m_lagNameHasBeenSet = true; m_lagName = value; }

    /**
     * <p>The name for the LAG.</p> <p>Example: "<code>3x10G LAG to AWS</code>"</p>
     * <p>Default: None</p>
     */
    inline void SetLagName(Aws::String&& value) { m_lagNameHasBeenSet = true; m_lagName = value; }

    /**
     * <p>The name for the LAG.</p> <p>Example: "<code>3x10G LAG to AWS</code>"</p>
     * <p>Default: None</p>
     */
    inline void SetLagName(const char* value) { m_lagNameHasBeenSet = true; m_lagName.assign(value); }

    /**
     * <p>The name for the LAG.</p> <p>Example: "<code>3x10G LAG to AWS</code>"</p>
     * <p>Default: None</p>
     */
    inline UpdateLagRequest& WithLagName(const Aws::String& value) { SetLagName(value); return *this;}

    /**
     * <p>The name for the LAG.</p> <p>Example: "<code>3x10G LAG to AWS</code>"</p>
     * <p>Default: None</p>
     */
    inline UpdateLagRequest& WithLagName(Aws::String&& value) { SetLagName(value); return *this;}

    /**
     * <p>The name for the LAG.</p> <p>Example: "<code>3x10G LAG to AWS</code>"</p>
     * <p>Default: None</p>
     */
    inline UpdateLagRequest& WithLagName(const char* value) { SetLagName(value); return *this;}

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p> <p>Default: None</p>
     */
    inline int GetMinimumLinks() const{ return m_minimumLinks; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p> <p>Default: None</p>
     */
    inline void SetMinimumLinks(int value) { m_minimumLinksHasBeenSet = true; m_minimumLinks = value; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational.</p> <p>Default: None</p>
     */
    inline UpdateLagRequest& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}

  private:
    Aws::String m_lagId;
    bool m_lagIdHasBeenSet;
    Aws::String m_lagName;
    bool m_lagNameHasBeenSet;
    int m_minimumLinks;
    bool m_minimumLinksHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
