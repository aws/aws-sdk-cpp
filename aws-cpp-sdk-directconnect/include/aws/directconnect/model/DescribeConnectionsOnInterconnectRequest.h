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
   * <p>Container for the parameters to the DescribeConnectionsOnInterconnect
   * operation.</p>
   */
  class AWS_DIRECTCONNECT_API DescribeConnectionsOnInterconnectRequest : public DirectConnectRequest
  {
  public:
    DescribeConnectionsOnInterconnectRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>ID of the interconnect on which a list of connection is provisioned.</p>
     * <p>Example: dxcon-abc123</p> <p>Default: None</p>
     */
    inline const Aws::String& GetInterconnectId() const{ return m_interconnectId; }

    /**
     * <p>ID of the interconnect on which a list of connection is provisioned.</p>
     * <p>Example: dxcon-abc123</p> <p>Default: None</p>
     */
    inline void SetInterconnectId(const Aws::String& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = value; }

    /**
     * <p>ID of the interconnect on which a list of connection is provisioned.</p>
     * <p>Example: dxcon-abc123</p> <p>Default: None</p>
     */
    inline void SetInterconnectId(Aws::String&& value) { m_interconnectIdHasBeenSet = true; m_interconnectId = value; }

    /**
     * <p>ID of the interconnect on which a list of connection is provisioned.</p>
     * <p>Example: dxcon-abc123</p> <p>Default: None</p>
     */
    inline void SetInterconnectId(const char* value) { m_interconnectIdHasBeenSet = true; m_interconnectId.assign(value); }

    /**
     * <p>ID of the interconnect on which a list of connection is provisioned.</p>
     * <p>Example: dxcon-abc123</p> <p>Default: None</p>
     */
    inline DescribeConnectionsOnInterconnectRequest& WithInterconnectId(const Aws::String& value) { SetInterconnectId(value); return *this;}

    /**
     * <p>ID of the interconnect on which a list of connection is provisioned.</p>
     * <p>Example: dxcon-abc123</p> <p>Default: None</p>
     */
    inline DescribeConnectionsOnInterconnectRequest& WithInterconnectId(Aws::String&& value) { SetInterconnectId(value); return *this;}

    /**
     * <p>ID of the interconnect on which a list of connection is provisioned.</p>
     * <p>Example: dxcon-abc123</p> <p>Default: None</p>
     */
    inline DescribeConnectionsOnInterconnectRequest& WithInterconnectId(const char* value) { SetInterconnectId(value); return *this;}

  private:
    Aws::String m_interconnectId;
    bool m_interconnectIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
