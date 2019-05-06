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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstanceAccessProtocol.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API GetInstanceAccessDetailsRequest : public LightsailRequest
  {
  public:
    GetInstanceAccessDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceAccessDetails"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the instance to access.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the instance to access.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the instance to access.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance to access.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the instance to access.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the instance to access.</p>
     */
    inline GetInstanceAccessDetailsRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance to access.</p>
     */
    inline GetInstanceAccessDetailsRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance to access.</p>
     */
    inline GetInstanceAccessDetailsRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>The protocol to use to connect to your instance. Defaults to
     * <code>ssh</code>.</p>
     */
    inline const InstanceAccessProtocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to use to connect to your instance. Defaults to
     * <code>ssh</code>.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to use to connect to your instance. Defaults to
     * <code>ssh</code>.</p>
     */
    inline void SetProtocol(const InstanceAccessProtocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use to connect to your instance. Defaults to
     * <code>ssh</code>.</p>
     */
    inline void SetProtocol(InstanceAccessProtocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to use to connect to your instance. Defaults to
     * <code>ssh</code>.</p>
     */
    inline GetInstanceAccessDetailsRequest& WithProtocol(const InstanceAccessProtocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use to connect to your instance. Defaults to
     * <code>ssh</code>.</p>
     */
    inline GetInstanceAccessDetailsRequest& WithProtocol(InstanceAccessProtocol&& value) { SetProtocol(std::move(value)); return *this;}

  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;

    InstanceAccessProtocol m_protocol;
    bool m_protocolHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
