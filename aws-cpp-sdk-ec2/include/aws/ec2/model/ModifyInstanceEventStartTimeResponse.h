﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceStatusEvent.h>
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
  class AWS_EC2_API ModifyInstanceEventStartTimeResponse
  {
  public:
    ModifyInstanceEventStartTimeResponse();
    ModifyInstanceEventStartTimeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyInstanceEventStartTimeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const InstanceStatusEvent& GetEvent() const{ return m_event; }

    
    inline void SetEvent(const InstanceStatusEvent& value) { m_event = value; }

    
    inline void SetEvent(InstanceStatusEvent&& value) { m_event = std::move(value); }

    
    inline ModifyInstanceEventStartTimeResponse& WithEvent(const InstanceStatusEvent& value) { SetEvent(value); return *this;}

    
    inline ModifyInstanceEventStartTimeResponse& WithEvent(InstanceStatusEvent&& value) { SetEvent(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyInstanceEventStartTimeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyInstanceEventStartTimeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InstanceStatusEvent m_event;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
