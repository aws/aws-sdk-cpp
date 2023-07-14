﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentVersionInfo.h>
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
  class AWS_SSM_API ListDocumentVersionsResult
  {
  public:
    ListDocumentVersionsResult();
    ListDocumentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDocumentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The document versions.</p>
     */
    inline const Aws::Vector<DocumentVersionInfo>& GetDocumentVersions() const{ return m_documentVersions; }

    /**
     * <p>The document versions.</p>
     */
    inline void SetDocumentVersions(const Aws::Vector<DocumentVersionInfo>& value) { m_documentVersions = value; }

    /**
     * <p>The document versions.</p>
     */
    inline void SetDocumentVersions(Aws::Vector<DocumentVersionInfo>&& value) { m_documentVersions = std::move(value); }

    /**
     * <p>The document versions.</p>
     */
    inline ListDocumentVersionsResult& WithDocumentVersions(const Aws::Vector<DocumentVersionInfo>& value) { SetDocumentVersions(value); return *this;}

    /**
     * <p>The document versions.</p>
     */
    inline ListDocumentVersionsResult& WithDocumentVersions(Aws::Vector<DocumentVersionInfo>&& value) { SetDocumentVersions(std::move(value)); return *this;}

    /**
     * <p>The document versions.</p>
     */
    inline ListDocumentVersionsResult& AddDocumentVersions(const DocumentVersionInfo& value) { m_documentVersions.push_back(value); return *this; }

    /**
     * <p>The document versions.</p>
     */
    inline ListDocumentVersionsResult& AddDocumentVersions(DocumentVersionInfo&& value) { m_documentVersions.push_back(std::move(value)); return *this; }


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
    inline ListDocumentVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListDocumentVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline ListDocumentVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DocumentVersionInfo> m_documentVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
