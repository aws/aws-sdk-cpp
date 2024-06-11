﻿/**
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
    AWS_GLACIER_API ListMultipartUploadsResult();
    AWS_GLACIER_API ListMultipartUploadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListMultipartUploadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline const Aws::Vector<UploadListElement>& GetUploadsList() const{ return m_uploadsList; }
    inline void SetUploadsList(const Aws::Vector<UploadListElement>& value) { m_uploadsList = value; }
    inline void SetUploadsList(Aws::Vector<UploadListElement>&& value) { m_uploadsList = std::move(value); }
    inline ListMultipartUploadsResult& WithUploadsList(const Aws::Vector<UploadListElement>& value) { SetUploadsList(value); return *this;}
    inline ListMultipartUploadsResult& WithUploadsList(Aws::Vector<UploadListElement>&& value) { SetUploadsList(std::move(value)); return *this;}
    inline ListMultipartUploadsResult& AddUploadsList(const UploadListElement& value) { m_uploadsList.push_back(value); return *this; }
    inline ListMultipartUploadsResult& AddUploadsList(UploadListElement&& value) { m_uploadsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline ListMultipartUploadsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListMultipartUploadsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListMultipartUploadsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMultipartUploadsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMultipartUploadsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMultipartUploadsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<UploadListElement> m_uploadsList;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
