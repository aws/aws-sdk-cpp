/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/UploadListElement.h>
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
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListMultipartUploadsOutput">AWS
   * API Reference</a></p>
   */
  class ListMultipartUploadsResult
  {
  public:
    AWS_GLACIER_API ListMultipartUploadsResult() = default;
    AWS_GLACIER_API ListMultipartUploadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListMultipartUploadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline const Aws::Vector<UploadListElement>& GetUploadsList() const { return m_uploadsList; }
    template<typename UploadsListT = Aws::Vector<UploadListElement>>
    void SetUploadsList(UploadsListT&& value) { m_uploadsListHasBeenSet = true; m_uploadsList = std::forward<UploadsListT>(value); }
    template<typename UploadsListT = Aws::Vector<UploadListElement>>
    ListMultipartUploadsResult& WithUploadsList(UploadsListT&& value) { SetUploadsList(std::forward<UploadsListT>(value)); return *this;}
    template<typename UploadsListT = UploadListElement>
    ListMultipartUploadsResult& AddUploadsList(UploadsListT&& value) { m_uploadsListHasBeenSet = true; m_uploadsList.emplace_back(std::forward<UploadsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListMultipartUploadsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMultipartUploadsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UploadListElement> m_uploadsList;
    bool m_uploadsListHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
