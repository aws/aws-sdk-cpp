/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/PatchOperation.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Updates an existing documentation part of a given API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateDocumentationPartRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDocumentationPartRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API UpdateDocumentationPartRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDocumentationPart"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    UpdateDocumentationPartRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the to-be-updated documentation part.</p>
     */
    inline const Aws::String& GetDocumentationPartId() const { return m_documentationPartId; }
    inline bool DocumentationPartIdHasBeenSet() const { return m_documentationPartIdHasBeenSet; }
    template<typename DocumentationPartIdT = Aws::String>
    void SetDocumentationPartId(DocumentationPartIdT&& value) { m_documentationPartIdHasBeenSet = true; m_documentationPartId = std::forward<DocumentationPartIdT>(value); }
    template<typename DocumentationPartIdT = Aws::String>
    UpdateDocumentationPartRequest& WithDocumentationPartId(DocumentationPartIdT&& value) { SetDocumentationPartId(std::forward<DocumentationPartIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline const Aws::Vector<PatchOperation>& GetPatchOperations() const { return m_patchOperations; }
    inline bool PatchOperationsHasBeenSet() const { return m_patchOperationsHasBeenSet; }
    template<typename PatchOperationsT = Aws::Vector<PatchOperation>>
    void SetPatchOperations(PatchOperationsT&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = std::forward<PatchOperationsT>(value); }
    template<typename PatchOperationsT = Aws::Vector<PatchOperation>>
    UpdateDocumentationPartRequest& WithPatchOperations(PatchOperationsT&& value) { SetPatchOperations(std::forward<PatchOperationsT>(value)); return *this;}
    template<typename PatchOperationsT = PatchOperation>
    UpdateDocumentationPartRequest& AddPatchOperations(PatchOperationsT&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.emplace_back(std::forward<PatchOperationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_documentationPartId;
    bool m_documentationPartIdHasBeenSet = false;

    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
