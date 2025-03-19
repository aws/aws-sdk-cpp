/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDocumentationPartsRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetDocumentationPartsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDocumentationParts"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    GetDocumentationPartsRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of API entities of the to-be-retrieved documentation parts. </p>
     */
    inline DocumentationPartType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DocumentationPartType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetDocumentationPartsRequest& WithType(DocumentationPartType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline const Aws::String& GetNameQuery() const { return m_nameQuery; }
    inline bool NameQueryHasBeenSet() const { return m_nameQueryHasBeenSet; }
    template<typename NameQueryT = Aws::String>
    void SetNameQuery(NameQueryT&& value) { m_nameQueryHasBeenSet = true; m_nameQuery = std::forward<NameQueryT>(value); }
    template<typename NameQueryT = Aws::String>
    GetDocumentationPartsRequest& WithNameQuery(NameQueryT&& value) { SetNameQuery(std::forward<NameQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of API entities of the to-be-retrieved documentation parts.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    GetDocumentationPartsRequest& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline const Aws::String& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::String>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::String>
    GetDocumentationPartsRequest& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetDocumentationPartsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the API documentation parts to retrieve. Valid values are
     * <code>DOCUMENTED</code> for retrieving DocumentationPart resources with content
     * and <code>UNDOCUMENTED</code> for DocumentationPart resources without
     * content.</p>
     */
    inline LocationStatusType GetLocationStatus() const { return m_locationStatus; }
    inline bool LocationStatusHasBeenSet() const { return m_locationStatusHasBeenSet; }
    inline void SetLocationStatus(LocationStatusType value) { m_locationStatusHasBeenSet = true; m_locationStatus = value; }
    inline GetDocumentationPartsRequest& WithLocationStatus(LocationStatusType value) { SetLocationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    DocumentationPartType m_type{DocumentationPartType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_nameQuery;
    bool m_nameQueryHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    LocationStatusType m_locationStatus{LocationStatusType::NOT_SET};
    bool m_locationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
