/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/PutMode.h>
#include <aws/core/utils/Array.h>
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
   * <p>Import documentation parts from an external (e.g., OpenAPI) definition file.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportDocumentationPartsRequest">AWS
   * API Reference</a></p>
   */
  class ImportDocumentationPartsRequest : public StreamingAPIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API ImportDocumentationPartsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportDocumentationParts"; }

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline ImportDocumentationPartsRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline ImportDocumentationPartsRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline ImportDocumentationPartsRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>A query parameter to indicate whether to overwrite (<code>overwrite</code>)
     * any existing DocumentationParts definition or to merge (<code>merge</code>) the
     * new definition into the existing one. The default value is
     * <code>merge</code>.</p>
     */
    inline const PutMode& GetMode() const{ return m_mode; }

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>overwrite</code>)
     * any existing DocumentationParts definition or to merge (<code>merge</code>) the
     * new definition into the existing one. The default value is
     * <code>merge</code>.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>overwrite</code>)
     * any existing DocumentationParts definition or to merge (<code>merge</code>) the
     * new definition into the existing one. The default value is
     * <code>merge</code>.</p>
     */
    inline void SetMode(const PutMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>overwrite</code>)
     * any existing DocumentationParts definition or to merge (<code>merge</code>) the
     * new definition into the existing one. The default value is
     * <code>merge</code>.</p>
     */
    inline void SetMode(PutMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>overwrite</code>)
     * any existing DocumentationParts definition or to merge (<code>merge</code>) the
     * new definition into the existing one. The default value is
     * <code>merge</code>.</p>
     */
    inline ImportDocumentationPartsRequest& WithMode(const PutMode& value) { SetMode(value); return *this;}

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>overwrite</code>)
     * any existing DocumentationParts definition or to merge (<code>merge</code>) the
     * new definition into the existing one. The default value is
     * <code>merge</code>.</p>
     */
    inline ImportDocumentationPartsRequest& WithMode(PutMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>A query parameter to specify whether to rollback the documentation
     * importation (<code>true</code>) or not (<code>false</code>) when a warning is
     * encountered. The default value is <code>false</code>.</p>
     */
    inline bool GetFailOnWarnings() const{ return m_failOnWarnings; }

    /**
     * <p>A query parameter to specify whether to rollback the documentation
     * importation (<code>true</code>) or not (<code>false</code>) when a warning is
     * encountered. The default value is <code>false</code>.</p>
     */
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }

    /**
     * <p>A query parameter to specify whether to rollback the documentation
     * importation (<code>true</code>) or not (<code>false</code>) when a warning is
     * encountered. The default value is <code>false</code>.</p>
     */
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }

    /**
     * <p>A query parameter to specify whether to rollback the documentation
     * importation (<code>true</code>) or not (<code>false</code>) when a warning is
     * encountered. The default value is <code>false</code>.</p>
     */
    inline ImportDocumentationPartsRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    PutMode m_mode;
    bool m_modeHasBeenSet = false;

    bool m_failOnWarnings;
    bool m_failOnWarningsHasBeenSet = false;

  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
