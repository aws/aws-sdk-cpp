/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/CodegenJobSummary.h>
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
  class ListCodegenJobsResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ListCodegenJobsResult();
    AWS_AMPLIFYUIBUILDER_API ListCodegenJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API ListCodegenJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of code generation jobs for the Amplify app.</p>
     */
    inline const Aws::Vector<CodegenJobSummary>& GetEntities() const{ return m_entities; }

    /**
     * <p>The list of code generation jobs for the Amplify app.</p>
     */
    inline void SetEntities(const Aws::Vector<CodegenJobSummary>& value) { m_entities = value; }

    /**
     * <p>The list of code generation jobs for the Amplify app.</p>
     */
    inline void SetEntities(Aws::Vector<CodegenJobSummary>&& value) { m_entities = std::move(value); }

    /**
     * <p>The list of code generation jobs for the Amplify app.</p>
     */
    inline ListCodegenJobsResult& WithEntities(const Aws::Vector<CodegenJobSummary>& value) { SetEntities(value); return *this;}

    /**
     * <p>The list of code generation jobs for the Amplify app.</p>
     */
    inline ListCodegenJobsResult& WithEntities(Aws::Vector<CodegenJobSummary>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>The list of code generation jobs for the Amplify app.</p>
     */
    inline ListCodegenJobsResult& AddEntities(const CodegenJobSummary& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>The list of code generation jobs for the Amplify app.</p>
     */
    inline ListCodegenJobsResult& AddEntities(CodegenJobSummary&& value) { m_entities.push_back(std::move(value)); return *this; }


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
    inline ListCodegenJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListCodegenJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListCodegenJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCodegenJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCodegenJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCodegenJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CodegenJobSummary> m_entities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
