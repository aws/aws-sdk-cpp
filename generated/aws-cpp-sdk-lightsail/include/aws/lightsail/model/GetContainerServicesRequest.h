﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API GetContainerServicesRequest : public LightsailRequest
  {
  public:
    GetContainerServicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContainerServices"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the container service for which to return information.</p>
     * <p>When omitted, the response includes all of your container services in the AWS
     * Region where the request is made.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the container service for which to return information.</p>
     * <p>When omitted, the response includes all of your container services in the AWS
     * Region where the request is made.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the container service for which to return information.</p>
     * <p>When omitted, the response includes all of your container services in the AWS
     * Region where the request is made.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the container service for which to return information.</p>
     * <p>When omitted, the response includes all of your container services in the AWS
     * Region where the request is made.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the container service for which to return information.</p>
     * <p>When omitted, the response includes all of your container services in the AWS
     * Region where the request is made.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the container service for which to return information.</p>
     * <p>When omitted, the response includes all of your container services in the AWS
     * Region where the request is made.</p>
     */
    inline GetContainerServicesRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the container service for which to return information.</p>
     * <p>When omitted, the response includes all of your container services in the AWS
     * Region where the request is made.</p>
     */
    inline GetContainerServicesRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the container service for which to return information.</p>
     * <p>When omitted, the response includes all of your container services in the AWS
     * Region where the request is made.</p>
     */
    inline GetContainerServicesRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
