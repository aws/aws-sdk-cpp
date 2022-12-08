/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/SpendLimit.h>
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
  class DescribeSpendLimitsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeSpendLimitsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeSpendLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeSpendLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of SpendLimit objects that contain the details for the requested
     * spend limits.</p>
     */
    inline const Aws::Vector<SpendLimit>& GetSpendLimits() const{ return m_spendLimits; }

    /**
     * <p>An array of SpendLimit objects that contain the details for the requested
     * spend limits.</p>
     */
    inline void SetSpendLimits(const Aws::Vector<SpendLimit>& value) { m_spendLimits = value; }

    /**
     * <p>An array of SpendLimit objects that contain the details for the requested
     * spend limits.</p>
     */
    inline void SetSpendLimits(Aws::Vector<SpendLimit>&& value) { m_spendLimits = std::move(value); }

    /**
     * <p>An array of SpendLimit objects that contain the details for the requested
     * spend limits.</p>
     */
    inline DescribeSpendLimitsResult& WithSpendLimits(const Aws::Vector<SpendLimit>& value) { SetSpendLimits(value); return *this;}

    /**
     * <p>An array of SpendLimit objects that contain the details for the requested
     * spend limits.</p>
     */
    inline DescribeSpendLimitsResult& WithSpendLimits(Aws::Vector<SpendLimit>&& value) { SetSpendLimits(std::move(value)); return *this;}

    /**
     * <p>An array of SpendLimit objects that contain the details for the requested
     * spend limits.</p>
     */
    inline DescribeSpendLimitsResult& AddSpendLimits(const SpendLimit& value) { m_spendLimits.push_back(value); return *this; }

    /**
     * <p>An array of SpendLimit objects that contain the details for the requested
     * spend limits.</p>
     */
    inline DescribeSpendLimitsResult& AddSpendLimits(SpendLimit&& value) { m_spendLimits.push_back(std::move(value)); return *this; }


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
    inline DescribeSpendLimitsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeSpendLimitsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeSpendLimitsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SpendLimit> m_spendLimits;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
