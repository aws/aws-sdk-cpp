/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/EstimateStatus.h>
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
  class GetSegmentEstimateResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSegmentEstimateResult();
    AWS_CUSTOMERPROFILES_API GetSegmentEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSegmentEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline GetSegmentEstimateResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetSegmentEstimateResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetSegmentEstimateResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>QueryId</code> which is the same as the value passed in
     * <code>QueryId</code>.</p>
     */
    inline const Aws::String& GetEstimateId() const{ return m_estimateId; }
    inline void SetEstimateId(const Aws::String& value) { m_estimateId = value; }
    inline void SetEstimateId(Aws::String&& value) { m_estimateId = std::move(value); }
    inline void SetEstimateId(const char* value) { m_estimateId.assign(value); }
    inline GetSegmentEstimateResult& WithEstimateId(const Aws::String& value) { SetEstimateId(value); return *this;}
    inline GetSegmentEstimateResult& WithEstimateId(Aws::String&& value) { SetEstimateId(std::move(value)); return *this;}
    inline GetSegmentEstimateResult& WithEstimateId(const char* value) { SetEstimateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the query.</p>
     */
    inline const EstimateStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EstimateStatus& value) { m_status = value; }
    inline void SetStatus(EstimateStatus&& value) { m_status = std::move(value); }
    inline GetSegmentEstimateResult& WithStatus(const EstimateStatus& value) { SetStatus(value); return *this;}
    inline GetSegmentEstimateResult& WithStatus(EstimateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated number of profiles contained in the segment.</p>
     */
    inline const Aws::String& GetEstimate() const{ return m_estimate; }
    inline void SetEstimate(const Aws::String& value) { m_estimate = value; }
    inline void SetEstimate(Aws::String&& value) { m_estimate = std::move(value); }
    inline void SetEstimate(const char* value) { m_estimate.assign(value); }
    inline GetSegmentEstimateResult& WithEstimate(const Aws::String& value) { SetEstimate(value); return *this;}
    inline GetSegmentEstimateResult& WithEstimate(Aws::String&& value) { SetEstimate(std::move(value)); return *this;}
    inline GetSegmentEstimateResult& WithEstimate(const char* value) { SetEstimate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message if there is any error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetSegmentEstimateResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetSegmentEstimateResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetSegmentEstimateResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code of the segment estimate.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCode = value; }
    inline GetSegmentEstimateResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSegmentEstimateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSegmentEstimateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSegmentEstimateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::String m_estimateId;

    EstimateStatus m_status;

    Aws::String m_estimate;

    Aws::String m_message;

    int m_statusCode;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
