﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppBlock.h>
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
  class DescribeAppBlocksResult
  {
  public:
    AWS_APPSTREAM_API DescribeAppBlocksResult();
    AWS_APPSTREAM_API DescribeAppBlocksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeAppBlocksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app blocks in the list.</p>
     */
    inline const Aws::Vector<AppBlock>& GetAppBlocks() const{ return m_appBlocks; }
    inline void SetAppBlocks(const Aws::Vector<AppBlock>& value) { m_appBlocks = value; }
    inline void SetAppBlocks(Aws::Vector<AppBlock>&& value) { m_appBlocks = std::move(value); }
    inline DescribeAppBlocksResult& WithAppBlocks(const Aws::Vector<AppBlock>& value) { SetAppBlocks(value); return *this;}
    inline DescribeAppBlocksResult& WithAppBlocks(Aws::Vector<AppBlock>&& value) { SetAppBlocks(std::move(value)); return *this;}
    inline DescribeAppBlocksResult& AddAppBlocks(const AppBlock& value) { m_appBlocks.push_back(value); return *this; }
    inline DescribeAppBlocksResult& AddAppBlocks(AppBlock&& value) { m_appBlocks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeAppBlocksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAppBlocksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAppBlocksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAppBlocksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAppBlocksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAppBlocksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AppBlock> m_appBlocks;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
