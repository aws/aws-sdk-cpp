﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateHoursOfOperationResult
  {
  public:
    AWS_CONNECT_API CreateHoursOfOperationResult();
    AWS_CONNECT_API CreateHoursOfOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateHoursOfOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationId = value; }
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationId = std::move(value); }
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationId.assign(value); }
    inline CreateHoursOfOperationResult& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}
    inline CreateHoursOfOperationResult& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}
    inline CreateHoursOfOperationResult& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationArn() const{ return m_hoursOfOperationArn; }
    inline void SetHoursOfOperationArn(const Aws::String& value) { m_hoursOfOperationArn = value; }
    inline void SetHoursOfOperationArn(Aws::String&& value) { m_hoursOfOperationArn = std::move(value); }
    inline void SetHoursOfOperationArn(const char* value) { m_hoursOfOperationArn.assign(value); }
    inline CreateHoursOfOperationResult& WithHoursOfOperationArn(const Aws::String& value) { SetHoursOfOperationArn(value); return *this;}
    inline CreateHoursOfOperationResult& WithHoursOfOperationArn(Aws::String&& value) { SetHoursOfOperationArn(std::move(value)); return *this;}
    inline CreateHoursOfOperationResult& WithHoursOfOperationArn(const char* value) { SetHoursOfOperationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateHoursOfOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateHoursOfOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateHoursOfOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hoursOfOperationId;

    Aws::String m_hoursOfOperationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
