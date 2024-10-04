/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetPasswordDataResponse
  {
  public:
    AWS_EC2_API GetPasswordDataResponse();
    AWS_EC2_API GetPasswordDataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetPasswordDataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the Windows instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline GetPasswordDataResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GetPasswordDataResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GetPasswordDataResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the data was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }
    inline GetPasswordDataResponse& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline GetPasswordDataResponse& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the instance. Returns an empty string if the password is not
     * available.</p>
     */
    inline const Aws::String& GetPasswordData() const{ return m_passwordData; }
    inline void SetPasswordData(const Aws::String& value) { m_passwordData = value; }
    inline void SetPasswordData(Aws::String&& value) { m_passwordData = std::move(value); }
    inline void SetPasswordData(const char* value) { m_passwordData.assign(value); }
    inline GetPasswordDataResponse& WithPasswordData(const Aws::String& value) { SetPasswordData(value); return *this;}
    inline GetPasswordDataResponse& WithPasswordData(Aws::String&& value) { SetPasswordData(std::move(value)); return *this;}
    inline GetPasswordDataResponse& WithPasswordData(const char* value) { SetPasswordData(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetPasswordDataResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetPasswordDataResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;

    Aws::Utils::DateTime m_timestamp;

    Aws::String m_passwordData;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
