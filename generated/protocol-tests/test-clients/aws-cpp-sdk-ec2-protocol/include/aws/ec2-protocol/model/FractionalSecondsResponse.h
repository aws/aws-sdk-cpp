/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2-protocol/model/ResponseMetadata.h>
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
namespace EC2Protocol
{
namespace Model
{
  class FractionalSecondsResponse
  {
  public:
    AWS_EC2PROTOCOL_API FractionalSecondsResponse();
    AWS_EC2PROTOCOL_API FractionalSecondsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2PROTOCOL_API FractionalSecondsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Utils::DateTime& GetDatetime() const{ return m_datetime; }
    inline void SetDatetime(const Aws::Utils::DateTime& value) { m_datetime = value; }
    inline void SetDatetime(Aws::Utils::DateTime&& value) { m_datetime = std::move(value); }
    inline FractionalSecondsResponse& WithDatetime(const Aws::Utils::DateTime& value) { SetDatetime(value); return *this;}
    inline FractionalSecondsResponse& WithDatetime(Aws::Utils::DateTime&& value) { SetDatetime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline FractionalSecondsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline FractionalSecondsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_datetime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
