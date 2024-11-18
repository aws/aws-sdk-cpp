/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class CreateSegmentEstimateResult
  {
  public:
    AWS_CUSTOMERPROFILES_API CreateSegmentEstimateResult();
    AWS_CUSTOMERPROFILES_API CreateSegmentEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API CreateSegmentEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline CreateSegmentEstimateResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateSegmentEstimateResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateSegmentEstimateResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the resource. The value can be passed to
     * <code>GetSegmentEstimate</code> to retrieve the result of segment estimate
     * status.</p>
     */
    inline const Aws::String& GetEstimateId() const{ return m_estimateId; }
    inline void SetEstimateId(const Aws::String& value) { m_estimateId = value; }
    inline void SetEstimateId(Aws::String&& value) { m_estimateId = std::move(value); }
    inline void SetEstimateId(const char* value) { m_estimateId.assign(value); }
    inline CreateSegmentEstimateResult& WithEstimateId(const Aws::String& value) { SetEstimateId(value); return *this;}
    inline CreateSegmentEstimateResult& WithEstimateId(Aws::String&& value) { SetEstimateId(std::move(value)); return *this;}
    inline CreateSegmentEstimateResult& WithEstimateId(const char* value) { SetEstimateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code for the response.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCode = value; }
    inline CreateSegmentEstimateResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSegmentEstimateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSegmentEstimateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSegmentEstimateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::String m_estimateId;

    int m_statusCode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
