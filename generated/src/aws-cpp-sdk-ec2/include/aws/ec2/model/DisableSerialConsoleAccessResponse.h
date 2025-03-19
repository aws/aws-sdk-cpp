/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DisableSerialConsoleAccessResponse
  {
  public:
    AWS_EC2_API DisableSerialConsoleAccessResponse() = default;
    AWS_EC2_API DisableSerialConsoleAccessResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableSerialConsoleAccessResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If <code>true</code>, access to the EC2 serial console of all instances is
     * enabled for your account. If <code>false</code>, access to the EC2 serial
     * console of all instances is disabled for your account.</p>
     */
    inline bool GetSerialConsoleAccessEnabled() const { return m_serialConsoleAccessEnabled; }
    inline void SetSerialConsoleAccessEnabled(bool value) { m_serialConsoleAccessEnabledHasBeenSet = true; m_serialConsoleAccessEnabled = value; }
    inline DisableSerialConsoleAccessResponse& WithSerialConsoleAccessEnabled(bool value) { SetSerialConsoleAccessEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisableSerialConsoleAccessResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_serialConsoleAccessEnabled{false};
    bool m_serialConsoleAccessEnabledHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
