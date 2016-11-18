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
   * <p>Container for the parameters to the CreateConnection operation.</p>
   */
  class AWS_DIRECTCONNECT_API CreateConnectionRequest : public DirectConnectRequest
  {
  public:
    CreateConnectionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    
    inline CreateConnectionRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline CreateConnectionRequest& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    
    inline CreateConnectionRequest& WithLocation(const char* value) { SetLocation(value); return *this;}

    
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    
    inline void SetBandwidth(const Aws::String& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    
    inline void SetBandwidth(Aws::String&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    
    inline void SetBandwidth(const char* value) { m_bandwidthHasBeenSet = true; m_bandwidth.assign(value); }

    
    inline CreateConnectionRequest& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    
    inline CreateConnectionRequest& WithBandwidth(Aws::String&& value) { SetBandwidth(value); return *this;}

    
    inline CreateConnectionRequest& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}

    
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }

    
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }

    
    inline CreateConnectionRequest& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    
    inline CreateConnectionRequest& WithConnectionName(Aws::String&& value) { SetConnectionName(value); return *this;}

    
    inline CreateConnectionRequest& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}

  private:
    Aws::String m_location;
    bool m_locationHasBeenSet;
    Aws::String m_bandwidth;
    bool m_bandwidthHasBeenSet;
    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
