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
   * <p>A list of dedicated IP pools.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDedicatedIpPoolsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API ListDedicatedIpPoolsResult
  {
  public:
    ListDedicatedIpPoolsResult();
    ListDedicatedIpPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDedicatedIpPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDedicatedIpPools() const{ return m_dedicatedIpPools; }

    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetDedicatedIpPools(const Aws::Vector<Aws::String>& value) { m_dedicatedIpPools = value; }

    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline void SetDedicatedIpPools(Aws::Vector<Aws::String>&& value) { m_dedicatedIpPools = std::move(value); }

    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListDedicatedIpPoolsResult& WithDedicatedIpPools(const Aws::Vector<Aws::String>& value) { SetDedicatedIpPools(value); return *this;}

    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListDedicatedIpPoolsResult& WithDedicatedIpPools(Aws::Vector<Aws::String>&& value) { SetDedicatedIpPools(std::move(value)); return *this;}

    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListDedicatedIpPoolsResult& AddDedicatedIpPools(const Aws::String& value) { m_dedicatedIpPools.push_back(value); return *this; }

    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListDedicatedIpPoolsResult& AddDedicatedIpPools(Aws::String&& value) { m_dedicatedIpPools.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Pinpoint account.</p>
     */
    inline ListDedicatedIpPoolsResult& AddDedicatedIpPools(const char* value) { m_dedicatedIpPools.push_back(value); return *this; }


    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline ListDedicatedIpPoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline ListDedicatedIpPoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline ListDedicatedIpPoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_dedicatedIpPools;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
