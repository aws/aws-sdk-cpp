/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearchdomain/model/DocumentServiceWarning.h>
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
   * <p>Contains the response to an <code>UploadDocuments</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/UploadDocumentsResponse">AWS
   * API Reference</a></p>
   */
  class UploadDocumentsResult
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API UploadDocumentsResult() = default;
    AWS_CLOUDSEARCHDOMAIN_API UploadDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDSEARCHDOMAIN_API UploadDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of an <code>UploadDocumentsRequest</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    UploadDocumentsResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents that were added to the search domain.</p>
     */
    inline long long GetAdds() const { return m_adds; }
    inline void SetAdds(long long value) { m_addsHasBeenSet = true; m_adds = value; }
    inline UploadDocumentsResult& WithAdds(long long value) { SetAdds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents that were deleted from the search domain.</p>
     */
    inline long long GetDeletes() const { return m_deletes; }
    inline void SetDeletes(long long value) { m_deletesHasBeenSet = true; m_deletes = value; }
    inline UploadDocumentsResult& WithDeletes(long long value) { SetDeletes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any warnings returned by the document service about the documents being
     * uploaded.</p>
     */
    inline const Aws::Vector<DocumentServiceWarning>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<DocumentServiceWarning>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<DocumentServiceWarning>>
    UploadDocumentsResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = DocumentServiceWarning>
    UploadDocumentsResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UploadDocumentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    long long m_adds{0};
    bool m_addsHasBeenSet = false;

    long long m_deletes{0};
    bool m_deletesHasBeenSet = false;

    Aws::Vector<DocumentServiceWarning> m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
