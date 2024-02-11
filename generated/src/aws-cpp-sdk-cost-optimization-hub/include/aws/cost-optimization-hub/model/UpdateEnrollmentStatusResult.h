/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{
  class UpdateEnrollmentStatusResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API UpdateEnrollmentStatusResult();
    AWS_COSTOPTIMIZATIONHUB_API UpdateEnrollmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTOPTIMIZATIONHUB_API UpdateEnrollmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The enrollment status of the account.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline UpdateEnrollmentStatusResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline UpdateEnrollmentStatusResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The enrollment status of the account.</p>
     */
    inline UpdateEnrollmentStatusResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEnrollmentStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEnrollmentStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEnrollmentStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
