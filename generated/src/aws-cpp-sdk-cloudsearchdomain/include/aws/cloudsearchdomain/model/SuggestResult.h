/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/cloudsearchdomain/model/SuggestStatus.h>
#include <aws/cloudsearchdomain/model/SuggestModel.h>
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
namespace CloudSearchDomain
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>Suggest</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/SuggestResponse">AWS
   * API Reference</a></p>
   */
  class SuggestResult
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API SuggestResult() = default;
    AWS_CLOUDSEARCHDOMAIN_API SuggestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDSEARCHDOMAIN_API SuggestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of a <code>SuggestRequest</code>. Contains the resource ID
     * (<code>rid</code>) and how long it took to process the request
     * (<code>timems</code>).</p>
     */
    inline const SuggestStatus& GetStatus() const { return m_status; }
    template<typename StatusT = SuggestStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = SuggestStatus>
    SuggestResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for the matching search suggestion information.</p>
     */
    inline const SuggestModel& GetSuggest() const { return m_suggest; }
    template<typename SuggestT = SuggestModel>
    void SetSuggest(SuggestT&& value) { m_suggestHasBeenSet = true; m_suggest = std::forward<SuggestT>(value); }
    template<typename SuggestT = SuggestModel>
    SuggestResult& WithSuggest(SuggestT&& value) { SetSuggest(std::forward<SuggestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SuggestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SuggestStatus m_status;
    bool m_statusHasBeenSet = false;

    SuggestModel m_suggest;
    bool m_suggestHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
