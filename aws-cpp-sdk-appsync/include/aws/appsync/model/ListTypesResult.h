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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/Type.h>
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
namespace AppSync
{
namespace Model
{
  class AWS_APPSYNC_API ListTypesResult
  {
  public:
    ListTypesResult();
    ListTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline const Aws::Vector<Type>& GetTypes() const{ return m_types; }

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline void SetTypes(const Aws::Vector<Type>& value) { m_types = value; }

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline void SetTypes(Aws::Vector<Type>&& value) { m_types = std::move(value); }

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline ListTypesResult& WithTypes(const Aws::Vector<Type>& value) { SetTypes(value); return *this;}

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline ListTypesResult& WithTypes(Aws::Vector<Type>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline ListTypesResult& AddTypes(const Type& value) { m_types.push_back(value); return *this; }

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline ListTypesResult& AddTypes(Type&& value) { m_types.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier to be passed in the next request to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Type> m_types;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
