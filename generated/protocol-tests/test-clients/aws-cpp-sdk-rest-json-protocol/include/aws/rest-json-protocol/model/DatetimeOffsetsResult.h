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
  class DatetimeOffsetsResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API DatetimeOffsetsResult();
    AWS_RESTJSONPROTOCOL_API DatetimeOffsetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API DatetimeOffsetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Utils::DateTime& GetDatetime() const{ return m_datetime; }
    inline void SetDatetime(const Aws::Utils::DateTime& value) { m_datetime = value; }
    inline void SetDatetime(Aws::Utils::DateTime&& value) { m_datetime = std::move(value); }
    inline DatetimeOffsetsResult& WithDatetime(const Aws::Utils::DateTime& value) { SetDatetime(value); return *this;}
    inline DatetimeOffsetsResult& WithDatetime(Aws::Utils::DateTime&& value) { SetDatetime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DatetimeOffsetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DatetimeOffsetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DatetimeOffsetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_datetime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
