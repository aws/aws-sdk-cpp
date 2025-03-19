/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/macie2/model/RevealRequestStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/DetectedDataDetails.h>
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
namespace Macie2
{
namespace Model
{
  class GetSensitiveDataOccurrencesResult
  {
  public:
    AWS_MACIE2_API GetSensitiveDataOccurrencesResult() = default;
    AWS_MACIE2_API GetSensitiveDataOccurrencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetSensitiveDataOccurrencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If an error occurred when Amazon Macie attempted to retrieve occurrences of
     * sensitive data reported by the finding, a description of the error that
     * occurred. This value is null if the status (status) of the request is PROCESSING
     * or SUCCESS.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    GetSensitiveDataOccurrencesResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that specifies 1-100 types of sensitive data reported by the finding
     * and, for each type, 1-10 occurrences of sensitive data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>>& GetSensitiveDataOccurrences() const { return m_sensitiveDataOccurrences; }
    template<typename SensitiveDataOccurrencesT = Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>>>
    void SetSensitiveDataOccurrences(SensitiveDataOccurrencesT&& value) { m_sensitiveDataOccurrencesHasBeenSet = true; m_sensitiveDataOccurrences = std::forward<SensitiveDataOccurrencesT>(value); }
    template<typename SensitiveDataOccurrencesT = Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>>>
    GetSensitiveDataOccurrencesResult& WithSensitiveDataOccurrences(SensitiveDataOccurrencesT&& value) { SetSensitiveDataOccurrences(std::forward<SensitiveDataOccurrencesT>(value)); return *this;}
    template<typename SensitiveDataOccurrencesKeyT = Aws::String, typename SensitiveDataOccurrencesValueT = Aws::Vector<DetectedDataDetails>>
    GetSensitiveDataOccurrencesResult& AddSensitiveDataOccurrences(SensitiveDataOccurrencesKeyT&& key, SensitiveDataOccurrencesValueT&& value) {
      m_sensitiveDataOccurrencesHasBeenSet = true; m_sensitiveDataOccurrences.emplace(std::forward<SensitiveDataOccurrencesKeyT>(key), std::forward<SensitiveDataOccurrencesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the request to retrieve occurrences of sensitive data reported
     * by the finding. Possible values are:</p> <ul><li><p>ERROR - An error occurred
     * when Amazon Macie attempted to locate, retrieve, or encrypt the sensitive data.
     * The error value indicates the nature of the error that occurred.</p></li>
     * <li><p>PROCESSING - Macie is processing the request.</p></li> <li><p>SUCCESS -
     * Macie successfully located, retrieved, and encrypted the sensitive
     * data.</p></li></ul>
     */
    inline RevealRequestStatus GetStatus() const { return m_status; }
    inline void SetStatus(RevealRequestStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSensitiveDataOccurrencesResult& WithStatus(RevealRequestStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSensitiveDataOccurrencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<DetectedDataDetails>> m_sensitiveDataOccurrences;
    bool m_sensitiveDataOccurrencesHasBeenSet = false;

    RevealRequestStatus m_status{RevealRequestStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
