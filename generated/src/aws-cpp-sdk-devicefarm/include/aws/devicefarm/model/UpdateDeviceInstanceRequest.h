/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class UpdateDeviceInstanceRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API UpdateDeviceInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDeviceInstance"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline UpdateDeviceInstanceRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline UpdateDeviceInstanceRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the device instance.</p>
     */
    inline UpdateDeviceInstanceRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ARN of the profile that you want to associate with the device
     * instance.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The ARN of the profile that you want to associate with the device
     * instance.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The ARN of the profile that you want to associate with the device
     * instance.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The ARN of the profile that you want to associate with the device
     * instance.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The ARN of the profile that you want to associate with the device
     * instance.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The ARN of the profile that you want to associate with the device
     * instance.</p>
     */
    inline UpdateDeviceInstanceRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The ARN of the profile that you want to associate with the device
     * instance.</p>
     */
    inline UpdateDeviceInstanceRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the profile that you want to associate with the device
     * instance.</p>
     */
    inline UpdateDeviceInstanceRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline UpdateDeviceInstanceRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline UpdateDeviceInstanceRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline UpdateDeviceInstanceRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline UpdateDeviceInstanceRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that you want to associate with the device instance.</p>
     */
    inline UpdateDeviceInstanceRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
