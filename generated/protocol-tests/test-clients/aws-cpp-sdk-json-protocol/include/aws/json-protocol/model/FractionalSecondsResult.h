/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
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
namespace JsonProtocol
{
namespace Model
{
  class FractionalSecondsResult
  {
  public:
    AWS_JSONPROTOCOL_API FractionalSecondsResult();
    AWS_JSONPROTOCOL_API FractionalSecondsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API FractionalSecondsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Utils::DateTime& GetDatetime() const{ return m_datetime; }
    inline void SetDatetime(const Aws::Utils::DateTime& value) { m_datetime = value; }
    inline void SetDatetime(Aws::Utils::DateTime&& value) { m_datetime = std::move(value); }
    inline FractionalSecondsResult& WithDatetime(const Aws::Utils::DateTime& value) { SetDatetime(value); return *this;}
    inline FractionalSecondsResult& WithDatetime(Aws::Utils::DateTime&& value) { SetDatetime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline FractionalSecondsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline FractionalSecondsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline FractionalSecondsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_datetime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
