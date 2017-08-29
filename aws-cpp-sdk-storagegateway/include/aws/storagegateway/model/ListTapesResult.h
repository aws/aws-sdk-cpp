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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/TapeInfo.h>
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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
   * <a>ListTapesOutput$Marker</a> </p> </li> <li> <p>
   * <a>ListTapesOutput$VolumeInfos</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListTapesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API ListTapesResult
  {
  public:
    ListTapesResult();
    ListTapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<TapeInfo>& GetTapeInfos() const{ return m_tapeInfos; }

    
    inline void SetTapeInfos(const Aws::Vector<TapeInfo>& value) { m_tapeInfos = value; }

    
    inline void SetTapeInfos(Aws::Vector<TapeInfo>&& value) { m_tapeInfos = std::move(value); }

    
    inline ListTapesResult& WithTapeInfos(const Aws::Vector<TapeInfo>& value) { SetTapeInfos(value); return *this;}

    
    inline ListTapesResult& WithTapeInfos(Aws::Vector<TapeInfo>&& value) { SetTapeInfos(std::move(value)); return *this;}

    
    inline ListTapesResult& AddTapeInfos(const TapeInfo& value) { m_tapeInfos.push_back(value); return *this; }

    
    inline ListTapesResult& AddTapeInfos(TapeInfo&& value) { m_tapeInfos.push_back(std::move(value)); return *this; }


    /**
     * <p>A string that indicates the position at which to begin returning the next
     * list of tapes. Use the marker in your next request to continue pagination of
     * tapes. If there are no more tapes to list, this element does not appear in the
     * response body.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A string that indicates the position at which to begin returning the next
     * list of tapes. Use the marker in your next request to continue pagination of
     * tapes. If there are no more tapes to list, this element does not appear in the
     * response body.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A string that indicates the position at which to begin returning the next
     * list of tapes. Use the marker in your next request to continue pagination of
     * tapes. If there are no more tapes to list, this element does not appear in the
     * response body.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A string that indicates the position at which to begin returning the next
     * list of tapes. Use the marker in your next request to continue pagination of
     * tapes. If there are no more tapes to list, this element does not appear in the
     * response body.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A string that indicates the position at which to begin returning the next
     * list of tapes. Use the marker in your next request to continue pagination of
     * tapes. If there are no more tapes to list, this element does not appear in the
     * response body.</p>
     */
    inline ListTapesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A string that indicates the position at which to begin returning the next
     * list of tapes. Use the marker in your next request to continue pagination of
     * tapes. If there are no more tapes to list, this element does not appear in the
     * response body.</p>
     */
    inline ListTapesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A string that indicates the position at which to begin returning the next
     * list of tapes. Use the marker in your next request to continue pagination of
     * tapes. If there are no more tapes to list, this element does not appear in the
     * response body.</p>
     */
    inline ListTapesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<TapeInfo> m_tapeInfos;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
