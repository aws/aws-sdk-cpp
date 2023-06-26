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
  class GetSerialConsoleAccessStatusResponse
  {
  public:
    AWS_EC2_API GetSerialConsoleAccessStatusResponse();
    AWS_EC2_API GetSerialConsoleAccessStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetSerialConsoleAccessStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>If <code>true</code>, access to the EC2 serial console of all instances is
     * enabled for your account. If <code>false</code>, access to the EC2 serial
     * console of all instances is disabled for your account.</p>
     */
    inline bool GetSerialConsoleAccessEnabled() const{ return m_serialConsoleAccessEnabled; }

    /**
     * <p>If <code>true</code>, access to the EC2 serial console of all instances is
     * enabled for your account. If <code>false</code>, access to the EC2 serial
     * console of all instances is disabled for your account.</p>
     */
    inline void SetSerialConsoleAccessEnabled(bool value) { m_serialConsoleAccessEnabled = value; }

    /**
     * <p>If <code>true</code>, access to the EC2 serial console of all instances is
     * enabled for your account. If <code>false</code>, access to the EC2 serial
     * console of all instances is disabled for your account.</p>
     */
    inline GetSerialConsoleAccessStatusResponse& WithSerialConsoleAccessEnabled(bool value) { SetSerialConsoleAccessEnabled(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetSerialConsoleAccessStatusResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetSerialConsoleAccessStatusResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_serialConsoleAccessEnabled;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
