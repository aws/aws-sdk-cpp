/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/ExtensionVersionDetails.h>
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
namespace GameSparks
{
namespace Model
{
  class ListExtensionVersionsResult
  {
  public:
    AWS_GAMESPARKS_API ListExtensionVersionsResult();
    AWS_GAMESPARKS_API ListExtensionVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API ListExtensionVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of extension versions.</p>
     */
    inline const Aws::Vector<ExtensionVersionDetails>& GetExtensionVersions() const{ return m_extensionVersions; }

    /**
     * <p>The list of extension versions.</p>
     */
    inline void SetExtensionVersions(const Aws::Vector<ExtensionVersionDetails>& value) { m_extensionVersions = value; }

    /**
     * <p>The list of extension versions.</p>
     */
    inline void SetExtensionVersions(Aws::Vector<ExtensionVersionDetails>&& value) { m_extensionVersions = std::move(value); }

    /**
     * <p>The list of extension versions.</p>
     */
    inline ListExtensionVersionsResult& WithExtensionVersions(const Aws::Vector<ExtensionVersionDetails>& value) { SetExtensionVersions(value); return *this;}

    /**
     * <p>The list of extension versions.</p>
     */
    inline ListExtensionVersionsResult& WithExtensionVersions(Aws::Vector<ExtensionVersionDetails>&& value) { SetExtensionVersions(std::move(value)); return *this;}

    /**
     * <p>The list of extension versions.</p>
     */
    inline ListExtensionVersionsResult& AddExtensionVersions(const ExtensionVersionDetails& value) { m_extensionVersions.push_back(value); return *this; }

    /**
     * <p>The list of extension versions.</p>
     */
    inline ListExtensionVersionsResult& AddExtensionVersions(ExtensionVersionDetails&& value) { m_extensionVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListExtensionVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListExtensionVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListExtensionVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExtensionVersionDetails> m_extensionVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
