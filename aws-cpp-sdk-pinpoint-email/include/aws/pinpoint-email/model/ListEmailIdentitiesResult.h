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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/IdentityInfo.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>A list of all of the identities that you've attempted to verify for use with
   * Amazon Pinpoint, regardless of whether or not those identities were successfully
   * verified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListEmailIdentitiesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API ListEmailIdentitiesResult
  {
  public:
    ListEmailIdentitiesResult();
    ListEmailIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListEmailIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that includes all of the identities associated with your Amazon
     * Pinpoint account.</p>
     */
    inline const Aws::Vector<IdentityInfo>& GetEmailIdentities() const{ return m_emailIdentities; }

    /**
     * <p>An array that includes all of the identities associated with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetEmailIdentities(const Aws::Vector<IdentityInfo>& value) { m_emailIdentities = value; }

    /**
     * <p>An array that includes all of the identities associated with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetEmailIdentities(Aws::Vector<IdentityInfo>&& value) { m_emailIdentities = std::move(value); }

    /**
     * <p>An array that includes all of the identities associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListEmailIdentitiesResult& WithEmailIdentities(const Aws::Vector<IdentityInfo>& value) { SetEmailIdentities(value); return *this;}

    /**
     * <p>An array that includes all of the identities associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListEmailIdentitiesResult& WithEmailIdentities(Aws::Vector<IdentityInfo>&& value) { SetEmailIdentities(std::move(value)); return *this;}

    /**
     * <p>An array that includes all of the identities associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListEmailIdentitiesResult& AddEmailIdentities(const IdentityInfo& value) { m_emailIdentities.push_back(value); return *this; }

    /**
     * <p>An array that includes all of the identities associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListEmailIdentitiesResult& AddEmailIdentities(IdentityInfo&& value) { m_emailIdentities.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListEmailIdentities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListEmailIdentities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListEmailIdentities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListEmailIdentities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListEmailIdentities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline ListEmailIdentitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListEmailIdentities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline ListEmailIdentitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListEmailIdentities</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline ListEmailIdentitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IdentityInfo> m_emailIdentities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
