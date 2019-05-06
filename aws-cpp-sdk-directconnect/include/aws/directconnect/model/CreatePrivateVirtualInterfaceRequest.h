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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/NewPrivateVirtualInterface.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class AWS_DIRECTCONNECT_API CreatePrivateVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    CreatePrivateVirtualInterfaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePrivateVirtualInterface"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline const NewPrivateVirtualInterface& GetNewPrivateVirtualInterface() const{ return m_newPrivateVirtualInterface; }

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline bool NewPrivateVirtualInterfaceHasBeenSet() const { return m_newPrivateVirtualInterfaceHasBeenSet; }

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline void SetNewPrivateVirtualInterface(const NewPrivateVirtualInterface& value) { m_newPrivateVirtualInterfaceHasBeenSet = true; m_newPrivateVirtualInterface = value; }

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline void SetNewPrivateVirtualInterface(NewPrivateVirtualInterface&& value) { m_newPrivateVirtualInterfaceHasBeenSet = true; m_newPrivateVirtualInterface = std::move(value); }

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithNewPrivateVirtualInterface(const NewPrivateVirtualInterface& value) { SetNewPrivateVirtualInterface(value); return *this;}

    /**
     * <p>Information about the private virtual interface.</p>
     */
    inline CreatePrivateVirtualInterfaceRequest& WithNewPrivateVirtualInterface(NewPrivateVirtualInterface&& value) { SetNewPrivateVirtualInterface(std::move(value)); return *this;}

  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    NewPrivateVirtualInterface m_newPrivateVirtualInterface;
    bool m_newPrivateVirtualInterfaceHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
