/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceEventWindowStateChange.h>
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
  class DeleteInstanceEventWindowResponse
  {
  public:
    AWS_EC2_API DeleteInstanceEventWindowResponse();
    AWS_EC2_API DeleteInstanceEventWindowResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteInstanceEventWindowResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The state of the event window.</p>
     */
    inline const InstanceEventWindowStateChange& GetInstanceEventWindowState() const{ return m_instanceEventWindowState; }

    /**
     * <p>The state of the event window.</p>
     */
    inline void SetInstanceEventWindowState(const InstanceEventWindowStateChange& value) { m_instanceEventWindowState = value; }

    /**
     * <p>The state of the event window.</p>
     */
    inline void SetInstanceEventWindowState(InstanceEventWindowStateChange&& value) { m_instanceEventWindowState = std::move(value); }

    /**
     * <p>The state of the event window.</p>
     */
    inline DeleteInstanceEventWindowResponse& WithInstanceEventWindowState(const InstanceEventWindowStateChange& value) { SetInstanceEventWindowState(value); return *this;}

    /**
     * <p>The state of the event window.</p>
     */
    inline DeleteInstanceEventWindowResponse& WithInstanceEventWindowState(InstanceEventWindowStateChange&& value) { SetInstanceEventWindowState(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteInstanceEventWindowResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteInstanceEventWindowResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InstanceEventWindowStateChange m_instanceEventWindowState;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
