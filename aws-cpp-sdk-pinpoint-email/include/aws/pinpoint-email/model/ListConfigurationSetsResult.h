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
   * <p>A list of configuration sets in your Amazon Pinpoint account in the current
   * AWS Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListConfigurationSetsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API ListConfigurationSetsResult
  {
  public:
    ListConfigurationSetsResult();
    ListConfigurationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConfigurationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that contains all of the configuration sets in your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationSets() const{ return m_configurationSets; }

    /**
     * <p>An array that contains all of the configuration sets in your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline void SetConfigurationSets(const Aws::Vector<Aws::String>& value) { m_configurationSets = value; }

    /**
     * <p>An array that contains all of the configuration sets in your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline void SetConfigurationSets(Aws::Vector<Aws::String>&& value) { m_configurationSets = std::move(value); }

    /**
     * <p>An array that contains all of the configuration sets in your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline ListConfigurationSetsResult& WithConfigurationSets(const Aws::Vector<Aws::String>& value) { SetConfigurationSets(value); return *this;}

    /**
     * <p>An array that contains all of the configuration sets in your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline ListConfigurationSetsResult& WithConfigurationSets(Aws::Vector<Aws::String>&& value) { SetConfigurationSets(std::move(value)); return *this;}

    /**
     * <p>An array that contains all of the configuration sets in your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline ListConfigurationSetsResult& AddConfigurationSets(const Aws::String& value) { m_configurationSets.push_back(value); return *this; }

    /**
     * <p>An array that contains all of the configuration sets in your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline ListConfigurationSetsResult& AddConfigurationSets(Aws::String&& value) { m_configurationSets.push_back(std::move(value)); return *this; }

    /**
     * <p>An array that contains all of the configuration sets in your Amazon Pinpoint
     * account in the current AWS Region.</p>
     */
    inline ListConfigurationSetsResult& AddConfigurationSets(const char* value) { m_configurationSets.push_back(value); return *this; }


    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListConfigurationSets</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListConfigurationSets</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListConfigurationSets</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListConfigurationSets</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListConfigurationSets</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline ListConfigurationSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListConfigurationSets</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline ListConfigurationSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there are additional configuration sets to list.
     * To view additional configuration sets, issue another request to
     * <code>ListConfigurationSets</code>, and pass this token in the
     * <code>NextToken</code> parameter.</p>
     */
    inline ListConfigurationSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_configurationSets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
