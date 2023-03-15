﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class GetJobDocumentResult
  {
  public:
    AWS_IOT_API GetJobDocumentResult();
    AWS_IOT_API GetJobDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API GetJobDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The job document content.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The job document content.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_document = value; }

    /**
     * <p>The job document content.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_document = std::move(value); }

    /**
     * <p>The job document content.</p>
     */
    inline void SetDocument(const char* value) { m_document.assign(value); }

    /**
     * <p>The job document content.</p>
     */
    inline GetJobDocumentResult& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The job document content.</p>
     */
    inline GetJobDocumentResult& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The job document content.</p>
     */
    inline GetJobDocumentResult& WithDocument(const char* value) { SetDocument(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetJobDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetJobDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetJobDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_document;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
