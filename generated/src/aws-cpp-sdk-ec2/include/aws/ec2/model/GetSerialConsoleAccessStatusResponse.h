/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ManagedBy.h>
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
  class GetSerialConsoleAccessStatusResponse
  {
  public:
    AWS_EC2_API GetSerialConsoleAccessStatusResponse() = default;
    AWS_EC2_API GetSerialConsoleAccessStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSerialConsoleAccessStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If <code>true</code>, access to the EC2 serial console of all instances is
     * enabled for your account. If <code>false</code>, access to the EC2 serial
     * console of all instances is disabled for your account.</p>
     */
    inline bool GetSerialConsoleAccessEnabled() const { return m_serialConsoleAccessEnabled; }
    inline void SetSerialConsoleAccessEnabled(bool value) { m_serialConsoleAccessEnabledHasBeenSet = true; m_serialConsoleAccessEnabled = value; }
    inline GetSerialConsoleAccessStatusResponse& WithSerialConsoleAccessEnabled(bool value) { SetSerialConsoleAccessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages access to the serial console. Possible values
     * include:</p> <ul> <li> <p> <code>account</code> - Access is managed by the
     * account.</p> </li> <li> <p> <code>declarative-policy</code> - Access is managed
     * by a declarative policy and can't be modified by the account.</p> </li> </ul>
     */
    inline ManagedBy GetManagedBy() const { return m_managedBy; }
    inline void SetManagedBy(ManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline GetSerialConsoleAccessStatusResponse& WithManagedBy(ManagedBy value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetSerialConsoleAccessStatusResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_serialConsoleAccessEnabled{false};
    bool m_serialConsoleAccessEnabledHasBeenSet = false;

    ManagedBy m_managedBy{ManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
