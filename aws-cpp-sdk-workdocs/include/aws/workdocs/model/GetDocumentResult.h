﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkDocs
{
namespace Model
{
  class AWS_WORKDOCS_API GetDocumentResult
  {
  public:
    GetDocumentResult();
    GetDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata details of the document.</p>
     */
    inline const DocumentMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata details of the document.</p>
     */
    inline void SetMetadata(const DocumentMetadata& value) { m_metadata = value; }

    /**
     * <p>The metadata details of the document.</p>
     */
    inline void SetMetadata(DocumentMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>The metadata details of the document.</p>
     */
    inline GetDocumentResult& WithMetadata(const DocumentMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata details of the document.</p>
     */
    inline GetDocumentResult& WithMetadata(DocumentMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>The custom metadata on the document.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomMetadata() const{ return m_customMetadata; }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline void SetCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_customMetadata = value; }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline void SetCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_customMetadata = std::move(value); }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& WithCustomMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomMetadata(value); return *this;}

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& WithCustomMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomMetadata(std::move(value)); return *this;}

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& AddCustomMetadata(const Aws::String& key, const Aws::String& value) { m_customMetadata.emplace(key, value); return *this; }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& AddCustomMetadata(Aws::String&& key, const Aws::String& value) { m_customMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& AddCustomMetadata(const Aws::String& key, Aws::String&& value) { m_customMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& AddCustomMetadata(Aws::String&& key, Aws::String&& value) { m_customMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& AddCustomMetadata(const char* key, Aws::String&& value) { m_customMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& AddCustomMetadata(Aws::String&& key, const char* value) { m_customMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The custom metadata on the document.</p>
     */
    inline GetDocumentResult& AddCustomMetadata(const char* key, const char* value) { m_customMetadata.emplace(key, value); return *this; }

  private:

    DocumentMetadata m_metadata;

    Aws::Map<Aws::String, Aws::String> m_customMetadata;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
