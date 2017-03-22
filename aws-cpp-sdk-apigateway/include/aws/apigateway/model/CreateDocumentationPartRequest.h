/*
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
#include <aws/apigateway/model/DocumentationPartLocation.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Creates a new documentation part of a given API.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateDocumentationPartRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateDocumentationPartRequest : public APIGatewayRequest
  {
  public:
    CreateDocumentationPartRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The identifier of an API of the to-be-created documentation
     * part.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The identifier of an API of the to-be-created documentation
     * part.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of an API of the to-be-created documentation
     * part.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The identifier of an API of the to-be-created documentation
     * part.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The identifier of an API of the to-be-created documentation
     * part.</p>
     */
    inline CreateDocumentationPartRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of an API of the to-be-created documentation
     * part.</p>
     */
    inline CreateDocumentationPartRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The identifier of an API of the to-be-created documentation
     * part.</p>
     */
    inline CreateDocumentationPartRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The location of the targeted API entity of the to-be-created
     * documentation part.</p>
     */
    inline const DocumentationPartLocation& GetLocation() const{ return m_location; }

    /**
     * <p>[Required] The location of the targeted API entity of the to-be-created
     * documentation part.</p>
     */
    inline void SetLocation(const DocumentationPartLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>[Required] The location of the targeted API entity of the to-be-created
     * documentation part.</p>
     */
    inline void SetLocation(DocumentationPartLocation&& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>[Required] The location of the targeted API entity of the to-be-created
     * documentation part.</p>
     */
    inline CreateDocumentationPartRequest& WithLocation(const DocumentationPartLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>[Required] The location of the targeted API entity of the to-be-created
     * documentation part.</p>
     */
    inline CreateDocumentationPartRequest& WithLocation(DocumentationPartLocation&& value) { SetLocation(value); return *this;}

    /**
     * <p>[Required] The new documentation content map of the targeted API entity.
     * Enclosed key-value pairs are API-specific, but only Swagger-compliant key-value
     * pairs can be exported and, hence, published.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }

    /**
     * <p>[Required] The new documentation content map of the targeted API entity.
     * Enclosed key-value pairs are API-specific, but only Swagger-compliant key-value
     * pairs can be exported and, hence, published.</p>
     */
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>[Required] The new documentation content map of the targeted API entity.
     * Enclosed key-value pairs are API-specific, but only Swagger-compliant key-value
     * pairs can be exported and, hence, published.</p>
     */
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>[Required] The new documentation content map of the targeted API entity.
     * Enclosed key-value pairs are API-specific, but only Swagger-compliant key-value
     * pairs can be exported and, hence, published.</p>
     */
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }

    /**
     * <p>[Required] The new documentation content map of the targeted API entity.
     * Enclosed key-value pairs are API-specific, but only Swagger-compliant key-value
     * pairs can be exported and, hence, published.</p>
     */
    inline CreateDocumentationPartRequest& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}

    /**
     * <p>[Required] The new documentation content map of the targeted API entity.
     * Enclosed key-value pairs are API-specific, but only Swagger-compliant key-value
     * pairs can be exported and, hence, published.</p>
     */
    inline CreateDocumentationPartRequest& WithProperties(Aws::String&& value) { SetProperties(value); return *this;}

    /**
     * <p>[Required] The new documentation content map of the targeted API entity.
     * Enclosed key-value pairs are API-specific, but only Swagger-compliant key-value
     * pairs can be exported and, hence, published.</p>
     */
    inline CreateDocumentationPartRequest& WithProperties(const char* value) { SetProperties(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    DocumentationPartLocation m_location;
    bool m_locationHasBeenSet;
    Aws::String m_properties;
    bool m_propertiesHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
