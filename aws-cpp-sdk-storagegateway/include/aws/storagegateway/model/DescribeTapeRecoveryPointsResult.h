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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/TapeRecoveryPointInfo.h>
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
   * <p>DescribeTapeRecoveryPointsOutput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeRecoveryPointsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API DescribeTapeRecoveryPointsResult
  {
  public:
    DescribeTapeRecoveryPointsResult();
    DescribeTapeRecoveryPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTapeRecoveryPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeTapeRecoveryPointsResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeTapeRecoveryPointsResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline DescribeTapeRecoveryPointsResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An array of TapeRecoveryPointInfos that are available for the specified
     * gateway.</p>
     */
    inline const Aws::Vector<TapeRecoveryPointInfo>& GetTapeRecoveryPointInfos() const{ return m_tapeRecoveryPointInfos; }

    /**
     * <p>An array of TapeRecoveryPointInfos that are available for the specified
     * gateway.</p>
     */
    inline void SetTapeRecoveryPointInfos(const Aws::Vector<TapeRecoveryPointInfo>& value) { m_tapeRecoveryPointInfos = value; }

    /**
     * <p>An array of TapeRecoveryPointInfos that are available for the specified
     * gateway.</p>
     */
    inline void SetTapeRecoveryPointInfos(Aws::Vector<TapeRecoveryPointInfo>&& value) { m_tapeRecoveryPointInfos = std::move(value); }

    /**
     * <p>An array of TapeRecoveryPointInfos that are available for the specified
     * gateway.</p>
     */
    inline DescribeTapeRecoveryPointsResult& WithTapeRecoveryPointInfos(const Aws::Vector<TapeRecoveryPointInfo>& value) { SetTapeRecoveryPointInfos(value); return *this;}

    /**
     * <p>An array of TapeRecoveryPointInfos that are available for the specified
     * gateway.</p>
     */
    inline DescribeTapeRecoveryPointsResult& WithTapeRecoveryPointInfos(Aws::Vector<TapeRecoveryPointInfo>&& value) { SetTapeRecoveryPointInfos(std::move(value)); return *this;}

    /**
     * <p>An array of TapeRecoveryPointInfos that are available for the specified
     * gateway.</p>
     */
    inline DescribeTapeRecoveryPointsResult& AddTapeRecoveryPointInfos(const TapeRecoveryPointInfo& value) { m_tapeRecoveryPointInfos.push_back(value); return *this; }

    /**
     * <p>An array of TapeRecoveryPointInfos that are available for the specified
     * gateway.</p>
     */
    inline DescribeTapeRecoveryPointsResult& AddTapeRecoveryPointInfos(TapeRecoveryPointInfo&& value) { m_tapeRecoveryPointInfos.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string that indicates the position at which the virtual tape
     * recovery points that were listed for description ended.</p> <p>Use this marker
     * in your next request to list the next set of virtual tape recovery points in the
     * list. If there are no more recovery points to describe, this field does not
     * appear in the response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string that indicates the position at which the virtual tape
     * recovery points that were listed for description ended.</p> <p>Use this marker
     * in your next request to list the next set of virtual tape recovery points in the
     * list. If there are no more recovery points to describe, this field does not
     * appear in the response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An opaque string that indicates the position at which the virtual tape
     * recovery points that were listed for description ended.</p> <p>Use this marker
     * in your next request to list the next set of virtual tape recovery points in the
     * list. If there are no more recovery points to describe, this field does not
     * appear in the response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An opaque string that indicates the position at which the virtual tape
     * recovery points that were listed for description ended.</p> <p>Use this marker
     * in your next request to list the next set of virtual tape recovery points in the
     * list. If there are no more recovery points to describe, this field does not
     * appear in the response.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which the virtual tape
     * recovery points that were listed for description ended.</p> <p>Use this marker
     * in your next request to list the next set of virtual tape recovery points in the
     * list. If there are no more recovery points to describe, this field does not
     * appear in the response.</p>
     */
    inline DescribeTapeRecoveryPointsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which the virtual tape
     * recovery points that were listed for description ended.</p> <p>Use this marker
     * in your next request to list the next set of virtual tape recovery points in the
     * list. If there are no more recovery points to describe, this field does not
     * appear in the response.</p>
     */
    inline DescribeTapeRecoveryPointsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates the position at which the virtual tape
     * recovery points that were listed for description ended.</p> <p>Use this marker
     * in your next request to list the next set of virtual tape recovery points in the
     * list. If there are no more recovery points to describe, this field does not
     * appear in the response.</p>
     */
    inline DescribeTapeRecoveryPointsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_gatewayARN;

    Aws::Vector<TapeRecoveryPointInfo> m_tapeRecoveryPointInfos;

    Aws::String m_marker;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
