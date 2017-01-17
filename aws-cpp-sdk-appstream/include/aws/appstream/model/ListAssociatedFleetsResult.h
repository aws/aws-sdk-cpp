﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace AppStream
{
namespace Model
{
  /**
   * <p>The response from a successful operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ListAssociatedFleetsResult">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API ListAssociatedFleetsResult
  {
  public:
    ListAssociatedFleetsResult();
    ListAssociatedFleetsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAssociatedFleetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The names of associated fleets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The names of associated fleets.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_names = value; }

    /**
     * <p>The names of associated fleets.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_names = value; }

    /**
     * <p>The names of associated fleets.</p>
     */
    inline ListAssociatedFleetsResult& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The names of associated fleets.</p>
     */
    inline ListAssociatedFleetsResult& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(value); return *this;}

    /**
     * <p>The names of associated fleets.</p>
     */
    inline ListAssociatedFleetsResult& AddNames(const Aws::String& value) { m_names.push_back(value); return *this; }

    /**
     * <p>The names of associated fleets.</p>
     */
    inline ListAssociatedFleetsResult& AddNames(Aws::String&& value) { m_names.push_back(value); return *this; }

    /**
     * <p>The names of associated fleets.</p>
     */
    inline ListAssociatedFleetsResult& AddNames(const char* value) { m_names.push_back(value); return *this; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListAssociatedFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListAssociatedFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline ListAssociatedFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_names;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
