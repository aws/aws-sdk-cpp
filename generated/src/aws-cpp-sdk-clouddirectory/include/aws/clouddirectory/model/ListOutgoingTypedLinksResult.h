/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListOutgoingTypedLinksResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListOutgoingTypedLinksResult();
    AWS_CLOUDDIRECTORY_API ListOutgoingTypedLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListOutgoingTypedLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetTypedLinkSpecifiers() const{ return m_typedLinkSpecifiers; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline void SetTypedLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { m_typedLinkSpecifiers = value; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline void SetTypedLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { m_typedLinkSpecifiers = std::move(value); }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline ListOutgoingTypedLinksResult& WithTypedLinkSpecifiers(const Aws::Vector<TypedLinkSpecifier>& value) { SetTypedLinkSpecifiers(value); return *this;}

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline ListOutgoingTypedLinksResult& WithTypedLinkSpecifiers(Aws::Vector<TypedLinkSpecifier>&& value) { SetTypedLinkSpecifiers(std::move(value)); return *this;}

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline ListOutgoingTypedLinksResult& AddTypedLinkSpecifiers(const TypedLinkSpecifier& value) { m_typedLinkSpecifiers.push_back(value); return *this; }

    /**
     * <p>Returns a typed link specifier as output.</p>
     */
    inline ListOutgoingTypedLinksResult& AddTypedLinkSpecifiers(TypedLinkSpecifier&& value) { m_typedLinkSpecifiers.push_back(std::move(value)); return *this; }


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
    inline ListOutgoingTypedLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListOutgoingTypedLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListOutgoingTypedLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TypedLinkSpecifier> m_typedLinkSpecifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
