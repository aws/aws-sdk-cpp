/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ThemeAlias.h>
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
namespace QuickSight
{
namespace Model
{
  class ListThemeAliasesResult
  {
  public:
    AWS_QUICKSIGHT_API ListThemeAliasesResult();
    AWS_QUICKSIGHT_API ListThemeAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListThemeAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing the list of the theme's aliases.</p>
     */
    inline const Aws::Vector<ThemeAlias>& GetThemeAliasList() const{ return m_themeAliasList; }

    /**
     * <p>A structure containing the list of the theme's aliases.</p>
     */
    inline void SetThemeAliasList(const Aws::Vector<ThemeAlias>& value) { m_themeAliasList = value; }

    /**
     * <p>A structure containing the list of the theme's aliases.</p>
     */
    inline void SetThemeAliasList(Aws::Vector<ThemeAlias>&& value) { m_themeAliasList = std::move(value); }

    /**
     * <p>A structure containing the list of the theme's aliases.</p>
     */
    inline ListThemeAliasesResult& WithThemeAliasList(const Aws::Vector<ThemeAlias>& value) { SetThemeAliasList(value); return *this;}

    /**
     * <p>A structure containing the list of the theme's aliases.</p>
     */
    inline ListThemeAliasesResult& WithThemeAliasList(Aws::Vector<ThemeAlias>&& value) { SetThemeAliasList(std::move(value)); return *this;}

    /**
     * <p>A structure containing the list of the theme's aliases.</p>
     */
    inline ListThemeAliasesResult& AddThemeAliasList(const ThemeAlias& value) { m_themeAliasList.push_back(value); return *this; }

    /**
     * <p>A structure containing the list of the theme's aliases.</p>
     */
    inline ListThemeAliasesResult& AddThemeAliasList(ThemeAlias&& value) { m_themeAliasList.push_back(std::move(value)); return *this; }


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListThemeAliasesResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListThemeAliasesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListThemeAliasesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline ListThemeAliasesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListThemeAliasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListThemeAliasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListThemeAliasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ThemeAlias> m_themeAliasList;

    int m_status;

    Aws::String m_requestId;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
