/**
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
  class DeleteContainerImageRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DeleteContainerImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContainerImage"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the container service for which to delete a registered container
     * image.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the container service for which to delete a registered container
     * image.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the container service for which to delete a registered container
     * image.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the container service for which to delete a registered container
     * image.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the container service for which to delete a registered container
     * image.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the container service for which to delete a registered container
     * image.</p>
     */
    inline DeleteContainerImageRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the container service for which to delete a registered container
     * image.</p>
     */
    inline DeleteContainerImageRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the container service for which to delete a registered container
     * image.</p>
     */
    inline DeleteContainerImageRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The name of the container image to delete from the container service.</p>
     * <p>Use the <code>GetContainerImages</code> action to get the name of the
     * container images that are registered to a container service.</p> 
     * <p>Container images sourced from your Lightsail container service, that are
     * registered and stored on your service, start with a colon (<code>:</code>). For
     * example, <code>:container-service-1.mystaticwebsite.1</code>. Container images
     * sourced from a public registry like Docker Hub don't start with a colon. For
     * example, <code>nginx:latest</code> or <code>nginx</code>.</p> 
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The name of the container image to delete from the container service.</p>
     * <p>Use the <code>GetContainerImages</code> action to get the name of the
     * container images that are registered to a container service.</p> 
     * <p>Container images sourced from your Lightsail container service, that are
     * registered and stored on your service, start with a colon (<code>:</code>). For
     * example, <code>:container-service-1.mystaticwebsite.1</code>. Container images
     * sourced from a public registry like Docker Hub don't start with a colon. For
     * example, <code>nginx:latest</code> or <code>nginx</code>.</p> 
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The name of the container image to delete from the container service.</p>
     * <p>Use the <code>GetContainerImages</code> action to get the name of the
     * container images that are registered to a container service.</p> 
     * <p>Container images sourced from your Lightsail container service, that are
     * registered and stored on your service, start with a colon (<code>:</code>). For
     * example, <code>:container-service-1.mystaticwebsite.1</code>. Container images
     * sourced from a public registry like Docker Hub don't start with a colon. For
     * example, <code>nginx:latest</code> or <code>nginx</code>.</p> 
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The name of the container image to delete from the container service.</p>
     * <p>Use the <code>GetContainerImages</code> action to get the name of the
     * container images that are registered to a container service.</p> 
     * <p>Container images sourced from your Lightsail container service, that are
     * registered and stored on your service, start with a colon (<code>:</code>). For
     * example, <code>:container-service-1.mystaticwebsite.1</code>. Container images
     * sourced from a public registry like Docker Hub don't start with a colon. For
     * example, <code>nginx:latest</code> or <code>nginx</code>.</p> 
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The name of the container image to delete from the container service.</p>
     * <p>Use the <code>GetContainerImages</code> action to get the name of the
     * container images that are registered to a container service.</p> 
     * <p>Container images sourced from your Lightsail container service, that are
     * registered and stored on your service, start with a colon (<code>:</code>). For
     * example, <code>:container-service-1.mystaticwebsite.1</code>. Container images
     * sourced from a public registry like Docker Hub don't start with a colon. For
     * example, <code>nginx:latest</code> or <code>nginx</code>.</p> 
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The name of the container image to delete from the container service.</p>
     * <p>Use the <code>GetContainerImages</code> action to get the name of the
     * container images that are registered to a container service.</p> 
     * <p>Container images sourced from your Lightsail container service, that are
     * registered and stored on your service, start with a colon (<code>:</code>). For
     * example, <code>:container-service-1.mystaticwebsite.1</code>. Container images
     * sourced from a public registry like Docker Hub don't start with a colon. For
     * example, <code>nginx:latest</code> or <code>nginx</code>.</p> 
     */
    inline DeleteContainerImageRequest& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The name of the container image to delete from the container service.</p>
     * <p>Use the <code>GetContainerImages</code> action to get the name of the
     * container images that are registered to a container service.</p> 
     * <p>Container images sourced from your Lightsail container service, that are
     * registered and stored on your service, start with a colon (<code>:</code>). For
     * example, <code>:container-service-1.mystaticwebsite.1</code>. Container images
     * sourced from a public registry like Docker Hub don't start with a colon. For
     * example, <code>nginx:latest</code> or <code>nginx</code>.</p> 
     */
    inline DeleteContainerImageRequest& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The name of the container image to delete from the container service.</p>
     * <p>Use the <code>GetContainerImages</code> action to get the name of the
     * container images that are registered to a container service.</p> 
     * <p>Container images sourced from your Lightsail container service, that are
     * registered and stored on your service, start with a colon (<code>:</code>). For
     * example, <code>:container-service-1.mystaticwebsite.1</code>. Container images
     * sourced from a public registry like Docker Hub don't start with a colon. For
     * example, <code>nginx:latest</code> or <code>nginx</code>.</p> 
     */
    inline DeleteContainerImageRequest& WithImage(const char* value) { SetImage(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
