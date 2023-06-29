/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/AppBlockBuilderAppBlockAssociation.h>
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
  class DescribeAppBlockBuilderAppBlockAssociationsResult
  {
  public:
    AWS_APPSTREAM_API DescribeAppBlockBuilderAppBlockAssociationsResult();
    AWS_APPSTREAM_API DescribeAppBlockBuilderAppBlockAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeAppBlockBuilderAppBlockAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This list of app block builders associated with app blocks.</p>
     */
    inline const Aws::Vector<AppBlockBuilderAppBlockAssociation>& GetAppBlockBuilderAppBlockAssociations() const{ return m_appBlockBuilderAppBlockAssociations; }

    /**
     * <p>This list of app block builders associated with app blocks.</p>
     */
    inline void SetAppBlockBuilderAppBlockAssociations(const Aws::Vector<AppBlockBuilderAppBlockAssociation>& value) { m_appBlockBuilderAppBlockAssociations = value; }

    /**
     * <p>This list of app block builders associated with app blocks.</p>
     */
    inline void SetAppBlockBuilderAppBlockAssociations(Aws::Vector<AppBlockBuilderAppBlockAssociation>&& value) { m_appBlockBuilderAppBlockAssociations = std::move(value); }

    /**
     * <p>This list of app block builders associated with app blocks.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& WithAppBlockBuilderAppBlockAssociations(const Aws::Vector<AppBlockBuilderAppBlockAssociation>& value) { SetAppBlockBuilderAppBlockAssociations(value); return *this;}

    /**
     * <p>This list of app block builders associated with app blocks.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& WithAppBlockBuilderAppBlockAssociations(Aws::Vector<AppBlockBuilderAppBlockAssociation>&& value) { SetAppBlockBuilderAppBlockAssociations(std::move(value)); return *this;}

    /**
     * <p>This list of app block builders associated with app blocks.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& AddAppBlockBuilderAppBlockAssociations(const AppBlockBuilderAppBlockAssociation& value) { m_appBlockBuilderAppBlockAssociations.push_back(value); return *this; }

    /**
     * <p>This list of app block builders associated with app blocks.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& AddAppBlockBuilderAppBlockAssociations(AppBlockBuilderAppBlockAssociation&& value) { m_appBlockBuilderAppBlockAssociations.push_back(std::move(value)); return *this; }


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
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAppBlockBuilderAppBlockAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AppBlockBuilderAppBlockAssociation> m_appBlockBuilderAppBlockAssociations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
