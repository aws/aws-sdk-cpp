/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API DescribeAuditFindingResult
  {
  public:
    DescribeAuditFindingResult();
    DescribeAuditFindingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAuditFindingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
