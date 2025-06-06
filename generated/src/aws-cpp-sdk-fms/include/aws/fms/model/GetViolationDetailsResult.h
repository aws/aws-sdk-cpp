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
    AWS_FMS_API GetViolationDetailsResult() = default;
    AWS_FMS_API GetViolationDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetViolationDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Violation detail for a resource.</p>
     */
    inline const ViolationDetail& GetViolationDetail() const { return m_violationDetail; }
    template<typename ViolationDetailT = ViolationDetail>
    void SetViolationDetail(ViolationDetailT&& value) { m_violationDetailHasBeenSet = true; m_violationDetail = std::forward<ViolationDetailT>(value); }
    template<typename ViolationDetailT = ViolationDetail>
    GetViolationDetailsResult& WithViolationDetail(ViolationDetailT&& value) { SetViolationDetail(std::forward<ViolationDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetViolationDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ViolationDetail m_violationDetail;
    bool m_violationDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
