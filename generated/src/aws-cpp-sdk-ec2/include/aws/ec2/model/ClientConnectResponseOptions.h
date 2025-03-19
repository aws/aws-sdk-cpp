/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientVpnEndpointAttributeStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The options for managing connection authorization for new client
   * connections.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientConnectResponseOptions">AWS
   * API Reference</a></p>
   */
  class ClientConnectResponseOptions
  {
  public:
    AWS_EC2_API ClientConnectResponseOptions() = default;
    AWS_EC2_API ClientConnectResponseOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientConnectResponseOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether client connect options are enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ClientConnectResponseOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used for connection
     * authorization.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const { return m_lambdaFunctionArn; }
    inline bool LambdaFunctionArnHasBeenSet() const { return m_lambdaFunctionArnHasBeenSet; }
    template<typename LambdaFunctionArnT = Aws::String>
    void SetLambdaFunctionArn(LambdaFunctionArnT&& value) { m_lambdaFunctionArnHasBeenSet = true; m_lambdaFunctionArn = std::forward<LambdaFunctionArnT>(value); }
    template<typename LambdaFunctionArnT = Aws::String>
    ClientConnectResponseOptions& WithLambdaFunctionArn(LambdaFunctionArnT&& value) { SetLambdaFunctionArn(std::forward<LambdaFunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of any updates to the client connect options.</p>
     */
    inline const ClientVpnEndpointAttributeStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ClientVpnEndpointAttributeStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ClientVpnEndpointAttributeStatus>
    ClientConnectResponseOptions& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_lambdaFunctionArn;
    bool m_lambdaFunctionArnHasBeenSet = false;

    ClientVpnEndpointAttributeStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
