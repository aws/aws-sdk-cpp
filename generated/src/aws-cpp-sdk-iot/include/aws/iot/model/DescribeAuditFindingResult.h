/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuditFinding.h>
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
namespace IoT
{
namespace Model
{
  class DescribeAuditFindingResult
  {
  public:
    AWS_IOT_API DescribeAuditFindingResult();
    AWS_IOT_API DescribeAuditFindingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeAuditFindingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AuditFinding& GetFinding() const{ return m_finding; }

    
    inline void SetFinding(const AuditFinding& value) { m_finding = value; }

    
    inline void SetFinding(AuditFinding&& value) { m_finding = std::move(value); }

    
    inline DescribeAuditFindingResult& WithFinding(const AuditFinding& value) { SetFinding(value); return *this;}

    
    inline DescribeAuditFindingResult& WithFinding(AuditFinding&& value) { SetFinding(std::move(value)); return *this;}

  private:

    AuditFinding m_finding;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
