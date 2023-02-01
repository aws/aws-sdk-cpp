/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/ThemeSummary.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class ListThemesResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ListThemesResult();
    AWS_AMPLIFYUIBUILDER_API ListThemesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API ListThemesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of themes for the Amplify app.</p>
     */
    inline const Aws::Vector<ThemeSummary>& GetEntities() const{ return m_entities; }

    /**
     * <p>The list of themes for the Amplify app.</p>
     */
    inline void SetEntities(const Aws::Vector<ThemeSummary>& value) { m_entities = value; }

    /**
     * <p>The list of themes for the Amplify app.</p>
     */
    inline void SetEntities(Aws::Vector<ThemeSummary>&& value) { m_entities = std::move(value); }

    /**
     * <p>The list of themes for the Amplify app.</p>
     */
    inline ListThemesResult& WithEntities(const Aws::Vector<ThemeSummary>& value) { SetEntities(value); return *this;}

    /**
     * <p>The list of themes for the Amplify app.</p>
     */
    inline ListThemesResult& WithEntities(Aws::Vector<ThemeSummary>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>The list of themes for the Amplify app.</p>
     */
    inline ListThemesResult& AddEntities(const ThemeSummary& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>The list of themes for the Amplify app.</p>
     */
    inline ListThemesResult& AddEntities(ThemeSummary&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's returned if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's returned if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's returned if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's returned if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's returned if more results are available.</p>
     */
    inline ListThemesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's returned if more results are available.</p>
     */
    inline ListThemesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's returned if more results are available.</p>
     */
    inline ListThemesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ThemeSummary> m_entities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
