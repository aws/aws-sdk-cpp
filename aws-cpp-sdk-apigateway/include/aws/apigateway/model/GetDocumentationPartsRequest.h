﻿/*
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/DocumentationPartType.h>
#include <aws/apigateway/model/LocationStatusType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Gets the documentation parts of an API. The result may be filtered by the
   * type, name, or path of API entities (targets).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationPartsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetDocumentationPartsRequest : public APIGatewayRequest
  {
  public:
    GetDocumentationPartsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDocumentationParts"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetDocumentationPartsRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetDocumentationPartsRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline GetDocumentationPartsRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The type of API entities of the to-be-retrieved documentation parts. </p>
     */
    inline const DocumentationPartType& GetType() const{ return m_type; }

    /**
     * <p>The type of API entities of the to-be-retrieved documentation parts. </p>
     */
    inline void SetType(const DocumentationPartType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of API entities of the to-be-retrieved documentation parts. </p>
     */
    inline void SetType(DocumentationPartType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of API entities of the to-be-retrieved documentation parts. </p>
     */
    inline GetDocumentationPartsRequest& WithType(const DocumentationPartType& value) { SetType(value); return *this;}

    /**
     * <p>The type of API entities of the to-be-retrieved documentation parts. </p>
     */
    inline GetDocumentationPartsRequest& WithType(DocumentationPartType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline const Aws::String& GetNameQuery() const{ return m_nameQuery; }

    /**
     * <p>The name of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline void SetNameQuery(const Aws::String& value) { m_nameQueryHasBeenSet = true; m_nameQuery = value; }

    /**
     * <p>The name of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline void SetNameQuery(Aws::String&& value) { m_nameQueryHasBeenSet = true; m_nameQuery = std::move(value); }

    /**
     * <p>The name of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline void SetNameQuery(const char* value) { m_nameQueryHasBeenSet = true; m_nameQuery.assign(value); }

    /**
     * <p>The name of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline GetDocumentationPartsRequest& WithNameQuery(const Aws::String& value) { SetNameQuery(value); return *this;}

    /**
     * <p>The name of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline GetDocumentationPartsRequest& WithNameQuery(Aws::String&& value) { SetNameQuery(std::move(value)); return *this;}

    /**
     * <p>The name of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline GetDocumentationPartsRequest& WithNameQuery(const char* value) { SetNameQuery(value); return *this;}


    /**
     * <p>The path of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline GetDocumentationPartsRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline GetDocumentationPartsRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline GetDocumentationPartsRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetDocumentationPartsRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetDocumentationPartsRequest& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline GetDocumentationPartsRequest& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline GetDocumentationPartsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The status of the API documentation parts to retrieve. Valid values are
     * <code>DOCUMENTED</code> for retrieving <a>DocumentationPart</a> resources with
     * content and <code>UNDOCUMENTED</code> for <a>DocumentationPart</a> resources
     * without content.</p>
     */
    inline const LocationStatusType& GetLocationStatus() const{ return m_locationStatus; }

    /**
     * <p>The status of the API documentation parts to retrieve. Valid values are
     * <code>DOCUMENTED</code> for retrieving <a>DocumentationPart</a> resources with
     * content and <code>UNDOCUMENTED</code> for <a>DocumentationPart</a> resources
     * without content.</p>
     */
    inline void SetLocationStatus(const LocationStatusType& value) { m_locationStatusHasBeenSet = true; m_locationStatus = value; }

    /**
     * <p>The status of the API documentation parts to retrieve. Valid values are
     * <code>DOCUMENTED</code> for retrieving <a>DocumentationPart</a> resources with
     * content and <code>UNDOCUMENTED</code> for <a>DocumentationPart</a> resources
     * without content.</p>
     */
    inline void SetLocationStatus(LocationStatusType&& value) { m_locationStatusHasBeenSet = true; m_locationStatus = std::move(value); }

    /**
     * <p>The status of the API documentation parts to retrieve. Valid values are
     * <code>DOCUMENTED</code> for retrieving <a>DocumentationPart</a> resources with
     * content and <code>UNDOCUMENTED</code> for <a>DocumentationPart</a> resources
     * without content.</p>
     */
    inline GetDocumentationPartsRequest& WithLocationStatus(const LocationStatusType& value) { SetLocationStatus(value); return *this;}

    /**
     * <p>The status of the API documentation parts to retrieve. Valid values are
     * <code>DOCUMENTED</code> for retrieving <a>DocumentationPart</a> resources with
     * content and <code>UNDOCUMENTED</code> for <a>DocumentationPart</a> resources
     * without content.</p>
     */
    inline GetDocumentationPartsRequest& WithLocationStatus(LocationStatusType&& value) { SetLocationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    DocumentationPartType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_nameQuery;
    bool m_nameQueryHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_position;
    bool m_positionHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    LocationStatusType m_locationStatus;
    bool m_locationStatusHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
