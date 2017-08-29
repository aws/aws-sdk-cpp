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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/TypedLinkSpecifier.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API ListIncomingTypedLinksResult
  {
  public:
    ListIncomingTypedLinksResult();
    ListIncomingTypedLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIncomingTypedLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetLinkSpecifiers() const{ return m_linkSpecifiers; }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline void SetLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { m_linkSpecifiers = value; }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline void SetLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { m_linkSpecifiers = std::move(value); }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline ListIncomingTypedLinksResult& WithLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { SetLinkSpecifiers(value); return *this;}

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline ListIncomingTypedLinksResult& WithLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { SetLinkSpecifiers(std::move(value)); return *this;}

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline ListIncomingTypedLinksResult& AddLinkSpecifiers(const TypedLinkSpecifier& value) { m_linkSpecifiers.push_back(value); return *this; }

    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline ListIncomingTypedLinksResult& AddLinkSpecifiers(TypedLinkSpecifier&& value) { m_linkSpecifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListIncomingTypedLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListIncomingTypedLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListIncomingTypedLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TypedLinkSpecifier> m_linkSpecifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
