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
   * <p>Gets a documentation snapshot of an API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDocumentationVersionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetDocumentationVersionRequest : public APIGatewayRequest
  {
  public:
    GetDocumentationVersionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>[Required] The identifier of the API of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The identifier of the API of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of the API of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of the API of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The identifier of the API of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline GetDocumentationVersionRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of the API of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline GetDocumentationVersionRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of the API of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline GetDocumentationVersionRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The version identifier of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }

    /**
     * <p>[Required] The version identifier of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }

    /**
     * <p>[Required] The version identifier of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }

    /**
     * <p>[Required] The version identifier of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline void SetDocumentationVersion(const char* value) { m_documentationVersionHasBeenSet = true; m_documentationVersion.assign(value); }

    /**
     * <p>[Required] The version identifier of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline GetDocumentationVersionRequest& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}

    /**
     * <p>[Required] The version identifier of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline GetDocumentationVersionRequest& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(value); return *this;}

    /**
     * <p>[Required] The version identifier of the to-be-retrieved documentation
     * snapshot.</p>
     */
    inline GetDocumentationVersionRequest& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
