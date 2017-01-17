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
#include <aws/apigateway/model/PutMode.h>
#include <aws/core/utils/Array.h>

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
   * <p>Import documentation parts from an external (e.g., Swagger) definition file.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportDocumentationPartsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API ImportDocumentationPartsRequest : public StreamingAPIGatewayRequest
  {
  public:
    ImportDocumentationPartsRequest();
    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>[Required] The identifier of an API of the to-be-imported documentation
     * parts.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The identifier of an API of the to-be-imported documentation
     * parts.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of an API of the to-be-imported documentation
     * parts.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of an API of the to-be-imported documentation
     * parts.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The identifier of an API of the to-be-imported documentation
     * parts.</p>
     */
    inline ImportDocumentationPartsRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of an API of the to-be-imported documentation
     * parts.</p>
     */
    inline ImportDocumentationPartsRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of an API of the to-be-imported documentation
     * parts.</p>
     */
    inline ImportDocumentationPartsRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>OVERWRITE</code>)
     * any existing <a>DocumentationParts</a> definition or to merge
     * (<code>MERGE</code>) the new definition into the existing one. The default value
     * is <code>MERGE</code>.</p>
     */
    inline const PutMode& GetMode() const{ return m_mode; }

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>OVERWRITE</code>)
     * any existing <a>DocumentationParts</a> definition or to merge
     * (<code>MERGE</code>) the new definition into the existing one. The default value
     * is <code>MERGE</code>.</p>
     */
    inline void SetMode(const PutMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>OVERWRITE</code>)
     * any existing <a>DocumentationParts</a> definition or to merge
     * (<code>MERGE</code>) the new definition into the existing one. The default value
     * is <code>MERGE</code>.</p>
     */
    inline void SetMode(PutMode&& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>OVERWRITE</code>)
     * any existing <a>DocumentationParts</a> definition or to merge
     * (<code>MERGE</code>) the new definition into the existing one. The default value
     * is <code>MERGE</code>.</p>
     */
    inline ImportDocumentationPartsRequest& WithMode(const PutMode& value) { SetMode(value); return *this;}

    /**
     * <p>A query parameter to indicate whether to overwrite (<code>OVERWRITE</code>)
     * any existing <a>DocumentationParts</a> definition or to merge
     * (<code>MERGE</code>) the new definition into the existing one. The default value
     * is <code>MERGE</code>.</p>
     */
    inline ImportDocumentationPartsRequest& WithMode(PutMode&& value) { SetMode(value); return *this;}

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
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }

    /**
     * <p>A query parameter to specify whether to rollback the documentation
     * importation (<code>true</code>) or not (<code>false</code>) when a warning is
     * encountered. The default value is <code>false</code>.</p>
     */
    inline ImportDocumentationPartsRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    PutMode m_mode;
    bool m_modeHasBeenSet;
    bool m_failOnWarnings;
    bool m_failOnWarningsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
