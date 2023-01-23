/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/Stack.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeStacksResult
  {
  public:
    AWS_APPSTREAM_API DescribeStacksResult();
    AWS_APPSTREAM_API DescribeStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the stacks.</p>
     */
    inline const Aws::Vector<Stack>& GetStacks() const{ return m_stacks; }

    /**
     * <p>Information about the stacks.</p>
     */
    inline void SetStacks(const Aws::Vector<Stack>& value) { m_stacks = value; }

    /**
     * <p>Information about the stacks.</p>
     */
    inline void SetStacks(Aws::Vector<Stack>&& value) { m_stacks = std::move(value); }

    /**
     * <p>Information about the stacks.</p>
     */
    inline DescribeStacksResult& WithStacks(const Aws::Vector<Stack>& value) { SetStacks(value); return *this;}

    /**
     * <p>Information about the stacks.</p>
     */
    inline DescribeStacksResult& WithStacks(Aws::Vector<Stack>&& value) { SetStacks(std::move(value)); return *this;}

    /**
     * <p>Information about the stacks.</p>
     */
    inline DescribeStacksResult& AddStacks(const Stack& value) { m_stacks.push_back(value); return *this; }

    /**
     * <p>Information about the stacks.</p>
     */
    inline DescribeStacksResult& AddStacks(Stack&& value) { m_stacks.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeStacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeStacksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeStacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Stack> m_stacks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
