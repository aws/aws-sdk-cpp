/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceAutoRecoveryState.h>
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
  class ModifyInstanceMaintenanceOptionsResponse
  {
  public:
    AWS_EC2_API ModifyInstanceMaintenanceOptionsResponse();
    AWS_EC2_API ModifyInstanceMaintenanceOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyInstanceMaintenanceOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline ModifyInstanceMaintenanceOptionsResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMaintenanceOptionsResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ModifyInstanceMaintenanceOptionsResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline const InstanceAutoRecoveryState& GetAutoRecovery() const{ return m_autoRecovery; }

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline void SetAutoRecovery(const InstanceAutoRecoveryState& value) { m_autoRecovery = value; }

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline void SetAutoRecovery(InstanceAutoRecoveryState&& value) { m_autoRecovery = std::move(value); }

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline ModifyInstanceMaintenanceOptionsResponse& WithAutoRecovery(const InstanceAutoRecoveryState& value) { SetAutoRecovery(value); return *this;}

    /**
     * <p>Provides information on the current automatic recovery behavior of your
     * instance.</p>
     */
    inline ModifyInstanceMaintenanceOptionsResponse& WithAutoRecovery(InstanceAutoRecoveryState&& value) { SetAutoRecovery(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyInstanceMaintenanceOptionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyInstanceMaintenanceOptionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;

    InstanceAutoRecoveryState m_autoRecovery;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
