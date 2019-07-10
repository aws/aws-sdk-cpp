/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLACIER_API ListMultipartUploadsResult
  {
  public:
    ListMultipartUploadsResult();
    ListMultipartUploadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListMultipartUploadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline const Aws::Vector<UploadListElement>& GetUploadsList() const{ return m_uploadsList; }

    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline void SetUploadsList(const Aws::Vector<UploadListElement>& value) { m_uploadsList = value; }

    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline void SetUploadsList(Aws::Vector<UploadListElement>&& value) { m_uploadsList = std::move(value); }

    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline ListMultipartUploadsResult& WithUploadsList(const Aws::Vector<UploadListElement>& value) { SetUploadsList(value); return *this;}

    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline ListMultipartUploadsResult& WithUploadsList(Aws::Vector<UploadListElement>&& value) { SetUploadsList(std::move(value)); return *this;}

    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline ListMultipartUploadsResult& AddUploadsList(const UploadListElement& value) { m_uploadsList.push_back(value); return *this; }

    /**
     * <p>A list of in-progress multipart uploads.</p>
     */
    inline ListMultipartUploadsResult& AddUploadsList(UploadListElement&& value) { m_uploadsList.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline ListMultipartUploadsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline ListMultipartUploadsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string that represents where to continue pagination of the results.
     * You use the marker in a new List Multipart Uploads request to obtain more
     * uploads in the list. If there are no more uploads, this value is
     * <code>null</code>.</p>
     */
    inline ListMultipartUploadsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<UploadListElement> m_uploadsList;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
