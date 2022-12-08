/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Deletes an existing documentation version of an API.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeleteDocumentationVersionRequest">AWS
   * API Reference</a></p>
   */
  class DeleteDocumentationVersionRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API DeleteDocumentationVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDocumentationVersion"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline DeleteDocumentationVersionRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline DeleteDocumentationVersionRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline DeleteDocumentationVersionRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The version identifier of a to-be-deleted documentation snapshot.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }

    /**
     * <p>The version identifier of a to-be-deleted documentation snapshot.</p>
     */
    inline bool DocumentationVersionHasBeenSet() const { return m_documentationVersionHasBeenSet; }

    /**
     * <p>The version identifier of a to-be-deleted documentation snapshot.</p>
     */
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }

    /**
     * <p>The version identifier of a to-be-deleted documentation snapshot.</p>
     */
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::move(value); }

    /**
     * <p>The version identifier of a to-be-deleted documentation snapshot.</p>
     */
    inline void SetDocumentationVersion(const char* value) { m_documentationVersionHasBeenSet = true; m_documentationVersion.assign(value); }

    /**
     * <p>The version identifier of a to-be-deleted documentation snapshot.</p>
     */
    inline DeleteDocumentationVersionRequest& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}

    /**
     * <p>The version identifier of a to-be-deleted documentation snapshot.</p>
     */
    inline DeleteDocumentationVersionRequest& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(std::move(value)); return *this;}

    /**
     * <p>The version identifier of a to-be-deleted documentation snapshot.</p>
     */
    inline DeleteDocumentationVersionRequest& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
