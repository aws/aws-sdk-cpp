/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ErrorResult.h>
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
namespace Connect
{
namespace Model
{
  class BatchDisassociateAnalyticsDataSetResult
  {
  public:
    AWS_CONNECT_API BatchDisassociateAnalyticsDataSetResult() = default;
    AWS_CONNECT_API BatchDisassociateAnalyticsDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchDisassociateAnalyticsDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of successfully disassociated dataset identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeleted() const { return m_deleted; }
    template<typename DeletedT = Aws::Vector<Aws::String>>
    void SetDeleted(DeletedT&& value) { m_deletedHasBeenSet = true; m_deleted = std::forward<DeletedT>(value); }
    template<typename DeletedT = Aws::Vector<Aws::String>>
    BatchDisassociateAnalyticsDataSetResult& WithDeleted(DeletedT&& value) { SetDeleted(std::forward<DeletedT>(value)); return *this;}
    template<typename DeletedT = Aws::String>
    BatchDisassociateAnalyticsDataSetResult& AddDeleted(DeletedT&& value) { m_deletedHasBeenSet = true; m_deleted.emplace_back(std::forward<DeletedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of errors for any datasets not successfully removed.</p>
     */
    inline const Aws::Vector<ErrorResult>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<ErrorResult>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<ErrorResult>>
    BatchDisassociateAnalyticsDataSetResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = ErrorResult>
    BatchDisassociateAnalyticsDataSetResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDisassociateAnalyticsDataSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deleted;
    bool m_deletedHasBeenSet = false;

    Aws::Vector<ErrorResult> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
