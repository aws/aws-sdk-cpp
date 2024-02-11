/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppBlockBuilder.h>
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
  class DescribeAppBlockBuildersResult
  {
  public:
    AWS_APPSTREAM_API DescribeAppBlockBuildersResult();
    AWS_APPSTREAM_API DescribeAppBlockBuildersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeAppBlockBuildersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list that describes one or more app block builders.</p>
     */
    inline const Aws::Vector<AppBlockBuilder>& GetAppBlockBuilders() const{ return m_appBlockBuilders; }

    /**
     * <p>The list that describes one or more app block builders.</p>
     */
    inline void SetAppBlockBuilders(const Aws::Vector<AppBlockBuilder>& value) { m_appBlockBuilders = value; }

    /**
     * <p>The list that describes one or more app block builders.</p>
     */
    inline void SetAppBlockBuilders(Aws::Vector<AppBlockBuilder>&& value) { m_appBlockBuilders = std::move(value); }

    /**
     * <p>The list that describes one or more app block builders.</p>
     */
    inline DescribeAppBlockBuildersResult& WithAppBlockBuilders(const Aws::Vector<AppBlockBuilder>& value) { SetAppBlockBuilders(value); return *this;}

    /**
     * <p>The list that describes one or more app block builders.</p>
     */
    inline DescribeAppBlockBuildersResult& WithAppBlockBuilders(Aws::Vector<AppBlockBuilder>&& value) { SetAppBlockBuilders(std::move(value)); return *this;}

    /**
     * <p>The list that describes one or more app block builders.</p>
     */
    inline DescribeAppBlockBuildersResult& AddAppBlockBuilders(const AppBlockBuilder& value) { m_appBlockBuilders.push_back(value); return *this; }

    /**
     * <p>The list that describes one or more app block builders.</p>
     */
    inline DescribeAppBlockBuildersResult& AddAppBlockBuilders(AppBlockBuilder&& value) { m_appBlockBuilders.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuildersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuildersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuildersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAppBlockBuildersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAppBlockBuildersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAppBlockBuildersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AppBlockBuilder> m_appBlockBuilders;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
