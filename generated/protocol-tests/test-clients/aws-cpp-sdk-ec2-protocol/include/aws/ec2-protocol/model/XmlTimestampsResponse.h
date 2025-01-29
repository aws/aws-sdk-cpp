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
  class XmlTimestampsResponse
  {
  public:
    AWS_EC2PROTOCOL_API XmlTimestampsResponse();
    AWS_EC2PROTOCOL_API XmlTimestampsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2PROTOCOL_API XmlTimestampsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Utils::DateTime& GetNormal() const{ return m_normal; }
    inline void SetNormal(const Aws::Utils::DateTime& value) { m_normal = value; }
    inline void SetNormal(Aws::Utils::DateTime&& value) { m_normal = std::move(value); }
    inline XmlTimestampsResponse& WithNormal(const Aws::Utils::DateTime& value) { SetNormal(value); return *this;}
    inline XmlTimestampsResponse& WithNormal(Aws::Utils::DateTime&& value) { SetNormal(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetDateTime() const{ return m_dateTime; }
    inline void SetDateTime(const Aws::Utils::DateTime& value) { m_dateTime = value; }
    inline void SetDateTime(Aws::Utils::DateTime&& value) { m_dateTime = std::move(value); }
    inline XmlTimestampsResponse& WithDateTime(const Aws::Utils::DateTime& value) { SetDateTime(value); return *this;}
    inline XmlTimestampsResponse& WithDateTime(Aws::Utils::DateTime&& value) { SetDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetDateTimeOnTarget() const{ return m_dateTimeOnTarget; }
    inline void SetDateTimeOnTarget(const Aws::Utils::DateTime& value) { m_dateTimeOnTarget = value; }
    inline void SetDateTimeOnTarget(Aws::Utils::DateTime&& value) { m_dateTimeOnTarget = std::move(value); }
    inline XmlTimestampsResponse& WithDateTimeOnTarget(const Aws::Utils::DateTime& value) { SetDateTimeOnTarget(value); return *this;}
    inline XmlTimestampsResponse& WithDateTimeOnTarget(Aws::Utils::DateTime&& value) { SetDateTimeOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetEpochSeconds() const{ return m_epochSeconds; }
    inline void SetEpochSeconds(const Aws::Utils::DateTime& value) { m_epochSeconds = value; }
    inline void SetEpochSeconds(Aws::Utils::DateTime&& value) { m_epochSeconds = std::move(value); }
    inline XmlTimestampsResponse& WithEpochSeconds(const Aws::Utils::DateTime& value) { SetEpochSeconds(value); return *this;}
    inline XmlTimestampsResponse& WithEpochSeconds(Aws::Utils::DateTime&& value) { SetEpochSeconds(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetEpochSecondsOnTarget() const{ return m_epochSecondsOnTarget; }
    inline void SetEpochSecondsOnTarget(const Aws::Utils::DateTime& value) { m_epochSecondsOnTarget = value; }
    inline void SetEpochSecondsOnTarget(Aws::Utils::DateTime&& value) { m_epochSecondsOnTarget = std::move(value); }
    inline XmlTimestampsResponse& WithEpochSecondsOnTarget(const Aws::Utils::DateTime& value) { SetEpochSecondsOnTarget(value); return *this;}
    inline XmlTimestampsResponse& WithEpochSecondsOnTarget(Aws::Utils::DateTime&& value) { SetEpochSecondsOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetHttpDate() const{ return m_httpDate; }
    inline void SetHttpDate(const Aws::Utils::DateTime& value) { m_httpDate = value; }
    inline void SetHttpDate(Aws::Utils::DateTime&& value) { m_httpDate = std::move(value); }
    inline XmlTimestampsResponse& WithHttpDate(const Aws::Utils::DateTime& value) { SetHttpDate(value); return *this;}
    inline XmlTimestampsResponse& WithHttpDate(Aws::Utils::DateTime&& value) { SetHttpDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetHttpDateOnTarget() const{ return m_httpDateOnTarget; }
    inline void SetHttpDateOnTarget(const Aws::Utils::DateTime& value) { m_httpDateOnTarget = value; }
    inline void SetHttpDateOnTarget(Aws::Utils::DateTime&& value) { m_httpDateOnTarget = std::move(value); }
    inline XmlTimestampsResponse& WithHttpDateOnTarget(const Aws::Utils::DateTime& value) { SetHttpDateOnTarget(value); return *this;}
    inline XmlTimestampsResponse& WithHttpDateOnTarget(Aws::Utils::DateTime&& value) { SetHttpDateOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline XmlTimestampsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline XmlTimestampsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_normal;

    Aws::Utils::DateTime m_dateTime;

    Aws::Utils::DateTime m_dateTimeOnTarget;

    Aws::Utils::DateTime m_epochSeconds;

    Aws::Utils::DateTime m_epochSecondsOnTarget;

    Aws::Utils::DateTime m_httpDate;

    Aws::Utils::DateTime m_httpDateOnTarget;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
