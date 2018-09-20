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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/LogSubscription.h>
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
namespace DirectoryService
{
namespace Model
{
  class AWS_DIRECTORYSERVICE_API ListLogSubscriptionsResult
  {
  public:
    ListLogSubscriptionsResult();
    ListLogSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListLogSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of active <a>LogSubscription</a> objects for calling the AWS
     * account.</p>
     */
    inline const Aws::Vector<LogSubscription>& GetLogSubscriptions() const{ return m_logSubscriptions; }

    /**
     * <p>A list of active <a>LogSubscription</a> objects for calling the AWS
     * account.</p>
     */
    inline void SetLogSubscriptions(const Aws::Vector<LogSubscription>& value) { m_logSubscriptions = value; }

    /**
     * <p>A list of active <a>LogSubscription</a> objects for calling the AWS
     * account.</p>
     */
    inline void SetLogSubscriptions(Aws::Vector<LogSubscription>&& value) { m_logSubscriptions = std::move(value); }

    /**
     * <p>A list of active <a>LogSubscription</a> objects for calling the AWS
     * account.</p>
     */
    inline ListLogSubscriptionsResult& WithLogSubscriptions(const Aws::Vector<LogSubscription>& value) { SetLogSubscriptions(value); return *this;}

    /**
     * <p>A list of active <a>LogSubscription</a> objects for calling the AWS
     * account.</p>
     */
    inline ListLogSubscriptionsResult& WithLogSubscriptions(Aws::Vector<LogSubscription>&& value) { SetLogSubscriptions(std::move(value)); return *this;}

    /**
     * <p>A list of active <a>LogSubscription</a> objects for calling the AWS
     * account.</p>
     */
    inline ListLogSubscriptionsResult& AddLogSubscriptions(const LogSubscription& value) { m_logSubscriptions.push_back(value); return *this; }

    /**
     * <p>A list of active <a>LogSubscription</a> objects for calling the AWS
     * account.</p>
     */
    inline ListLogSubscriptionsResult& AddLogSubscriptions(LogSubscription&& value) { m_logSubscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline ListLogSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline ListLogSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return.</p>
     */
    inline ListLogSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<LogSubscription> m_logSubscriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
