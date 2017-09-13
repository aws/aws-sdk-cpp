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
#include <aws/storagegateway/model/Tape.h>
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
   * <p>DescribeTapesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeTapesResult
  {
  public:
    DescribeTapesResult();
    DescribeTapesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTapesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of virtual tape descriptions.</p>
     */
    inline const Aws::Vector<Tape>& GetTapes() const{ return m_tapes; }

    /**
     * <p>An array of virtual tape descriptions.</p>
     */
    inline void SetTapes(const Aws::Vector<Tape>& value) { m_tapes = value; }

    /**
     * <p>An array of virtual tape descriptions.</p>
     */
    inline void SetTapes(Aws::Vector<Tape>&& value) { m_tapes = std::move(value); }

    /**
     * <p>An array of virtual tape descriptions.</p>
     */
    inline DescribeTapesResult& WithTapes(const Aws::Vector<Tape>& value) { SetTapes(value); return *this;}

    /**
     * <p>An array of virtual tape descriptions.</p>
     */
    inline DescribeTapesResult& WithTapes(Aws::Vector<Tape>&& value) { SetTapes(std::move(value)); return *this;}

    /**
     * <p>An array of virtual tape descriptions.</p>
     */
    inline DescribeTapesResult& AddTapes(const Tape& value) { m_tapes.push_back(value); return *this; }

    /**
     * <p>An array of virtual tape descriptions.</p>
     */
    inline DescribeTapesResult& AddTapes(Tape&& value) { m_tapes.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string which can be used as part of a subsequent DescribeTapes call
     * to retrieve the next page of results.</p> <p>If a response does not contain a
     * marker, then there are no more results to be retrieved.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string which can be used as part of a subsequent DescribeTapes call
     * to retrieve the next page of results.</p> <p>If a response does not contain a
     * marker, then there are no more results to be retrieved.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An opaque string which can be used as part of a subsequent DescribeTapes call
     * to retrieve the next page of results.</p> <p>If a response does not contain a
     * marker, then there are no more results to be retrieved.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An opaque string which can be used as part of a subsequent DescribeTapes call
     * to retrieve the next page of results.</p> <p>If a response does not contain a
     * marker, then there are no more results to be retrieved.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An opaque string which can be used as part of a subsequent DescribeTapes call
     * to retrieve the next page of results.</p> <p>If a response does not contain a
     * marker, then there are no more results to be retrieved.</p>
     */
    inline DescribeTapesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string which can be used as part of a subsequent DescribeTapes call
     * to retrieve the next page of results.</p> <p>If a response does not contain a
     * marker, then there are no more results to be retrieved.</p>
     */
    inline DescribeTapesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string which can be used as part of a subsequent DescribeTapes call
     * to retrieve the next page of results.</p> <p>If a response does not contain a
     * marker, then there are no more results to be retrieved.</p>
     */
    inline DescribeTapesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<Tape> m_tapes;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
