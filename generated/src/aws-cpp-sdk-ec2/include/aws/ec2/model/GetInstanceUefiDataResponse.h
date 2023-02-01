/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetInstanceUefiDataResponse
  {
  public:
    AWS_EC2_API GetInstanceUefiDataResponse();
    AWS_EC2_API GetInstanceUefiDataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetInstanceUefiDataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the instance from which to retrieve the UEFI data.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance from which to retrieve the UEFI data.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance from which to retrieve the UEFI data.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance from which to retrieve the UEFI data.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance from which to retrieve the UEFI data.</p>
     */
    inline GetInstanceUefiDataResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance from which to retrieve the UEFI data.</p>
     */
    inline GetInstanceUefiDataResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance from which to retrieve the UEFI data.</p>
     */
    inline GetInstanceUefiDataResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Base64 representation of the non-volatile UEFI variable store.</p>
     */
    inline const Aws::String& GetUefiData() const{ return m_uefiData; }

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store.</p>
     */
    inline void SetUefiData(const Aws::String& value) { m_uefiData = value; }

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store.</p>
     */
    inline void SetUefiData(Aws::String&& value) { m_uefiData = std::move(value); }

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store.</p>
     */
    inline void SetUefiData(const char* value) { m_uefiData.assign(value); }

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store.</p>
     */
    inline GetInstanceUefiDataResponse& WithUefiData(const Aws::String& value) { SetUefiData(value); return *this;}

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store.</p>
     */
    inline GetInstanceUefiDataResponse& WithUefiData(Aws::String&& value) { SetUefiData(std::move(value)); return *this;}

    /**
     * <p>Base64 representation of the non-volatile UEFI variable store.</p>
     */
    inline GetInstanceUefiDataResponse& WithUefiData(const char* value) { SetUefiData(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetInstanceUefiDataResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetInstanceUefiDataResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;

    Aws::String m_uefiData;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
