/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains all error-related information for the deployment record. The status
   * details will be null if the deployment is in a success state.</p> 
   * <p>Greengrass nucleus v2.8.0 or later is required to get an accurate
   * <code>errorStack</code> and <code>errorTypes</code> response. This field will
   * not be returned for earlier Greengrass nucleus versions.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/EffectiveDeploymentStatusDetails">AWS
   * API Reference</a></p>
   */
  class EffectiveDeploymentStatusDetails
  {
  public:
    AWS_GREENGRASSV2_API EffectiveDeploymentStatusDetails() = default;
    AWS_GREENGRASSV2_API EffectiveDeploymentStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API EffectiveDeploymentStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains an ordered list of short error codes that range from the most
     * generic error to the most specific one. The error codes describe the reason for
     * failure whenever the <code>coreDeviceExecutionStatus</code> is in a failed
     * state. The response will be an empty list if there is no error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetErrorStack() const { return m_errorStack; }
    inline bool ErrorStackHasBeenSet() const { return m_errorStackHasBeenSet; }
    template<typename ErrorStackT = Aws::Vector<Aws::String>>
    void SetErrorStack(ErrorStackT&& value) { m_errorStackHasBeenSet = true; m_errorStack = std::forward<ErrorStackT>(value); }
    template<typename ErrorStackT = Aws::Vector<Aws::String>>
    EffectiveDeploymentStatusDetails& WithErrorStack(ErrorStackT&& value) { SetErrorStack(std::forward<ErrorStackT>(value)); return *this;}
    template<typename ErrorStackT = Aws::String>
    EffectiveDeploymentStatusDetails& AddErrorStack(ErrorStackT&& value) { m_errorStackHasBeenSet = true; m_errorStack.emplace_back(std::forward<ErrorStackT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains tags which describe the error. You can use the error types to
     * classify errors to assist with remediating the failure. The response will be an
     * empty list if there is no error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetErrorTypes() const { return m_errorTypes; }
    inline bool ErrorTypesHasBeenSet() const { return m_errorTypesHasBeenSet; }
    template<typename ErrorTypesT = Aws::Vector<Aws::String>>
    void SetErrorTypes(ErrorTypesT&& value) { m_errorTypesHasBeenSet = true; m_errorTypes = std::forward<ErrorTypesT>(value); }
    template<typename ErrorTypesT = Aws::Vector<Aws::String>>
    EffectiveDeploymentStatusDetails& WithErrorTypes(ErrorTypesT&& value) { SetErrorTypes(std::forward<ErrorTypesT>(value)); return *this;}
    template<typename ErrorTypesT = Aws::String>
    EffectiveDeploymentStatusDetails& AddErrorTypes(ErrorTypesT&& value) { m_errorTypesHasBeenSet = true; m_errorTypes.emplace_back(std::forward<ErrorTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_errorStack;
    bool m_errorStackHasBeenSet = false;

    Aws::Vector<Aws::String> m_errorTypes;
    bool m_errorTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
