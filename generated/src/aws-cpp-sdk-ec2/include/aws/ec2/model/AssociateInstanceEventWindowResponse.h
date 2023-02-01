/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceEventWindow.h>
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
  class AssociateInstanceEventWindowResponse
  {
  public:
    AWS_EC2_API AssociateInstanceEventWindowResponse();
    AWS_EC2_API AssociateInstanceEventWindowResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateInstanceEventWindowResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the event window.</p>
     */
    inline const InstanceEventWindow& GetInstanceEventWindow() const{ return m_instanceEventWindow; }

    /**
     * <p>Information about the event window.</p>
     */
    inline void SetInstanceEventWindow(const InstanceEventWindow& value) { m_instanceEventWindow = value; }

    /**
     * <p>Information about the event window.</p>
     */
    inline void SetInstanceEventWindow(InstanceEventWindow&& value) { m_instanceEventWindow = std::move(value); }

    /**
     * <p>Information about the event window.</p>
     */
    inline AssociateInstanceEventWindowResponse& WithInstanceEventWindow(const InstanceEventWindow& value) { SetInstanceEventWindow(value); return *this;}

    /**
     * <p>Information about the event window.</p>
     */
    inline AssociateInstanceEventWindowResponse& WithInstanceEventWindow(InstanceEventWindow&& value) { SetInstanceEventWindow(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateInstanceEventWindowResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateInstanceEventWindowResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InstanceEventWindow m_instanceEventWindow;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
