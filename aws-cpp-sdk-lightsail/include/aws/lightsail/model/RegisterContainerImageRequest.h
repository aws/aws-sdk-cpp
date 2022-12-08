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
  class RegisterContainerImageRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API RegisterContainerImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterContainerImage"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline RegisterContainerImageRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline RegisterContainerImageRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline RegisterContainerImageRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The label for the container image when it's registered to the container
     * service.</p> <p>Use a descriptive label that you can use to track the different
     * versions of your registered container images.</p> <p>Use the
     * <code>GetContainerImages</code> action to return the container images registered
     * to a Lightsail container service. The label is the
     * <code>&lt;imagelabel&gt;</code> portion of the following image name example:</p>
     * <ul> <li> <p> <code>:container-service-1.&lt;imagelabel&gt;.1</code> </p> </li>
     * </ul> <p>If the name of your container service is
     * <code>mycontainerservice</code>, and the label that you specify is
     * <code>mystaticwebsite</code>, then the name of the registered container image
     * will be <code>:mycontainerservice.mystaticwebsite.1</code>.</p> <p>The number at
     * the end of these image name examples represents the version of the registered
     * container image. If you push and register another container image to the same
     * Lightsail container service, with the same label, then the version number for
     * the new registered container image will be <code>2</code>. If you push and
     * register another container image, the version number will be <code>3</code>, and
     * so on.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label for the container image when it's registered to the container
     * service.</p> <p>Use a descriptive label that you can use to track the different
     * versions of your registered container images.</p> <p>Use the
     * <code>GetContainerImages</code> action to return the container images registered
     * to a Lightsail container service. The label is the
     * <code>&lt;imagelabel&gt;</code> portion of the following image name example:</p>
     * <ul> <li> <p> <code>:container-service-1.&lt;imagelabel&gt;.1</code> </p> </li>
     * </ul> <p>If the name of your container service is
     * <code>mycontainerservice</code>, and the label that you specify is
     * <code>mystaticwebsite</code>, then the name of the registered container image
     * will be <code>:mycontainerservice.mystaticwebsite.1</code>.</p> <p>The number at
     * the end of these image name examples represents the version of the registered
     * container image. If you push and register another container image to the same
     * Lightsail container service, with the same label, then the version number for
     * the new registered container image will be <code>2</code>. If you push and
     * register another container image, the version number will be <code>3</code>, and
     * so on.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The label for the container image when it's registered to the container
     * service.</p> <p>Use a descriptive label that you can use to track the different
     * versions of your registered container images.</p> <p>Use the
     * <code>GetContainerImages</code> action to return the container images registered
     * to a Lightsail container service. The label is the
     * <code>&lt;imagelabel&gt;</code> portion of the following image name example:</p>
     * <ul> <li> <p> <code>:container-service-1.&lt;imagelabel&gt;.1</code> </p> </li>
     * </ul> <p>If the name of your container service is
     * <code>mycontainerservice</code>, and the label that you specify is
     * <code>mystaticwebsite</code>, then the name of the registered container image
     * will be <code>:mycontainerservice.mystaticwebsite.1</code>.</p> <p>The number at
     * the end of these image name examples represents the version of the registered
     * container image. If you push and register another container image to the same
     * Lightsail container service, with the same label, then the version number for
     * the new registered container image will be <code>2</code>. If you push and
     * register another container image, the version number will be <code>3</code>, and
     * so on.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label for the container image when it's registered to the container
     * service.</p> <p>Use a descriptive label that you can use to track the different
     * versions of your registered container images.</p> <p>Use the
     * <code>GetContainerImages</code> action to return the container images registered
     * to a Lightsail container service. The label is the
     * <code>&lt;imagelabel&gt;</code> portion of the following image name example:</p>
     * <ul> <li> <p> <code>:container-service-1.&lt;imagelabel&gt;.1</code> </p> </li>
     * </ul> <p>If the name of your container service is
     * <code>mycontainerservice</code>, and the label that you specify is
     * <code>mystaticwebsite</code>, then the name of the registered container image
     * will be <code>:mycontainerservice.mystaticwebsite.1</code>.</p> <p>The number at
     * the end of these image name examples represents the version of the registered
     * container image. If you push and register another container image to the same
     * Lightsail container service, with the same label, then the version number for
     * the new registered container image will be <code>2</code>. If you push and
     * register another container image, the version number will be <code>3</code>, and
     * so on.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The label for the container image when it's registered to the container
     * service.</p> <p>Use a descriptive label that you can use to track the different
     * versions of your registered container images.</p> <p>Use the
     * <code>GetContainerImages</code> action to return the container images registered
     * to a Lightsail container service. The label is the
     * <code>&lt;imagelabel&gt;</code> portion of the following image name example:</p>
     * <ul> <li> <p> <code>:container-service-1.&lt;imagelabel&gt;.1</code> </p> </li>
     * </ul> <p>If the name of your container service is
     * <code>mycontainerservice</code>, and the label that you specify is
     * <code>mystaticwebsite</code>, then the name of the registered container image
     * will be <code>:mycontainerservice.mystaticwebsite.1</code>.</p> <p>The number at
     * the end of these image name examples represents the version of the registered
     * container image. If you push and register another container image to the same
     * Lightsail container service, with the same label, then the version number for
     * the new registered container image will be <code>2</code>. If you push and
     * register another container image, the version number will be <code>3</code>, and
     * so on.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label for the container image when it's registered to the container
     * service.</p> <p>Use a descriptive label that you can use to track the different
     * versions of your registered container images.</p> <p>Use the
     * <code>GetContainerImages</code> action to return the container images registered
     * to a Lightsail container service. The label is the
     * <code>&lt;imagelabel&gt;</code> portion of the following image name example:</p>
     * <ul> <li> <p> <code>:container-service-1.&lt;imagelabel&gt;.1</code> </p> </li>
     * </ul> <p>If the name of your container service is
     * <code>mycontainerservice</code>, and the label that you specify is
     * <code>mystaticwebsite</code>, then the name of the registered container image
     * will be <code>:mycontainerservice.mystaticwebsite.1</code>.</p> <p>The number at
     * the end of these image name examples represents the version of the registered
     * container image. If you push and register another container image to the same
     * Lightsail container service, with the same label, then the version number for
     * the new registered container image will be <code>2</code>. If you push and
     * register another container image, the version number will be <code>3</code>, and
     * so on.</p>
     */
    inline RegisterContainerImageRequest& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label for the container image when it's registered to the container
     * service.</p> <p>Use a descriptive label that you can use to track the different
     * versions of your registered container images.</p> <p>Use the
     * <code>GetContainerImages</code> action to return the container images registered
     * to a Lightsail container service. The label is the
     * <code>&lt;imagelabel&gt;</code> portion of the following image name example:</p>
     * <ul> <li> <p> <code>:container-service-1.&lt;imagelabel&gt;.1</code> </p> </li>
     * </ul> <p>If the name of your container service is
     * <code>mycontainerservice</code>, and the label that you specify is
     * <code>mystaticwebsite</code>, then the name of the registered container image
     * will be <code>:mycontainerservice.mystaticwebsite.1</code>.</p> <p>The number at
     * the end of these image name examples represents the version of the registered
     * container image. If you push and register another container image to the same
     * Lightsail container service, with the same label, then the version number for
     * the new registered container image will be <code>2</code>. If you push and
     * register another container image, the version number will be <code>3</code>, and
     * so on.</p>
     */
    inline RegisterContainerImageRequest& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label for the container image when it's registered to the container
     * service.</p> <p>Use a descriptive label that you can use to track the different
     * versions of your registered container images.</p> <p>Use the
     * <code>GetContainerImages</code> action to return the container images registered
     * to a Lightsail container service. The label is the
     * <code>&lt;imagelabel&gt;</code> portion of the following image name example:</p>
     * <ul> <li> <p> <code>:container-service-1.&lt;imagelabel&gt;.1</code> </p> </li>
     * </ul> <p>If the name of your container service is
     * <code>mycontainerservice</code>, and the label that you specify is
     * <code>mystaticwebsite</code>, then the name of the registered container image
     * will be <code>:mycontainerservice.mystaticwebsite.1</code>.</p> <p>The number at
     * the end of these image name examples represents the version of the registered
     * container image. If you push and register another container image to the same
     * Lightsail container service, with the same label, then the version number for
     * the new registered container image will be <code>2</code>. If you push and
     * register another container image, the version number will be <code>3</code>, and
     * so on.</p>
     */
    inline RegisterContainerImageRequest& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline const Aws::String& GetDigest() const{ return m_digest; }

    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }

    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline void SetDigest(const Aws::String& value) { m_digestHasBeenSet = true; m_digest = value; }

    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline void SetDigest(Aws::String&& value) { m_digestHasBeenSet = true; m_digest = std::move(value); }

    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline void SetDigest(const char* value) { m_digestHasBeenSet = true; m_digest.assign(value); }

    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline RegisterContainerImageRequest& WithDigest(const Aws::String& value) { SetDigest(value); return *this;}

    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline RegisterContainerImageRequest& WithDigest(Aws::String&& value) { SetDigest(std::move(value)); return *this;}

    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline RegisterContainerImageRequest& WithDigest(const char* value) { SetDigest(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_digest;
    bool m_digestHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
