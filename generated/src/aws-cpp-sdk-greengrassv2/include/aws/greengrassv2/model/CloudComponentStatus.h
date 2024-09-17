/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/CloudComponentState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrassv2/model/VendorGuidance.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains the status of a component version in the IoT Greengrass
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CloudComponentStatus">AWS
   * API Reference</a></p>
   */
  class CloudComponentStatus
  {
  public:
    AWS_GREENGRASSV2_API CloudComponentStatus();
    AWS_GREENGRASSV2_API CloudComponentStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API CloudComponentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the component version.</p>
     */
    inline const CloudComponentState& GetComponentState() const{ return m_componentState; }
    inline bool ComponentStateHasBeenSet() const { return m_componentStateHasBeenSet; }
    inline void SetComponentState(const CloudComponentState& value) { m_componentStateHasBeenSet = true; m_componentState = value; }
    inline void SetComponentState(CloudComponentState&& value) { m_componentStateHasBeenSet = true; m_componentState = std::move(value); }
    inline CloudComponentStatus& WithComponentState(const CloudComponentState& value) { SetComponentState(value); return *this;}
    inline CloudComponentStatus& WithComponentState(CloudComponentState&& value) { SetComponentState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component version.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline CloudComponentStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline CloudComponentStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline CloudComponentStatus& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A dictionary of errors that communicate why the component version is in an
     * error state. For example, if IoT Greengrass can't access an artifact for the
     * component version, then <code>errors</code> contains the artifact's URI as a
     * key, and the error message as the value for that key.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetErrors() const{ return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    inline void SetErrors(const Aws::Map<Aws::String, Aws::String>& value) { m_errorsHasBeenSet = true; m_errors = value; }
    inline void SetErrors(Aws::Map<Aws::String, Aws::String>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }
    inline CloudComponentStatus& WithErrors(const Aws::Map<Aws::String, Aws::String>& value) { SetErrors(value); return *this;}
    inline CloudComponentStatus& WithErrors(Aws::Map<Aws::String, Aws::String>&& value) { SetErrors(std::move(value)); return *this;}
    inline CloudComponentStatus& AddErrors(const Aws::String& key, const Aws::String& value) { m_errorsHasBeenSet = true; m_errors.emplace(key, value); return *this; }
    inline CloudComponentStatus& AddErrors(Aws::String&& key, const Aws::String& value) { m_errorsHasBeenSet = true; m_errors.emplace(std::move(key), value); return *this; }
    inline CloudComponentStatus& AddErrors(const Aws::String& key, Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.emplace(key, std::move(value)); return *this; }
    inline CloudComponentStatus& AddErrors(Aws::String&& key, Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.emplace(std::move(key), std::move(value)); return *this; }
    inline CloudComponentStatus& AddErrors(const char* key, Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.emplace(key, std::move(value)); return *this; }
    inline CloudComponentStatus& AddErrors(Aws::String&& key, const char* value) { m_errorsHasBeenSet = true; m_errors.emplace(std::move(key), value); return *this; }
    inline CloudComponentStatus& AddErrors(const char* key, const char* value) { m_errorsHasBeenSet = true; m_errors.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The vendor guidance state for the component version. This state indicates
     * whether the component version has any issues that you should consider before you
     * deploy it. The vendor guidance state can be:</p> <ul> <li> <p>
     * <code>ACTIVE</code> – This component version is available and recommended for
     * use.</p> </li> <li> <p> <code>DISCONTINUED</code> – This component version has
     * been discontinued by its publisher. You can deploy this component version, but
     * we recommend that you use a different version of this component.</p> </li> <li>
     * <p> <code>DELETED</code> – This component version has been deleted by its
     * publisher, so you can't deploy it. If you have any existing deployments that
     * specify this component version, those deployments will fail.</p> </li> </ul>
     */
    inline const VendorGuidance& GetVendorGuidance() const{ return m_vendorGuidance; }
    inline bool VendorGuidanceHasBeenSet() const { return m_vendorGuidanceHasBeenSet; }
    inline void SetVendorGuidance(const VendorGuidance& value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = value; }
    inline void SetVendorGuidance(VendorGuidance&& value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = std::move(value); }
    inline CloudComponentStatus& WithVendorGuidance(const VendorGuidance& value) { SetVendorGuidance(value); return *this;}
    inline CloudComponentStatus& WithVendorGuidance(VendorGuidance&& value) { SetVendorGuidance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that communicates details about the vendor guidance state of the
     * component version. This message communicates why a component version is
     * discontinued or deleted.</p>
     */
    inline const Aws::String& GetVendorGuidanceMessage() const{ return m_vendorGuidanceMessage; }
    inline bool VendorGuidanceMessageHasBeenSet() const { return m_vendorGuidanceMessageHasBeenSet; }
    inline void SetVendorGuidanceMessage(const Aws::String& value) { m_vendorGuidanceMessageHasBeenSet = true; m_vendorGuidanceMessage = value; }
    inline void SetVendorGuidanceMessage(Aws::String&& value) { m_vendorGuidanceMessageHasBeenSet = true; m_vendorGuidanceMessage = std::move(value); }
    inline void SetVendorGuidanceMessage(const char* value) { m_vendorGuidanceMessageHasBeenSet = true; m_vendorGuidanceMessage.assign(value); }
    inline CloudComponentStatus& WithVendorGuidanceMessage(const Aws::String& value) { SetVendorGuidanceMessage(value); return *this;}
    inline CloudComponentStatus& WithVendorGuidanceMessage(Aws::String&& value) { SetVendorGuidanceMessage(std::move(value)); return *this;}
    inline CloudComponentStatus& WithVendorGuidanceMessage(const char* value) { SetVendorGuidanceMessage(value); return *this;}
    ///@}
  private:

    CloudComponentState m_componentState;
    bool m_componentStateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_errors;
    bool m_errorsHasBeenSet = false;

    VendorGuidance m_vendorGuidance;
    bool m_vendorGuidanceHasBeenSet = false;

    Aws::String m_vendorGuidanceMessage;
    bool m_vendorGuidanceMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
