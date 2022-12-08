/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Structure that contains <code>payloadVersion</code> and
   * <code>targetArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ProvisioningHook">AWS
   * API Reference</a></p>
   */
  class ProvisioningHook
  {
  public:
    AWS_IOT_API ProvisioningHook();
    AWS_IOT_API ProvisioningHook(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ProvisioningHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The payload that was sent to the target function.</p> <p> <i>Note:</i> Only
     * Lambda functions are currently supported.</p>
     */
    inline const Aws::String& GetPayloadVersion() const{ return m_payloadVersion; }

    /**
     * <p>The payload that was sent to the target function.</p> <p> <i>Note:</i> Only
     * Lambda functions are currently supported.</p>
     */
    inline bool PayloadVersionHasBeenSet() const { return m_payloadVersionHasBeenSet; }

    /**
     * <p>The payload that was sent to the target function.</p> <p> <i>Note:</i> Only
     * Lambda functions are currently supported.</p>
     */
    inline void SetPayloadVersion(const Aws::String& value) { m_payloadVersionHasBeenSet = true; m_payloadVersion = value; }

    /**
     * <p>The payload that was sent to the target function.</p> <p> <i>Note:</i> Only
     * Lambda functions are currently supported.</p>
     */
    inline void SetPayloadVersion(Aws::String&& value) { m_payloadVersionHasBeenSet = true; m_payloadVersion = std::move(value); }

    /**
     * <p>The payload that was sent to the target function.</p> <p> <i>Note:</i> Only
     * Lambda functions are currently supported.</p>
     */
    inline void SetPayloadVersion(const char* value) { m_payloadVersionHasBeenSet = true; m_payloadVersion.assign(value); }

    /**
     * <p>The payload that was sent to the target function.</p> <p> <i>Note:</i> Only
     * Lambda functions are currently supported.</p>
     */
    inline ProvisioningHook& WithPayloadVersion(const Aws::String& value) { SetPayloadVersion(value); return *this;}

    /**
     * <p>The payload that was sent to the target function.</p> <p> <i>Note:</i> Only
     * Lambda functions are currently supported.</p>
     */
    inline ProvisioningHook& WithPayloadVersion(Aws::String&& value) { SetPayloadVersion(std::move(value)); return *this;}

    /**
     * <p>The payload that was sent to the target function.</p> <p> <i>Note:</i> Only
     * Lambda functions are currently supported.</p>
     */
    inline ProvisioningHook& WithPayloadVersion(const char* value) { SetPayloadVersion(value); return *this;}


    /**
     * <p>The ARN of the target function.</p> <p> <i>Note:</i> Only Lambda functions
     * are currently supported.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of the target function.</p> <p> <i>Note:</i> Only Lambda functions
     * are currently supported.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The ARN of the target function.</p> <p> <i>Note:</i> Only Lambda functions
     * are currently supported.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of the target function.</p> <p> <i>Note:</i> Only Lambda functions
     * are currently supported.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The ARN of the target function.</p> <p> <i>Note:</i> Only Lambda functions
     * are currently supported.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The ARN of the target function.</p> <p> <i>Note:</i> Only Lambda functions
     * are currently supported.</p>
     */
    inline ProvisioningHook& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of the target function.</p> <p> <i>Note:</i> Only Lambda functions
     * are currently supported.</p>
     */
    inline ProvisioningHook& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target function.</p> <p> <i>Note:</i> Only Lambda functions
     * are currently supported.</p>
     */
    inline ProvisioningHook& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

  private:

    Aws::String m_payloadVersion;
    bool m_payloadVersionHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
