/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AnalyticsDataAssociationResult.h>
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
  class BatchAssociateAnalyticsDataSetResult
  {
  public:
    AWS_CONNECT_API BatchAssociateAnalyticsDataSetResult() = default;
    AWS_CONNECT_API BatchAssociateAnalyticsDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API BatchAssociateAnalyticsDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about associations that are successfully created:
     * <code>DataSetId</code>, <code>TargetAccountId</code>,
     * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p>
     */
    inline const Aws::Vector<AnalyticsDataAssociationResult>& GetCreated() const { return m_created; }
    template<typename CreatedT = Aws::Vector<AnalyticsDataAssociationResult>>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Vector<AnalyticsDataAssociationResult>>
    BatchAssociateAnalyticsDataSetResult& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    template<typename CreatedT = AnalyticsDataAssociationResult>
    BatchAssociateAnalyticsDataSetResult& AddCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created.emplace_back(std::forward<CreatedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of errors for datasets that aren't successfully associated with the
     * target account.</p>
     */
    inline const Aws::Vector<ErrorResult>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<ErrorResult>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<ErrorResult>>
    BatchAssociateAnalyticsDataSetResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = ErrorResult>
    BatchAssociateAnalyticsDataSetResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAssociateAnalyticsDataSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalyticsDataAssociationResult> m_created;
    bool m_createdHasBeenSet = false;

    Aws::Vector<ErrorResult> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
