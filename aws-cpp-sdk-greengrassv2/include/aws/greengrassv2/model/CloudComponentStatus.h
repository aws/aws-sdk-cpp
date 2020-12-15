/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/CloudComponentState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Contains the status of a component in the AWS IoT Greengrass
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/CloudComponentStatus">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASSV2_API CloudComponentStatus
  {
  public:
    CloudComponentStatus();
    CloudComponentStatus(Aws::Utils::Json::JsonView jsonValue);
    CloudComponentStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the component.</p>
     */
    inline const CloudComponentState& GetComponentState() const{ return m_componentState; }

    /**
     * <p>The state of the component.</p>
     */
    inline bool ComponentStateHasBeenSet() const { return m_componentStateHasBeenSet; }

    /**
     * <p>The state of the component.</p>
     */
    inline void SetComponentState(const CloudComponentState& value) { m_componentStateHasBeenSet = true; m_componentState = value; }

    /**
     * <p>The state of the component.</p>
     */
    inline void SetComponentState(CloudComponentState&& value) { m_componentStateHasBeenSet = true; m_componentState = std::move(value); }

    /**
     * <p>The state of the component.</p>
     */
    inline CloudComponentStatus& WithComponentState(const CloudComponentState& value) { SetComponentState(value); return *this;}

    /**
     * <p>The state of the component.</p>
     */
    inline CloudComponentStatus& WithComponentState(CloudComponentState&& value) { SetComponentState(std::move(value)); return *this;}


    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component.</p>
     */
    inline CloudComponentStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component.</p>
     */
    inline CloudComponentStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that communicates details, such as errors, about the status of the
     * component.</p>
     */
    inline CloudComponentStatus& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetErrors() const{ return m_errors; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline void SetErrors(const Aws::Map<Aws::String, Aws::String>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline void SetErrors(Aws::Map<Aws::String, Aws::String>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& WithErrors(const Aws::Map<Aws::String, Aws::String>& value) { SetErrors(value); return *this;}

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& WithErrors(Aws::Map<Aws::String, Aws::String>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& AddErrors(const Aws::String& key, const Aws::String& value) { m_errorsHasBeenSet = true; m_errors.emplace(key, value); return *this; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& AddErrors(Aws::String&& key, const Aws::String& value) { m_errorsHasBeenSet = true; m_errors.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& AddErrors(const Aws::String& key, Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& AddErrors(Aws::String&& key, Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& AddErrors(const char* key, Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& AddErrors(Aws::String&& key, const char* value) { m_errorsHasBeenSet = true; m_errors.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dictionary of errors that communicate why the component is in an error
     * state. For example, if AWS IoT Greengrass can't access an artifact for the
     * component, then <code>errors</code> contains the artifact's URI as a key, and
     * the error message as the value for that key.</p>
     */
    inline CloudComponentStatus& AddErrors(const char* key, const char* value) { m_errorsHasBeenSet = true; m_errors.emplace(key, value); return *this; }

  private:

    CloudComponentState m_componentState;
    bool m_componentStateHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_errors;
    bool m_errorsHasBeenSet;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
