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
  class AWS_IOT_API GetJobDocumentResult
  {
  public:
    GetJobDocumentResult();
    GetJobDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetJobDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Aws::String m_document;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
