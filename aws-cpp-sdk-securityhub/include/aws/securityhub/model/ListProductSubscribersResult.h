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
  class AWS_SECURITYHUB_API ListProductSubscribersResult
  {
  public:
    ListProductSubscribersResult();
    ListProductSubscribersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProductSubscribersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of account IDs that are subscribed to the product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProductSubscribers() const{ return m_productSubscribers; }

    /**
     * <p>A list of account IDs that are subscribed to the product.</p>
     */
    inline void SetProductSubscribers(const Aws::Vector<Aws::String>& value) { m_productSubscribers = value; }

    /**
     * <p>A list of account IDs that are subscribed to the product.</p>
     */
    inline void SetProductSubscribers(Aws::Vector<Aws::String>&& value) { m_productSubscribers = std::move(value); }

    /**
     * <p>A list of account IDs that are subscribed to the product.</p>
     */
    inline ListProductSubscribersResult& WithProductSubscribers(const Aws::Vector<Aws::String>& value) { SetProductSubscribers(value); return *this;}

    /**
     * <p>A list of account IDs that are subscribed to the product.</p>
     */
    inline ListProductSubscribersResult& WithProductSubscribers(Aws::Vector<Aws::String>&& value) { SetProductSubscribers(std::move(value)); return *this;}

    /**
     * <p>A list of account IDs that are subscribed to the product.</p>
     */
    inline ListProductSubscribersResult& AddProductSubscribers(const Aws::String& value) { m_productSubscribers.push_back(value); return *this; }

    /**
     * <p>A list of account IDs that are subscribed to the product.</p>
     */
    inline ListProductSubscribersResult& AddProductSubscribers(Aws::String&& value) { m_productSubscribers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of account IDs that are subscribed to the product.</p>
     */
    inline ListProductSubscribersResult& AddProductSubscribers(const char* value) { m_productSubscribers.push_back(value); return *this; }


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
    inline ListProductSubscribersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline ListProductSubscribersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline ListProductSubscribersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_productSubscribers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
