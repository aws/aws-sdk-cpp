﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/ComponentSummary.h>
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
  class AWS_AMPLIFYUIBUILDER_API ListComponentsResult
  {
  public:
    ListComponentsResult();
    ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of components for the Amplify app.</p>
     */
    inline const Aws::Vector<ComponentSummary>& GetEntities() const{ return m_entities; }

    /**
     * <p>The list of components for the Amplify app.</p>
     */
    inline void SetEntities(const Aws::Vector<ComponentSummary>& value) { m_entities = value; }

    /**
     * <p>The list of components for the Amplify app.</p>
     */
    inline void SetEntities(Aws::Vector<ComponentSummary>&& value) { m_entities = std::move(value); }

    /**
     * <p>The list of components for the Amplify app.</p>
     */
    inline ListComponentsResult& WithEntities(const Aws::Vector<ComponentSummary>& value) { SetEntities(value); return *this;}

    /**
     * <p>The list of components for the Amplify app.</p>
     */
    inline ListComponentsResult& WithEntities(Aws::Vector<ComponentSummary>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>The list of components for the Amplify app.</p>
     */
    inline ListComponentsResult& AddEntities(const ComponentSummary& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>The list of components for the Amplify app.</p>
     */
    inline ListComponentsResult& AddEntities(ComponentSummary&& value) { m_entities.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ComponentSummary> m_entities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
