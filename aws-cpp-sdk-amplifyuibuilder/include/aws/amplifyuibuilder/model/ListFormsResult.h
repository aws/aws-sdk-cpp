/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FormSummary.h>
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
  class ListFormsResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ListFormsResult();
    AWS_AMPLIFYUIBUILDER_API ListFormsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API ListFormsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of forms for the Amplify app.</p>
     */
    inline const Aws::Vector<FormSummary>& GetEntities() const{ return m_entities; }

    /**
     * <p>The list of forms for the Amplify app.</p>
     */
    inline void SetEntities(const Aws::Vector<FormSummary>& value) { m_entities = value; }

    /**
     * <p>The list of forms for the Amplify app.</p>
     */
    inline void SetEntities(Aws::Vector<FormSummary>&& value) { m_entities = std::move(value); }

    /**
     * <p>The list of forms for the Amplify app.</p>
     */
    inline ListFormsResult& WithEntities(const Aws::Vector<FormSummary>& value) { SetEntities(value); return *this;}

    /**
     * <p>The list of forms for the Amplify app.</p>
     */
    inline ListFormsResult& WithEntities(Aws::Vector<FormSummary>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>The list of forms for the Amplify app.</p>
     */
    inline ListFormsResult& AddEntities(const FormSummary& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>The list of forms for the Amplify app.</p>
     */
    inline ListFormsResult& AddEntities(FormSummary&& value) { m_entities.push_back(std::move(value)); return *this; }


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
    inline ListFormsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFormsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListFormsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FormSummary> m_entities;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
