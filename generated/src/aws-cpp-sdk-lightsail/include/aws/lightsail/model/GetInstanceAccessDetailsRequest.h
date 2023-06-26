/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetInstanceAccessDetailsRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetInstanceAccessDetailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceAccessDetails"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_instanceNameHasBeenSet = false;

    InstanceAccessProtocol m_protocol;
    bool m_protocolHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
