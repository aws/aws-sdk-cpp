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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests Amazon API Gateway to create a <a>Resource</a>
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateResourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateResourceRequest : public APIGatewayRequest
  {
  public:
    CreateResourceRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The identifier of the <a>RestApi</a> for the resource. </p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The identifier of the <a>RestApi</a> for the resource. </p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> for the resource. </p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The identifier of the <a>RestApi</a> for the resource. </p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The identifier of the <a>RestApi</a> for the resource. </p>
     */
    inline CreateResourceRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> for the resource. </p>
     */
    inline CreateResourceRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The identifier of the <a>RestApi</a> for the resource. </p>
     */
    inline CreateResourceRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline CreateResourceRequest& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline CreateResourceRequest& WithParentId(Aws::String&& value) { SetParentId(value); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline CreateResourceRequest& WithParentId(const char* value) { SetParentId(value); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline const Aws::String& GetPathPart() const{ return m_pathPart; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(const Aws::String& value) { m_pathPartHasBeenSet = true; m_pathPart = value; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(Aws::String&& value) { m_pathPartHasBeenSet = true; m_pathPart = value; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(const char* value) { m_pathPartHasBeenSet = true; m_pathPart.assign(value); }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline CreateResourceRequest& WithPathPart(const Aws::String& value) { SetPathPart(value); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline CreateResourceRequest& WithPathPart(Aws::String&& value) { SetPathPart(value); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline CreateResourceRequest& WithPathPart(const char* value) { SetPathPart(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_parentId;
    bool m_parentIdHasBeenSet;
    Aws::String m_pathPart;
    bool m_pathPartHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
