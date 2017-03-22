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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API DisassociateFleetRequest : public AppStreamRequest
  {
  public:
    DisassociateFleetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the fleet to disassociate.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet to disassociate.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet to disassociate.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet to disassociate.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet to disassociate.</p>
     */
    inline DisassociateFleetRequest& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet to disassociate.</p>
     */
    inline DisassociateFleetRequest& WithFleetName(Aws::String&& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet to disassociate.</p>
     */
    inline DisassociateFleetRequest& WithFleetName(const char* value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the stack with which the fleet is associated.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack with which the fleet is associated.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack with which the fleet is associated.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack with which the fleet is associated.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack with which the fleet is associated.</p>
     */
    inline DisassociateFleetRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack with which the fleet is associated.</p>
     */
    inline DisassociateFleetRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack with which the fleet is associated.</p>
     */
    inline DisassociateFleetRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

  private:
    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet;
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
