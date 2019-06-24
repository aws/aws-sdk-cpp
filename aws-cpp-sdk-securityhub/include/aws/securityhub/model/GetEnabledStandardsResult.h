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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StandardsSubscription.h>
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
namespace SecurityHub
{
namespace Model
{
  class AWS_SECURITYHUB_API GetEnabledStandardsResult
  {
  public:
    GetEnabledStandardsResult();
    GetEnabledStandardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEnabledStandardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline const Aws::Vector<StandardsSubscription>& GetStandardsSubscriptions() const{ return m_standardsSubscriptions; }

    /**
     * <p>A list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline void SetStandardsSubscriptions(const Aws::Vector<StandardsSubscription>& value) { m_standardsSubscriptions = value; }

    /**
     * <p>A list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline void SetStandardsSubscriptions(Aws::Vector<StandardsSubscription>&& value) { m_standardsSubscriptions = std::move(value); }

    /**
     * <p>A list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline GetEnabledStandardsResult& WithStandardsSubscriptions(const Aws::Vector<StandardsSubscription>& value) { SetStandardsSubscriptions(value); return *this;}

    /**
     * <p>A list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline GetEnabledStandardsResult& WithStandardsSubscriptions(Aws::Vector<StandardsSubscription>&& value) { SetStandardsSubscriptions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline GetEnabledStandardsResult& AddStandardsSubscriptions(const StandardsSubscription& value) { m_standardsSubscriptions.push_back(value); return *this; }

    /**
     * <p>A list of <code>StandardsSubscriptions</code> objects that include
     * information about the enabled standards.</p>
     */
    inline GetEnabledStandardsResult& AddStandardsSubscriptions(StandardsSubscription&& value) { m_standardsSubscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that is required for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline GetEnabledStandardsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline GetEnabledStandardsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline GetEnabledStandardsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StandardsSubscription> m_standardsSubscriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
