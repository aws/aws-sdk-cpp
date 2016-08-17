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
#include <aws/directconnect/model/NewPublicVirtualInterface.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the CreatePublicVirtualInterface
   * operation.</p>
   */
  class AWS_DIRECTCONNECT_API CreatePublicVirtualInterfaceRequest : public DirectConnectRequest
  {
  public:
    CreatePublicVirtualInterfaceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    
    inline CreatePublicVirtualInterfaceRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    
    inline CreatePublicVirtualInterfaceRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    
    inline CreatePublicVirtualInterfaceRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    /**
     * <p>Detailed information for the public virtual interface to be created.</p>
     * <p>Default: None</p>
     */
    inline const NewPublicVirtualInterface& GetNewPublicVirtualInterface() const{ return m_newPublicVirtualInterface; }

    /**
     * <p>Detailed information for the public virtual interface to be created.</p>
     * <p>Default: None</p>
     */
    inline void SetNewPublicVirtualInterface(const NewPublicVirtualInterface& value) { m_newPublicVirtualInterfaceHasBeenSet = true; m_newPublicVirtualInterface = value; }

    /**
     * <p>Detailed information for the public virtual interface to be created.</p>
     * <p>Default: None</p>
     */
    inline void SetNewPublicVirtualInterface(NewPublicVirtualInterface&& value) { m_newPublicVirtualInterfaceHasBeenSet = true; m_newPublicVirtualInterface = value; }

    /**
     * <p>Detailed information for the public virtual interface to be created.</p>
     * <p>Default: None</p>
     */
    inline CreatePublicVirtualInterfaceRequest& WithNewPublicVirtualInterface(const NewPublicVirtualInterface& value) { SetNewPublicVirtualInterface(value); return *this;}

    /**
     * <p>Detailed information for the public virtual interface to be created.</p>
     * <p>Default: None</p>
     */
    inline CreatePublicVirtualInterfaceRequest& WithNewPublicVirtualInterface(NewPublicVirtualInterface&& value) { SetNewPublicVirtualInterface(value); return *this;}

  private:
    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;
    NewPublicVirtualInterface m_newPublicVirtualInterface;
    bool m_newPublicVirtualInterfaceHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
