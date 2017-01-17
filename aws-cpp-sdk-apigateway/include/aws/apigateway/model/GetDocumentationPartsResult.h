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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/DocumentationPart.h>

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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>The collection of documentation parts of an API.</p> <div class="remarks"/>
   * <div class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-documenting-api.html">Documenting
   * an API</a>, <a>DocumentationPart</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationParts">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetDocumentationPartsResult
  {
  public:
    GetDocumentationPartsResult();
    GetDocumentationPartsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDocumentationPartsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = value; }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetDocumentationPartsResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetDocumentationPartsResult& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    
    inline GetDocumentationPartsResult& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>The current page of <a>DocumentationPart</a> resources in the
     * <a>DocumentationParts</a> collection.</p>
     */
    inline const Aws::Vector<DocumentationPart>& GetItems() const{ return m_items; }

    /**
     * <p>The current page of <a>DocumentationPart</a> resources in the
     * <a>DocumentationParts</a> collection.</p>
     */
    inline void SetItems(const Aws::Vector<DocumentationPart>& value) { m_items = value; }

    /**
     * <p>The current page of <a>DocumentationPart</a> resources in the
     * <a>DocumentationParts</a> collection.</p>
     */
    inline void SetItems(Aws::Vector<DocumentationPart>&& value) { m_items = value; }

    /**
     * <p>The current page of <a>DocumentationPart</a> resources in the
     * <a>DocumentationParts</a> collection.</p>
     */
    inline GetDocumentationPartsResult& WithItems(const Aws::Vector<DocumentationPart>& value) { SetItems(value); return *this;}

    /**
     * <p>The current page of <a>DocumentationPart</a> resources in the
     * <a>DocumentationParts</a> collection.</p>
     */
    inline GetDocumentationPartsResult& WithItems(Aws::Vector<DocumentationPart>&& value) { SetItems(value); return *this;}

    /**
     * <p>The current page of <a>DocumentationPart</a> resources in the
     * <a>DocumentationParts</a> collection.</p>
     */
    inline GetDocumentationPartsResult& AddItems(const DocumentationPart& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The current page of <a>DocumentationPart</a> resources in the
     * <a>DocumentationParts</a> collection.</p>
     */
    inline GetDocumentationPartsResult& AddItems(DocumentationPart&& value) { m_items.push_back(value); return *this; }

  private:
    Aws::String m_position;
    Aws::Vector<DocumentationPart> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
