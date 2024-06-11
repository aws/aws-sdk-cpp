﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ViolationDetail.h>
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
namespace FMS
{
namespace Model
{
  class GetViolationDetailsResult
  {
  public:
    AWS_FMS_API GetViolationDetailsResult();
    AWS_FMS_API GetViolationDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetViolationDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Violation detail for a resource.</p>
     */
    inline const ViolationDetail& GetViolationDetail() const{ return m_violationDetail; }
    inline void SetViolationDetail(const ViolationDetail& value) { m_violationDetail = value; }
    inline void SetViolationDetail(ViolationDetail&& value) { m_violationDetail = std::move(value); }
    inline GetViolationDetailsResult& WithViolationDetail(const ViolationDetail& value) { SetViolationDetail(value); return *this;}
    inline GetViolationDetailsResult& WithViolationDetail(ViolationDetail&& value) { SetViolationDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetViolationDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetViolationDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetViolationDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ViolationDetail m_violationDetail;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
