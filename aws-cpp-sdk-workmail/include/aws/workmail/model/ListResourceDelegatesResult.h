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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/Delegate.h>
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
namespace WorkMail
{
namespace Model
{
  class AWS_WORKMAIL_API ListResourceDelegatesResult
  {
  public:
    ListResourceDelegatesResult();
    ListResourceDelegatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListResourceDelegatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline const Aws::Vector<Delegate>& GetDelegates() const{ return m_delegates; }

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline void SetDelegates(const Aws::Vector<Delegate>& value) { m_delegates = value; }

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline void SetDelegates(Aws::Vector<Delegate>&& value) { m_delegates = std::move(value); }

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline ListResourceDelegatesResult& WithDelegates(const Aws::Vector<Delegate>& value) { SetDelegates(value); return *this;}

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline ListResourceDelegatesResult& WithDelegates(Aws::Vector<Delegate>&& value) { SetDelegates(std::move(value)); return *this;}

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline ListResourceDelegatesResult& AddDelegates(const Delegate& value) { m_delegates.push_back(value); return *this; }

    /**
     * <p>One page of the resource's delegates.</p>
     */
    inline ListResourceDelegatesResult& AddDelegates(Delegate&& value) { m_delegates.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty. </p>
     */
    inline ListResourceDelegatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty. </p>
     */
    inline ListResourceDelegatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to paginate through the delegates associated with a resource.
     * While results are still available, it has an associated value. When the last
     * page is reached, the token is empty. </p>
     */
    inline ListResourceDelegatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Delegate> m_delegates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
