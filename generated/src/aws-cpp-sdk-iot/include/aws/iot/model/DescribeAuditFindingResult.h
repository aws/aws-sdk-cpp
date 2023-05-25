/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AuditFinding.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAuditFindingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAuditFindingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAuditFindingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AuditFinding m_finding;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
