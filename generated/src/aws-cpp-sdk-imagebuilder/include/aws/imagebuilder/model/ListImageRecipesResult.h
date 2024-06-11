﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImageRecipeSummary.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListImageRecipesResult
  {
  public:
    AWS_IMAGEBUILDER_API ListImageRecipesResult();
    AWS_IMAGEBUILDER_API ListImageRecipesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImageRecipesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListImageRecipesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListImageRecipesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListImageRecipesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of image pipelines.</p>
     */
    inline const Aws::Vector<ImageRecipeSummary>& GetImageRecipeSummaryList() const{ return m_imageRecipeSummaryList; }
    inline void SetImageRecipeSummaryList(const Aws::Vector<ImageRecipeSummary>& value) { m_imageRecipeSummaryList = value; }
    inline void SetImageRecipeSummaryList(Aws::Vector<ImageRecipeSummary>&& value) { m_imageRecipeSummaryList = std::move(value); }
    inline ListImageRecipesResult& WithImageRecipeSummaryList(const Aws::Vector<ImageRecipeSummary>& value) { SetImageRecipeSummaryList(value); return *this;}
    inline ListImageRecipesResult& WithImageRecipeSummaryList(Aws::Vector<ImageRecipeSummary>&& value) { SetImageRecipeSummaryList(std::move(value)); return *this;}
    inline ListImageRecipesResult& AddImageRecipeSummaryList(const ImageRecipeSummary& value) { m_imageRecipeSummaryList.push_back(value); return *this; }
    inline ListImageRecipesResult& AddImageRecipeSummaryList(ImageRecipeSummary&& value) { m_imageRecipeSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListImageRecipesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImageRecipesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImageRecipesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::Vector<ImageRecipeSummary> m_imageRecipeSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
