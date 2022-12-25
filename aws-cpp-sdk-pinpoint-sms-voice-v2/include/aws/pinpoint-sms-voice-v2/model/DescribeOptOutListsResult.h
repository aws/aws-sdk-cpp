/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/OptOutListInformation.h>
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
  class DescribeOptOutListsResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeOptOutListsResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeOptOutListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeOptOutListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of OptOutListInformation objects that contain the details for the
     * requested OptOutLists.</p>
     */
    inline const Aws::Vector<OptOutListInformation>& GetOptOutLists() const{ return m_optOutLists; }

    /**
     * <p>An array of OptOutListInformation objects that contain the details for the
     * requested OptOutLists.</p>
     */
    inline void SetOptOutLists(const Aws::Vector<OptOutListInformation>& value) { m_optOutLists = value; }

    /**
     * <p>An array of OptOutListInformation objects that contain the details for the
     * requested OptOutLists.</p>
     */
    inline void SetOptOutLists(Aws::Vector<OptOutListInformation>&& value) { m_optOutLists = std::move(value); }

    /**
     * <p>An array of OptOutListInformation objects that contain the details for the
     * requested OptOutLists.</p>
     */
    inline DescribeOptOutListsResult& WithOptOutLists(const Aws::Vector<OptOutListInformation>& value) { SetOptOutLists(value); return *this;}

    /**
     * <p>An array of OptOutListInformation objects that contain the details for the
     * requested OptOutLists.</p>
     */
    inline DescribeOptOutListsResult& WithOptOutLists(Aws::Vector<OptOutListInformation>&& value) { SetOptOutLists(std::move(value)); return *this;}

    /**
     * <p>An array of OptOutListInformation objects that contain the details for the
     * requested OptOutLists.</p>
     */
    inline DescribeOptOutListsResult& AddOptOutLists(const OptOutListInformation& value) { m_optOutLists.push_back(value); return *this; }

    /**
     * <p>An array of OptOutListInformation objects that contain the details for the
     * requested OptOutLists.</p>
     */
    inline DescribeOptOutListsResult& AddOptOutLists(OptOutListInformation&& value) { m_optOutLists.push_back(std::move(value)); return *this; }


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
    inline DescribeOptOutListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeOptOutListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeOptOutListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OptOutListInformation> m_optOutLists;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
