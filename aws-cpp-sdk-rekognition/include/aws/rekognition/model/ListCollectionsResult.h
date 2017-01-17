﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API ListCollectionsResult
  {
  public:
    ListCollectionsResult();
    ListCollectionsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCollectionsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of collection IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCollectionIds() const{ return m_collectionIds; }

    /**
     * <p>An array of collection IDs.</p>
     */
    inline void SetCollectionIds(const Aws::Vector<Aws::String>& value) { m_collectionIds = value; }

    /**
     * <p>An array of collection IDs.</p>
     */
    inline void SetCollectionIds(Aws::Vector<Aws::String>&& value) { m_collectionIds = value; }

    /**
     * <p>An array of collection IDs.</p>
     */
    inline ListCollectionsResult& WithCollectionIds(const Aws::Vector<Aws::String>& value) { SetCollectionIds(value); return *this;}

    /**
     * <p>An array of collection IDs.</p>
     */
    inline ListCollectionsResult& WithCollectionIds(Aws::Vector<Aws::String>&& value) { SetCollectionIds(value); return *this;}

    /**
     * <p>An array of collection IDs.</p>
     */
    inline ListCollectionsResult& AddCollectionIds(const Aws::String& value) { m_collectionIds.push_back(value); return *this; }

    /**
     * <p>An array of collection IDs.</p>
     */
    inline ListCollectionsResult& AddCollectionIds(Aws::String&& value) { m_collectionIds.push_back(value); return *this; }

    /**
     * <p>An array of collection IDs.</p>
     */
    inline ListCollectionsResult& AddCollectionIds(const char* value) { m_collectionIds.push_back(value); return *this; }

    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline ListCollectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline ListCollectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result is truncated, the response provides a <code>NextToken</code>
     * that you can use in the subsequent request to fetch the next set of collection
     * IDs.</p>
     */
    inline ListCollectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_collectionIds;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
