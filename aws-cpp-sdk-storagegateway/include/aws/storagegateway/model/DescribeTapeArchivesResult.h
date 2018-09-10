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
#include <aws/storagegateway/model/TapeArchive.h>
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
   * <p>DescribeTapeArchivesOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeArchivesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeTapeArchivesResult
  {
  public:
    DescribeTapeArchivesResult();
    DescribeTapeArchivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTapeArchivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description and tape
     * barcode.</p>
     */
    inline const Aws::Vector<TapeArchive>& GetTapeArchives() const{ return m_tapeArchives; }

    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description and tape
     * barcode.</p>
     */
    inline void SetTapeArchives(const Aws::Vector<TapeArchive>& value) { m_tapeArchives = value; }

    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description and tape
     * barcode.</p>
     */
    inline void SetTapeArchives(Aws::Vector<TapeArchive>&& value) { m_tapeArchives = std::move(value); }

    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description and tape
     * barcode.</p>
     */
    inline DescribeTapeArchivesResult& WithTapeArchives(const Aws::Vector<TapeArchive>& value) { SetTapeArchives(value); return *this;}

    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description and tape
     * barcode.</p>
     */
    inline DescribeTapeArchivesResult& WithTapeArchives(Aws::Vector<TapeArchive>&& value) { SetTapeArchives(std::move(value)); return *this;}

    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description and tape
     * barcode.</p>
     */
    inline DescribeTapeArchivesResult& AddTapeArchives(const TapeArchive& value) { m_tapeArchives.push_back(value); return *this; }

    /**
     * <p>An array of virtual tape objects in the virtual tape shelf (VTS). The
     * description includes of the Amazon Resource Name (ARN) of the virtual tapes. The
     * information returned includes the Amazon Resource Names (ARNs) of the tapes,
     * size of the tapes, status of the tapes, progress of the description and tape
     * barcode.</p>
     */
    inline DescribeTapeArchivesResult& AddTapeArchives(TapeArchive&& value) { m_tapeArchives.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline DescribeTapeArchivesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline DescribeTapeArchivesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates the position at which the virtual tapes that
     * were fetched for description ended. Use this marker in your next request to
     * fetch the next set of virtual tapes in the virtual tape shelf (VTS). If there
     * are no more virtual tapes to describe, this field does not appear in the
     * response.</p>
     */
    inline DescribeTapeArchivesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::Vector<TapeArchive> m_tapeArchives;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
