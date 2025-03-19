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
    AWS_CUSTOMERPROFILES_API GetSegmentEstimateResult() = default;
    AWS_CUSTOMERPROFILES_API GetSegmentEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetSegmentEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetSegmentEstimateResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>QueryId</code> which is the same as the value passed in
     * <code>QueryId</code>.</p>
     */
    inline const Aws::String& GetEstimateId() const { return m_estimateId; }
    template<typename EstimateIdT = Aws::String>
    void SetEstimateId(EstimateIdT&& value) { m_estimateIdHasBeenSet = true; m_estimateId = std::forward<EstimateIdT>(value); }
    template<typename EstimateIdT = Aws::String>
    GetSegmentEstimateResult& WithEstimateId(EstimateIdT&& value) { SetEstimateId(std::forward<EstimateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the query.</p>
     */
    inline EstimateStatus GetStatus() const { return m_status; }
    inline void SetStatus(EstimateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSegmentEstimateResult& WithStatus(EstimateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated number of profiles contained in the segment.</p>
     */
    inline const Aws::String& GetEstimate() const { return m_estimate; }
    template<typename EstimateT = Aws::String>
    void SetEstimate(EstimateT&& value) { m_estimateHasBeenSet = true; m_estimate = std::forward<EstimateT>(value); }
    template<typename EstimateT = Aws::String>
    GetSegmentEstimateResult& WithEstimate(EstimateT&& value) { SetEstimate(std::forward<EstimateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message if there is any error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetSegmentEstimateResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status code of the segment estimate.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline GetSegmentEstimateResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSegmentEstimateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_estimateId;
    bool m_estimateIdHasBeenSet = false;

    EstimateStatus m_status{EstimateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_estimate;
    bool m_estimateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
