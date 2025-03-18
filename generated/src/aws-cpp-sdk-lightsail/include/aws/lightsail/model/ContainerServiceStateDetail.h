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
    AWS_LIGHTSAIL_API ContainerServiceStateDetail() = default;
    AWS_LIGHTSAIL_API ContainerServiceStateDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ContainerServiceStateDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline ContainerServiceStateDetailCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(ContainerServiceStateDetailCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline ContainerServiceStateDetail& WithCode(ContainerServiceStateDetailCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides more information for the state code.</p> 
     * <p>The state detail is populated only when a container service is in a
     * <code>PENDING</code>, <code>DEPLOYING</code>, or <code>UPDATING</code>
     * state.</p> 
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ContainerServiceStateDetail& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    ContainerServiceStateDetailCode m_code{ContainerServiceStateDetailCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
