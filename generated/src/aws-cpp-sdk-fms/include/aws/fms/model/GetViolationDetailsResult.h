/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ViolationDetail.h>
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


    /**
     * <p>Violation detail for a resource.</p>
     */
    inline const ViolationDetail& GetViolationDetail() const{ return m_violationDetail; }

    /**
     * <p>Violation detail for a resource.</p>
     */
    inline void SetViolationDetail(const ViolationDetail& value) { m_violationDetail = value; }

    /**
     * <p>Violation detail for a resource.</p>
     */
    inline void SetViolationDetail(ViolationDetail&& value) { m_violationDetail = std::move(value); }

    /**
     * <p>Violation detail for a resource.</p>
     */
    inline GetViolationDetailsResult& WithViolationDetail(const ViolationDetail& value) { SetViolationDetail(value); return *this;}

    /**
     * <p>Violation detail for a resource.</p>
     */
    inline GetViolationDetailsResult& WithViolationDetail(ViolationDetail&& value) { SetViolationDetail(std::move(value)); return *this;}

  private:

    ViolationDetail m_violationDetail;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
