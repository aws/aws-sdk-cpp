/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/AccountAttribute.h>
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
  class DescribeAccountAttributesResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountAttributesResult();
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DescribeAccountAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of AccountAttributes objects.</p>
     */
    inline const Aws::Vector<AccountAttribute>& GetAccountAttributes() const{ return m_accountAttributes; }

    /**
     * <p>An array of AccountAttributes objects.</p>
     */
    inline void SetAccountAttributes(const Aws::Vector<AccountAttribute>& value) { m_accountAttributes = value; }

    /**
     * <p>An array of AccountAttributes objects.</p>
     */
    inline void SetAccountAttributes(Aws::Vector<AccountAttribute>&& value) { m_accountAttributes = std::move(value); }

    /**
     * <p>An array of AccountAttributes objects.</p>
     */
    inline DescribeAccountAttributesResult& WithAccountAttributes(const Aws::Vector<AccountAttribute>& value) { SetAccountAttributes(value); return *this;}

    /**
     * <p>An array of AccountAttributes objects.</p>
     */
    inline DescribeAccountAttributesResult& WithAccountAttributes(Aws::Vector<AccountAttribute>&& value) { SetAccountAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of AccountAttributes objects.</p>
     */
    inline DescribeAccountAttributesResult& AddAccountAttributes(const AccountAttribute& value) { m_accountAttributes.push_back(value); return *this; }

    /**
     * <p>An array of AccountAttributes objects.</p>
     */
    inline DescribeAccountAttributesResult& AddAccountAttributes(AccountAttribute&& value) { m_accountAttributes.push_back(std::move(value)); return *this; }


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
    inline DescribeAccountAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeAccountAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results. If this field is
     * empty then there are no more results.</p>
     */
    inline DescribeAccountAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccountAttribute> m_accountAttributes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
