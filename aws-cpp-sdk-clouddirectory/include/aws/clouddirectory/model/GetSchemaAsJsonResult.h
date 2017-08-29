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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API GetSchemaAsJsonResult
  {
  public:
    GetSchemaAsJsonResult();
    GetSchemaAsJsonResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSchemaAsJsonResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the retrieved schema.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the retrieved schema.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the retrieved schema.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the retrieved schema.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the retrieved schema.</p>
     */
    inline GetSchemaAsJsonResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the retrieved schema.</p>
     */
    inline GetSchemaAsJsonResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the retrieved schema.</p>
     */
    inline GetSchemaAsJsonResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The JSON representation of the schema document.</p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }

    /**
     * <p>The JSON representation of the schema document.</p>
     */
    inline void SetDocument(const Aws::String& value) { m_document = value; }

    /**
     * <p>The JSON representation of the schema document.</p>
     */
    inline void SetDocument(Aws::String&& value) { m_document = std::move(value); }

    /**
     * <p>The JSON representation of the schema document.</p>
     */
    inline void SetDocument(const char* value) { m_document.assign(value); }

    /**
     * <p>The JSON representation of the schema document.</p>
     */
    inline GetSchemaAsJsonResult& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}

    /**
     * <p>The JSON representation of the schema document.</p>
     */
    inline GetSchemaAsJsonResult& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON representation of the schema document.</p>
     */
    inline GetSchemaAsJsonResult& WithDocument(const char* value) { SetDocument(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_document;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
