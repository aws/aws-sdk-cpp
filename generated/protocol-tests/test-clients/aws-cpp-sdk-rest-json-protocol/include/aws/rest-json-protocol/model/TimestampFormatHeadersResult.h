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
  class TimestampFormatHeadersResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API TimestampFormatHeadersResult();
    AWS_RESTJSONPROTOCOL_API TimestampFormatHeadersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API TimestampFormatHeadersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Utils::DateTime& GetMemberEpochSeconds() const{ return m_memberEpochSeconds; }
    inline void SetMemberEpochSeconds(const Aws::Utils::DateTime& value) { m_memberEpochSeconds = value; }
    inline void SetMemberEpochSeconds(Aws::Utils::DateTime&& value) { m_memberEpochSeconds = std::move(value); }
    inline TimestampFormatHeadersResult& WithMemberEpochSeconds(const Aws::Utils::DateTime& value) { SetMemberEpochSeconds(value); return *this;}
    inline TimestampFormatHeadersResult& WithMemberEpochSeconds(Aws::Utils::DateTime&& value) { SetMemberEpochSeconds(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetMemberHttpDate() const{ return m_memberHttpDate; }
    inline void SetMemberHttpDate(const Aws::Utils::DateTime& value) { m_memberHttpDate = value; }
    inline void SetMemberHttpDate(Aws::Utils::DateTime&& value) { m_memberHttpDate = std::move(value); }
    inline TimestampFormatHeadersResult& WithMemberHttpDate(const Aws::Utils::DateTime& value) { SetMemberHttpDate(value); return *this;}
    inline TimestampFormatHeadersResult& WithMemberHttpDate(Aws::Utils::DateTime&& value) { SetMemberHttpDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetMemberDateTime() const{ return m_memberDateTime; }
    inline void SetMemberDateTime(const Aws::Utils::DateTime& value) { m_memberDateTime = value; }
    inline void SetMemberDateTime(Aws::Utils::DateTime&& value) { m_memberDateTime = std::move(value); }
    inline TimestampFormatHeadersResult& WithMemberDateTime(const Aws::Utils::DateTime& value) { SetMemberDateTime(value); return *this;}
    inline TimestampFormatHeadersResult& WithMemberDateTime(Aws::Utils::DateTime&& value) { SetMemberDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetDefaultFormat() const{ return m_defaultFormat; }
    inline void SetDefaultFormat(const Aws::Utils::DateTime& value) { m_defaultFormat = value; }
    inline void SetDefaultFormat(Aws::Utils::DateTime&& value) { m_defaultFormat = std::move(value); }
    inline TimestampFormatHeadersResult& WithDefaultFormat(const Aws::Utils::DateTime& value) { SetDefaultFormat(value); return *this;}
    inline TimestampFormatHeadersResult& WithDefaultFormat(Aws::Utils::DateTime&& value) { SetDefaultFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTargetEpochSeconds() const{ return m_targetEpochSeconds; }
    inline void SetTargetEpochSeconds(const Aws::Utils::DateTime& value) { m_targetEpochSeconds = value; }
    inline void SetTargetEpochSeconds(Aws::Utils::DateTime&& value) { m_targetEpochSeconds = std::move(value); }
    inline TimestampFormatHeadersResult& WithTargetEpochSeconds(const Aws::Utils::DateTime& value) { SetTargetEpochSeconds(value); return *this;}
    inline TimestampFormatHeadersResult& WithTargetEpochSeconds(Aws::Utils::DateTime&& value) { SetTargetEpochSeconds(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTargetHttpDate() const{ return m_targetHttpDate; }
    inline void SetTargetHttpDate(const Aws::Utils::DateTime& value) { m_targetHttpDate = value; }
    inline void SetTargetHttpDate(Aws::Utils::DateTime&& value) { m_targetHttpDate = std::move(value); }
    inline TimestampFormatHeadersResult& WithTargetHttpDate(const Aws::Utils::DateTime& value) { SetTargetHttpDate(value); return *this;}
    inline TimestampFormatHeadersResult& WithTargetHttpDate(Aws::Utils::DateTime&& value) { SetTargetHttpDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTargetDateTime() const{ return m_targetDateTime; }
    inline void SetTargetDateTime(const Aws::Utils::DateTime& value) { m_targetDateTime = value; }
    inline void SetTargetDateTime(Aws::Utils::DateTime&& value) { m_targetDateTime = std::move(value); }
    inline TimestampFormatHeadersResult& WithTargetDateTime(const Aws::Utils::DateTime& value) { SetTargetDateTime(value); return *this;}
    inline TimestampFormatHeadersResult& WithTargetDateTime(Aws::Utils::DateTime&& value) { SetTargetDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TimestampFormatHeadersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TimestampFormatHeadersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TimestampFormatHeadersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_memberEpochSeconds;

    Aws::Utils::DateTime m_memberHttpDate;

    Aws::Utils::DateTime m_memberDateTime;

    Aws::Utils::DateTime m_defaultFormat;

    Aws::Utils::DateTime m_targetEpochSeconds;

    Aws::Utils::DateTime m_targetHttpDate;

    Aws::Utils::DateTime m_targetDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
