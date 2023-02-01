/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamesparks/model/ExtensionDetails.h>
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
  class ListExtensionsResult
  {
  public:
    AWS_GAMESPARKS_API ListExtensionsResult();
    AWS_GAMESPARKS_API ListExtensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API ListExtensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of extensions.</p>
     */
    inline const Aws::Vector<ExtensionDetails>& GetExtensions() const{ return m_extensions; }

    /**
     * <p>The list of extensions.</p>
     */
    inline void SetExtensions(const Aws::Vector<ExtensionDetails>& value) { m_extensions = value; }

    /**
     * <p>The list of extensions.</p>
     */
    inline void SetExtensions(Aws::Vector<ExtensionDetails>&& value) { m_extensions = std::move(value); }

    /**
     * <p>The list of extensions.</p>
     */
    inline ListExtensionsResult& WithExtensions(const Aws::Vector<ExtensionDetails>& value) { SetExtensions(value); return *this;}

    /**
     * <p>The list of extensions.</p>
     */
    inline ListExtensionsResult& WithExtensions(Aws::Vector<ExtensionDetails>&& value) { SetExtensions(std::move(value)); return *this;}

    /**
     * <p>The list of extensions.</p>
     */
    inline ListExtensionsResult& AddExtensions(const ExtensionDetails& value) { m_extensions.push_back(value); return *this; }

    /**
     * <p>The list of extensions.</p>
     */
    inline ListExtensionsResult& AddExtensions(ExtensionDetails&& value) { m_extensions.push_back(std::move(value)); return *this; }


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
    inline ListExtensionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListExtensionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that indicates the start of the next sequential page of
     * results.</p> <p> Use this value when making the next call to this operation to
     * continue where the last one finished. </p>
     */
    inline ListExtensionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ExtensionDetails> m_extensions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
