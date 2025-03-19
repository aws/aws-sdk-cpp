/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ErrorDetail.h>
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
namespace Glue
{
namespace Model
{
  class BatchDeleteConnectionResult
  {
  public:
    AWS_GLUE_API BatchDeleteConnectionResult() = default;
    AWS_GLUE_API BatchDeleteConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchDeleteConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of names of the connection definitions that were successfully
     * deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSucceeded() const { return m_succeeded; }
    template<typename SucceededT = Aws::Vector<Aws::String>>
    void SetSucceeded(SucceededT&& value) { m_succeededHasBeenSet = true; m_succeeded = std::forward<SucceededT>(value); }
    template<typename SucceededT = Aws::Vector<Aws::String>>
    BatchDeleteConnectionResult& WithSucceeded(SucceededT&& value) { SetSucceeded(std::forward<SucceededT>(value)); return *this;}
    template<typename SucceededT = Aws::String>
    BatchDeleteConnectionResult& AddSucceeded(SucceededT&& value) { m_succeededHasBeenSet = true; m_succeeded.emplace_back(std::forward<SucceededT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map of the names of connections that were not successfully deleted to error
     * details.</p>
     */
    inline const Aws::Map<Aws::String, ErrorDetail>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Map<Aws::String, ErrorDetail>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Map<Aws::String, ErrorDetail>>
    BatchDeleteConnectionResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsKeyT = Aws::String, typename ErrorsValueT = ErrorDetail>
    BatchDeleteConnectionResult& AddErrors(ErrorsKeyT&& key, ErrorsValueT&& value) {
      m_errorsHasBeenSet = true; m_errors.emplace(std::forward<ErrorsKeyT>(key), std::forward<ErrorsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_succeeded;
    bool m_succeededHasBeenSet = false;

    Aws::Map<Aws::String, ErrorDetail> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
