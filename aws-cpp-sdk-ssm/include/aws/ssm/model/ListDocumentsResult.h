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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentIdentifier.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListDocumentsResult
  {
  public:
    ListDocumentsResult();
    ListDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of the Systems Manager documents.</p>
     */
    inline const Aws::Vector<DocumentIdentifier>& GetDocumentIdentifiers() const{ return m_documentIdentifiers; }

    /**
     * <p>The names of the Systems Manager documents.</p>
     */
    inline void SetDocumentIdentifiers(const Aws::Vector<DocumentIdentifier>& value) { m_documentIdentifiers = value; }

    /**
     * <p>The names of the Systems Manager documents.</p>
     */
    inline void SetDocumentIdentifiers(Aws::Vector<DocumentIdentifier>&& value) { m_documentIdentifiers = std::move(value); }

    /**
     * <p>The names of the Systems Manager documents.</p>
     */
    inline ListDocumentsResult& WithDocumentIdentifiers(const Aws::Vector<DocumentIdentifier>& value) { SetDocumentIdentifiers(value); return *this;}

    /**
     * <p>The names of the Systems Manager documents.</p>
     */
    inline ListDocumentsResult& WithDocumentIdentifiers(Aws::Vector<DocumentIdentifier>&& value) { SetDocumentIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The names of the Systems Manager documents.</p>
     */
    inline ListDocumentsResult& AddDocumentIdentifiers(const DocumentIdentifier& value) { m_documentIdentifiers.push_back(value); return *this; }

    /**
     * <p>The names of the Systems Manager documents.</p>
     */
    inline ListDocumentsResult& AddDocumentIdentifiers(DocumentIdentifier&& value) { m_documentIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListDocumentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListDocumentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListDocumentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DocumentIdentifier> m_documentIdentifiers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
