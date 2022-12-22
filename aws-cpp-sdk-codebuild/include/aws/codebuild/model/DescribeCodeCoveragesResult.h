/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/CodeCoverage.h>
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
namespace CodeBuild
{
namespace Model
{
  class DescribeCodeCoveragesResult
  {
  public:
    AWS_CODEBUILD_API DescribeCodeCoveragesResult();
    AWS_CODEBUILD_API DescribeCodeCoveragesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API DescribeCodeCoveragesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>DescribeCodeCoverages</code> to retrieve the next set
     * of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>DescribeCodeCoverages</code> to retrieve the next set
     * of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>DescribeCodeCoverages</code> to retrieve the next set
     * of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>DescribeCodeCoverages</code> to retrieve the next set
     * of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>DescribeCodeCoverages</code> to retrieve the next set
     * of items.</p>
     */
    inline DescribeCodeCoveragesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>DescribeCodeCoverages</code> to retrieve the next set
     * of items.</p>
     */
    inline DescribeCodeCoveragesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to <code>DescribeCodeCoverages</code> to retrieve the next set
     * of items.</p>
     */
    inline DescribeCodeCoveragesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of <code>CodeCoverage</code> objects that contain the results.</p>
     */
    inline const Aws::Vector<CodeCoverage>& GetCodeCoverages() const{ return m_codeCoverages; }

    /**
     * <p>An array of <code>CodeCoverage</code> objects that contain the results.</p>
     */
    inline void SetCodeCoverages(const Aws::Vector<CodeCoverage>& value) { m_codeCoverages = value; }

    /**
     * <p>An array of <code>CodeCoverage</code> objects that contain the results.</p>
     */
    inline void SetCodeCoverages(Aws::Vector<CodeCoverage>&& value) { m_codeCoverages = std::move(value); }

    /**
     * <p>An array of <code>CodeCoverage</code> objects that contain the results.</p>
     */
    inline DescribeCodeCoveragesResult& WithCodeCoverages(const Aws::Vector<CodeCoverage>& value) { SetCodeCoverages(value); return *this;}

    /**
     * <p>An array of <code>CodeCoverage</code> objects that contain the results.</p>
     */
    inline DescribeCodeCoveragesResult& WithCodeCoverages(Aws::Vector<CodeCoverage>&& value) { SetCodeCoverages(std::move(value)); return *this;}

    /**
     * <p>An array of <code>CodeCoverage</code> objects that contain the results.</p>
     */
    inline DescribeCodeCoveragesResult& AddCodeCoverages(const CodeCoverage& value) { m_codeCoverages.push_back(value); return *this; }

    /**
     * <p>An array of <code>CodeCoverage</code> objects that contain the results.</p>
     */
    inline DescribeCodeCoveragesResult& AddCodeCoverages(CodeCoverage&& value) { m_codeCoverages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<CodeCoverage> m_codeCoverages;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
