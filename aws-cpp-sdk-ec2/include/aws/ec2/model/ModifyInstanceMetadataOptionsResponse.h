/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceMetadataOptionsResponse.h>
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
  class ModifyInstanceMetadataOptionsResponse
  {
  public:
    AWS_EC2_API ModifyInstanceMetadataOptionsResponse();
    AWS_EC2_API ModifyInstanceMetadataOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyInstanceMetadataOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMetadataOptionsResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMetadataOptionsResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMetadataOptionsResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The metadata options for the instance.</p>
     */
    inline const InstanceMetadataOptionsResponse& GetInstanceMetadataOptions() const{ return m_instanceMetadataOptions; }

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline void SetInstanceMetadataOptions(const InstanceMetadataOptionsResponse& value) { m_instanceMetadataOptions = value; }

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline void SetInstanceMetadataOptions(InstanceMetadataOptionsResponse&& value) { m_instanceMetadataOptions = std::move(value); }

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline ModifyInstanceMetadataOptionsResponse& WithInstanceMetadataOptions(const InstanceMetadataOptionsResponse& value) { SetInstanceMetadataOptions(value); return *this;}

    /**
     * <p>The metadata options for the instance.</p>
     */
    inline ModifyInstanceMetadataOptionsResponse& WithInstanceMetadataOptions(InstanceMetadataOptionsResponse&& value) { SetInstanceMetadataOptions(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyInstanceMetadataOptionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyInstanceMetadataOptionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;

    InstanceMetadataOptionsResponse m_instanceMetadataOptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
