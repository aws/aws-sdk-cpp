/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/DocumentationPartLocation.h>
#include <utility>

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
  class CreateDocumentationPartRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateDocumentationPartRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDocumentationPart"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline CreateDocumentationPartRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline CreateDocumentationPartRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline CreateDocumentationPartRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the targeted API entity of the to-be-created documentation
     * part.</p>
     */
    inline const DocumentationPartLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const DocumentationPartLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(DocumentationPartLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline CreateDocumentationPartRequest& WithLocation(const DocumentationPartLocation& value) { SetLocation(value); return *this;}
    inline CreateDocumentationPartRequest& WithLocation(DocumentationPartLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new documentation content map of the targeted API entity. Enclosed
     * key-value pairs are API-specific, but only OpenAPI-compliant key-value pairs can
     * be exported and, hence, published.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline void SetProperties(const char* value) { m_propertiesHasBeenSet = true; m_properties.assign(value); }
    inline CreateDocumentationPartRequest& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}
    inline CreateDocumentationPartRequest& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}
    inline CreateDocumentationPartRequest& WithProperties(const char* value) { SetProperties(value); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    DocumentationPartLocation m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
