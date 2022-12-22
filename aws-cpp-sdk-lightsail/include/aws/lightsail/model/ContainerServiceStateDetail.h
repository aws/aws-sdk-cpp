/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerServiceStateDetailCode.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the current state of a container service.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ContainerServiceStateDetail">AWS
   * API Reference</a></p>
   */
  class ContainerServiceStateDetail
  {
  public:
    AWS_LIGHTSAIL_API ContainerServiceStateDetail();
    AWS_LIGHTSAIL_API ContainerServiceStateDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceStateDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state code of the container service.</p> <p>The following state codes are
     * possible:</p> <ul> <li> <p>The following state codes are possible if your
     * container service is in a <code>DEPLOYING</code> or <code>UPDATING</code>
     * state:</p> <ul> <li> <p> <code>CREATING_SYSTEM_RESOURCES</code> - The system
     * resources for your container service are being created.</p> </li> <li> <p>
     * <code>CREATING_NETWORK_INFRASTRUCTURE</code> - The network infrastructure for
     * your container service are being created.</p> </li> <li> <p>
     * <code>PROVISIONING_CERTIFICATE</code> - The SSL/TLS certificate for your
     * container service is being created.</p> </li> <li> <p>
     * <code>PROVISIONING_SERVICE</code> - Your container service is being
     * provisioned.</p> </li> <li> <p> <code>CREATING_DEPLOYMENT</code> - Your
     * deployment is being created on your container service.</p> </li> <li> <p>
     * <code>EVALUATING_HEALTH_CHECK</code> - The health of your deployment is being
     * evaluated.</p> </li> <li> <p> <code>ACTIVATING_DEPLOYMENT</code> - Your
     * deployment is being activated.</p> </li> </ul> </li> <li> <p>The following state
     * codes are possible if your container service is in a <code>PENDING</code>
     * state:</p> <ul> <li> <p> <code>CERTIFICATE_LIMIT_EXCEEDED</code> - The SSL/TLS
     * certificate required for your container service exceeds the maximum number of
     * certificates allowed for your account.</p> </li> <li> <p>
     * <code>UNKNOWN_ERROR</code> - An error was experienced when your container
     * service was being created.</p> </li> </ul> </li> </ul>
     */
    inline const ContainerServiceStateDetailCode& GetCode() const{ return m_code; }

    /**
     * <p>The state code of the container service.</p> <p>The following state codes are
     * possible:</p> <ul> <li> <p>The following state codes are possible if your
     * container service is in a <code>DEPLOYING</code> or <code>UPDATING</code>
     * state:</p> <ul> <li> <p> <code>CREATING_SYSTEM_RESOURCES</code> - The system
     * resources for your container service are being created.</p> </li> <li> <p>
     * <code>CREATING_NETWORK_INFRASTRUCTURE</code> - The network infrastructure for
     * your container service are being created.</p> </li> <li> <p>
     * <code>PROVISIONING_CERTIFICATE</code> - The SSL/TLS certificate for your
     * container service is being created.</p> </li> <li> <p>
     * <code>PROVISIONING_SERVICE</code> - Your container service is being
     * provisioned.</p> </li> <li> <p> <code>CREATING_DEPLOYMENT</code> - Your
     * deployment is being created on your container service.</p> </li> <li> <p>
     * <code>EVALUATING_HEALTH_CHECK</code> - The health of your deployment is being
     * evaluated.</p> </li> <li> <p> <code>ACTIVATING_DEPLOYMENT</code> - Your
     * deployment is being activated.</p> </li> </ul> </li> <li> <p>The following state
     * codes are possible if your container service is in a <code>PENDING</code>
     * state:</p> <ul> <li> <p> <code>CERTIFICATE_LIMIT_EXCEEDED</code> - The SSL/TLS
     * certificate required for your container service exceeds the maximum number of
     * certificates allowed for your account.</p> </li> <li> <p>
     * <code>UNKNOWN_ERROR</code> - An error was experienced when your container
     * service was being created.</p> </li> </ul> </li> </ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state code of the container service.</p> <p>The following state codes are
     * possible:</p> <ul> <li> <p>The following state codes are possible if your
     * container service is in a <code>DEPLOYING</code> or <code>UPDATING</code>
     * state:</p> <ul> <li> <p> <code>CREATING_SYSTEM_RESOURCES</code> - The system
     * resources for your container service are being created.</p> </li> <li> <p>
     * <code>CREATING_NETWORK_INFRASTRUCTURE</code> - The network infrastructure for
     * your container service are being created.</p> </li> <li> <p>
     * <code>PROVISIONING_CERTIFICATE</code> - The SSL/TLS certificate for your
     * container service is being created.</p> </li> <li> <p>
     * <code>PROVISIONING_SERVICE</code> - Your container service is being
     * provisioned.</p> </li> <li> <p> <code>CREATING_DEPLOYMENT</code> - Your
     * deployment is being created on your container service.</p> </li> <li> <p>
     * <code>EVALUATING_HEALTH_CHECK</code> - The health of your deployment is being
     * evaluated.</p> </li> <li> <p> <code>ACTIVATING_DEPLOYMENT</code> - Your
     * deployment is being activated.</p> </li> </ul> </li> <li> <p>The following state
     * codes are possible if your container service is in a <code>PENDING</code>
     * state:</p> <ul> <li> <p> <code>CERTIFICATE_LIMIT_EXCEEDED</code> - The SSL/TLS
     * certificate required for your container service exceeds the maximum number of
     * certificates allowed for your account.</p> </li> <li> <p>
     * <code>UNKNOWN_ERROR</code> - An error was experienced when your container
     * service was being created.</p> </li> </ul> </li> </ul>
     */
    inline void SetCode(const ContainerServiceStateDetailCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state code of the container service.</p> <p>The following state codes are
     * possible:</p> <ul> <li> <p>The following state codes are possible if your
     * container service is in a <code>DEPLOYING</code> or <code>UPDATING</code>
     * state:</p> <ul> <li> <p> <code>CREATING_SYSTEM_RESOURCES</code> - The system
     * resources for your container service are being created.</p> </li> <li> <p>
     * <code>CREATING_NETWORK_INFRASTRUCTURE</code> - The network infrastructure for
     * your container service are being created.</p> </li> <li> <p>
     * <code>PROVISIONING_CERTIFICATE</code> - The SSL/TLS certificate for your
     * container service is being created.</p> </li> <li> <p>
     * <code>PROVISIONING_SERVICE</code> - Your container service is being
     * provisioned.</p> </li> <li> <p> <code>CREATING_DEPLOYMENT</code> - Your
     * deployment is being created on your container service.</p> </li> <li> <p>
     * <code>EVALUATING_HEALTH_CHECK</code> - The health of your deployment is being
     * evaluated.</p> </li> <li> <p> <code>ACTIVATING_DEPLOYMENT</code> - Your
     * deployment is being activated.</p> </li> </ul> </li> <li> <p>The following state
     * codes are possible if your container service is in a <code>PENDING</code>
     * state:</p> <ul> <li> <p> <code>CERTIFICATE_LIMIT_EXCEEDED</code> - The SSL/TLS
     * certificate required for your container service exceeds the maximum number of
     * certificates allowed for your account.</p> </li> <li> <p>
     * <code>UNKNOWN_ERROR</code> - An error was experienced when your container
     * service was being created.</p> </li> </ul> </li> </ul>
     */
    inline void SetCode(ContainerServiceStateDetailCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state code of the container service.</p> <p>The following state codes are
     * possible:</p> <ul> <li> <p>The following state codes are possible if your
     * container service is in a <code>DEPLOYING</code> or <code>UPDATING</code>
     * state:</p> <ul> <li> <p> <code>CREATING_SYSTEM_RESOURCES</code> - The system
     * resources for your container service are being created.</p> </li> <li> <p>
     * <code>CREATING_NETWORK_INFRASTRUCTURE</code> - The network infrastructure for
     * your container service are being created.</p> </li> <li> <p>
     * <code>PROVISIONING_CERTIFICATE</code> - The SSL/TLS certificate for your
     * container service is being created.</p> </li> <li> <p>
     * <code>PROVISIONING_SERVICE</code> - Your container service is being
     * provisioned.</p> </li> <li> <p> <code>CREATING_DEPLOYMENT</code> - Your
     * deployment is being created on your container service.</p> </li> <li> <p>
     * <code>EVALUATING_HEALTH_CHECK</code> - The health of your deployment is being
     * evaluated.</p> </li> <li> <p> <code>ACTIVATING_DEPLOYMENT</code> - Your
     * deployment is being activated.</p> </li> </ul> </li> <li> <p>The following state
     * codes are possible if your container service is in a <code>PENDING</code>
     * state:</p> <ul> <li> <p> <code>CERTIFICATE_LIMIT_EXCEEDED</code> - The SSL/TLS
     * certificate required for your container service exceeds the maximum number of
     * certificates allowed for your account.</p> </li> <li> <p>
     * <code>UNKNOWN_ERROR</code> - An error was experienced when your container
     * service was being created.</p> </li> </ul> </li> </ul>
     */
    inline ContainerServiceStateDetail& WithCode(const ContainerServiceStateDetailCode& value) { SetCode(value); return *this;}

    /**
     * <p>The state code of the container service.</p> <p>The following state codes are
     * possible:</p> <ul> <li> <p>The following state codes are possible if your
     * container service is in a <code>DEPLOYING</code> or <code>UPDATING</code>
     * state:</p> <ul> <li> <p> <code>CREATING_SYSTEM_RESOURCES</code> - The system
     * resources for your container service are being created.</p> </li> <li> <p>
     * <code>CREATING_NETWORK_INFRASTRUCTURE</code> - The network infrastructure for
     * your container service are being created.</p> </li> <li> <p>
     * <code>PROVISIONING_CERTIFICATE</code> - The SSL/TLS certificate for your
     * container service is being created.</p> </li> <li> <p>
     * <code>PROVISIONING_SERVICE</code> - Your container service is being
     * provisioned.</p> </li> <li> <p> <code>CREATING_DEPLOYMENT</code> - Your
     * deployment is being created on your container service.</p> </li> <li> <p>
     * <code>EVALUATING_HEALTH_CHECK</code> - The health of your deployment is being
     * evaluated.</p> </li> <li> <p> <code>ACTIVATING_DEPLOYMENT</code> - Your
     * deployment is being activated.</p> </li> </ul> </li> <li> <p>The following state
     * codes are possible if your container service is in a <code>PENDING</code>
     * state:</p> <ul> <li> <p> <code>CERTIFICATE_LIMIT_EXCEEDED</code> - The SSL/TLS
     * certificate required for your container service exceeds the maximum number of
     * certificates allowed for your account.</p> </li> <li> <p>
     * <code>UNKNOWN_ERROR</code> - An error was experienced when your container
     * service was being created.</p> </li> </ul> </li> </ul>
     */
    inline ContainerServiceStateDetail& WithCode(ContainerServiceStateDetailCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline ContainerServiceStateDetail& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline ContainerServiceStateDetail& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline ContainerServiceStateDetail& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ContainerServiceStateDetailCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
