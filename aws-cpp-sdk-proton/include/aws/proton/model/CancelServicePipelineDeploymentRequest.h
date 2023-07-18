/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class AWS_PROTON_API CancelServicePipelineDeploymentRequest : public ProtonRequest
  {
  public:
    CancelServicePipelineDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelServicePipelineDeployment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the service with the service pipeline deployment to cancel.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service with the service pipeline deployment to cancel.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service with the service pipeline deployment to cancel.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service with the service pipeline deployment to cancel.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service with the service pipeline deployment to cancel.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service with the service pipeline deployment to cancel.</p>
     */
    inline CancelServicePipelineDeploymentRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service with the service pipeline deployment to cancel.</p>
     */
    inline CancelServicePipelineDeploymentRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service with the service pipeline deployment to cancel.</p>
     */
    inline CancelServicePipelineDeploymentRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
