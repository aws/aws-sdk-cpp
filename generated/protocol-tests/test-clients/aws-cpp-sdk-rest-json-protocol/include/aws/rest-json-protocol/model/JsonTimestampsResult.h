/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RestJsonProtocol
{
namespace Model
{
  class JsonTimestampsResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API JsonTimestampsResult();
    AWS_RESTJSONPROTOCOL_API JsonTimestampsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API JsonTimestampsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Utils::DateTime& GetNormal() const{ return m_normal; }
    inline void SetNormal(const Aws::Utils::DateTime& value) { m_normal = value; }
    inline void SetNormal(Aws::Utils::DateTime&& value) { m_normal = std::move(value); }
    inline JsonTimestampsResult& WithNormal(const Aws::Utils::DateTime& value) { SetNormal(value); return *this;}
    inline JsonTimestampsResult& WithNormal(Aws::Utils::DateTime&& value) { SetNormal(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetDateTime() const{ return m_dateTime; }
    inline void SetDateTime(const Aws::Utils::DateTime& value) { m_dateTime = value; }
    inline void SetDateTime(Aws::Utils::DateTime&& value) { m_dateTime = std::move(value); }
    inline JsonTimestampsResult& WithDateTime(const Aws::Utils::DateTime& value) { SetDateTime(value); return *this;}
    inline JsonTimestampsResult& WithDateTime(Aws::Utils::DateTime&& value) { SetDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetDateTimeOnTarget() const{ return m_dateTimeOnTarget; }
    inline void SetDateTimeOnTarget(const Aws::Utils::DateTime& value) { m_dateTimeOnTarget = value; }
    inline void SetDateTimeOnTarget(Aws::Utils::DateTime&& value) { m_dateTimeOnTarget = std::move(value); }
    inline JsonTimestampsResult& WithDateTimeOnTarget(const Aws::Utils::DateTime& value) { SetDateTimeOnTarget(value); return *this;}
    inline JsonTimestampsResult& WithDateTimeOnTarget(Aws::Utils::DateTime&& value) { SetDateTimeOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetEpochSeconds() const{ return m_epochSeconds; }
    inline void SetEpochSeconds(const Aws::Utils::DateTime& value) { m_epochSeconds = value; }
    inline void SetEpochSeconds(Aws::Utils::DateTime&& value) { m_epochSeconds = std::move(value); }
    inline JsonTimestampsResult& WithEpochSeconds(const Aws::Utils::DateTime& value) { SetEpochSeconds(value); return *this;}
    inline JsonTimestampsResult& WithEpochSeconds(Aws::Utils::DateTime&& value) { SetEpochSeconds(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetEpochSecondsOnTarget() const{ return m_epochSecondsOnTarget; }
    inline void SetEpochSecondsOnTarget(const Aws::Utils::DateTime& value) { m_epochSecondsOnTarget = value; }
    inline void SetEpochSecondsOnTarget(Aws::Utils::DateTime&& value) { m_epochSecondsOnTarget = std::move(value); }
    inline JsonTimestampsResult& WithEpochSecondsOnTarget(const Aws::Utils::DateTime& value) { SetEpochSecondsOnTarget(value); return *this;}
    inline JsonTimestampsResult& WithEpochSecondsOnTarget(Aws::Utils::DateTime&& value) { SetEpochSecondsOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetHttpDate() const{ return m_httpDate; }
    inline void SetHttpDate(const Aws::Utils::DateTime& value) { m_httpDate = value; }
    inline void SetHttpDate(Aws::Utils::DateTime&& value) { m_httpDate = std::move(value); }
    inline JsonTimestampsResult& WithHttpDate(const Aws::Utils::DateTime& value) { SetHttpDate(value); return *this;}
    inline JsonTimestampsResult& WithHttpDate(Aws::Utils::DateTime&& value) { SetHttpDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetHttpDateOnTarget() const{ return m_httpDateOnTarget; }
    inline void SetHttpDateOnTarget(const Aws::Utils::DateTime& value) { m_httpDateOnTarget = value; }
    inline void SetHttpDateOnTarget(Aws::Utils::DateTime&& value) { m_httpDateOnTarget = std::move(value); }
    inline JsonTimestampsResult& WithHttpDateOnTarget(const Aws::Utils::DateTime& value) { SetHttpDateOnTarget(value); return *this;}
    inline JsonTimestampsResult& WithHttpDateOnTarget(Aws::Utils::DateTime&& value) { SetHttpDateOnTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline JsonTimestampsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonTimestampsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonTimestampsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_normal;

    Aws::Utils::DateTime m_dateTime;

    Aws::Utils::DateTime m_dateTimeOnTarget;

    Aws::Utils::DateTime m_epochSeconds;

    Aws::Utils::DateTime m_epochSecondsOnTarget;

    Aws::Utils::DateTime m_httpDate;

    Aws::Utils::DateTime m_httpDateOnTarget;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
