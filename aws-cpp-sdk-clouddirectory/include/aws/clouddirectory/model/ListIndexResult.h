/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/IndexAttachment.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API ListIndexResult
  {
  public:
    ListIndexResult();
    ListIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline const Aws::Vector<IndexAttachment>& GetIndexAttachments() const{ return m_indexAttachments; }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline void SetIndexAttachments(const Aws::Vector<IndexAttachment>& value) { m_indexAttachments = value; }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline void SetIndexAttachments(Aws::Vector<IndexAttachment>&& value) { m_indexAttachments = std::move(value); }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline ListIndexResult& WithIndexAttachments(const Aws::Vector<IndexAttachment>& value) { SetIndexAttachments(value); return *this;}

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline ListIndexResult& WithIndexAttachments(Aws::Vector<IndexAttachment>&& value) { SetIndexAttachments(std::move(value)); return *this;}

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline ListIndexResult& AddIndexAttachments(const IndexAttachment& value) { m_indexAttachments.push_back(value); return *this; }

    /**
     * <p>The objects and indexed values attached to the index.</p>
     */
    inline ListIndexResult& AddIndexAttachments(IndexAttachment&& value) { m_indexAttachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListIndexResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListIndexResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListIndexResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<IndexAttachment> m_indexAttachments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
