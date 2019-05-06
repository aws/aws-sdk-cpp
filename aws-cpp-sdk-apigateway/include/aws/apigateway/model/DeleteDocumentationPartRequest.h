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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Deletes an existing documentation part of an API.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDocumentationPartRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API DeleteDocumentationPartRequest : public APIGatewayRequest
  {
  public:
    DeleteDocumentationPartRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDocumentationPart"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

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
    inline DeleteDocumentationPartRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline DeleteDocumentationPartRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline DeleteDocumentationPartRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] The identifier of the to-be-deleted documentation part.</p>
     */
    inline const Aws::String& GetDocumentationPartId() const{ return m_documentationPartId; }

    /**
     * <p>[Required] The identifier of the to-be-deleted documentation part.</p>
     */
    inline bool DocumentationPartIdHasBeenSet() const { return m_documentationPartIdHasBeenSet; }

    /**
     * <p>[Required] The identifier of the to-be-deleted documentation part.</p>
     */
    inline void SetDocumentationPartId(const Aws::String& value) { m_documentationPartIdHasBeenSet = true; m_documentationPartId = value; }

    /**
     * <p>[Required] The identifier of the to-be-deleted documentation part.</p>
     */
    inline void SetDocumentationPartId(Aws::String&& value) { m_documentationPartIdHasBeenSet = true; m_documentationPartId = std::move(value); }

    /**
     * <p>[Required] The identifier of the to-be-deleted documentation part.</p>
     */
    inline void SetDocumentationPartId(const char* value) { m_documentationPartIdHasBeenSet = true; m_documentationPartId.assign(value); }

    /**
     * <p>[Required] The identifier of the to-be-deleted documentation part.</p>
     */
    inline DeleteDocumentationPartRequest& WithDocumentationPartId(const Aws::String& value) { SetDocumentationPartId(value); return *this;}

    /**
     * <p>[Required] The identifier of the to-be-deleted documentation part.</p>
     */
    inline DeleteDocumentationPartRequest& WithDocumentationPartId(Aws::String&& value) { SetDocumentationPartId(std::move(value)); return *this;}

    /**
     * <p>[Required] The identifier of the to-be-deleted documentation part.</p>
     */
    inline DeleteDocumentationPartRequest& WithDocumentationPartId(const char* value) { SetDocumentationPartId(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    Aws::String m_documentationPartId;
    bool m_documentationPartIdHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
