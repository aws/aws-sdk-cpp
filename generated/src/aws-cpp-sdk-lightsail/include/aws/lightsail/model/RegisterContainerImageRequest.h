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
    AWS_LIGHTSAIL_API RegisterContainerImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterContainerImage"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the container service for which to register a container
     * image.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    RegisterContainerImageRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    RegisterContainerImageRequest& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The digest of the container image to be registered.</p>
     */
    inline const Aws::String& GetDigest() const { return m_digest; }
    inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }
    template<typename DigestT = Aws::String>
    void SetDigest(DigestT&& value) { m_digestHasBeenSet = true; m_digest = std::forward<DigestT>(value); }
    template<typename DigestT = Aws::String>
    RegisterContainerImageRequest& WithDigest(DigestT&& value) { SetDigest(std::forward<DigestT>(value)); return *this;}
    ///@}
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
