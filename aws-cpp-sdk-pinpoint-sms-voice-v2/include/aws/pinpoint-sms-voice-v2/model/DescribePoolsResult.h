/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/PoolInformation.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DescribePoolsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribePoolsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribePoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribePoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of PoolInformation objects that contain the details for the
     * requested pools. </p>
     */
    inline const Aws::Vector<PoolInformation>& GetPools() const{ return m_pools; }

    /**
     * <p>An array of PoolInformation objects that contain the details for the
     * requested pools. </p>
     */
    inline void SetPools(const Aws::Vector<PoolInformation>& value) { m_pools = value; }

    /**
     * <p>An array of PoolInformation objects that contain the details for the
     * requested pools. </p>
     */
    inline void SetPools(Aws::Vector<PoolInformation>&& value) { m_pools = std::move(value); }

    /**
     * <p>An array of PoolInformation objects that contain the details for the
     * requested pools. </p>
     */
    inline DescribePoolsResult& WithPools(const Aws::Vector<PoolInformation>& value) { SetPools(value); return *this;}

    /**
     * <p>An array of PoolInformation objects that contain the details for the
     * requested pools. </p>
     */
    inline DescribePoolsResult& WithPools(Aws::Vector<PoolInformation>&& value) { SetPools(std::move(value)); return *this;}

    /**
     * <p>An array of PoolInformation objects that contain the details for the
     * requested pools. </p>
     */
    inline DescribePoolsResult& AddPools(const PoolInformation& value) { m_pools.push_back(value); return *this; }

    /**
     * <p>An array of PoolInformation objects that contain the details for the
     * requested pools. </p>
     */
    inline DescribePoolsResult& AddPools(PoolInformation&& value) { m_pools.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribePoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribePoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribePoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PoolInformation> m_pools;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
