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
   * <p>Updates a RequestValidator of a given RestApi.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateRequestValidatorRequest">AWS
   * API Reference</a></p>
   */
  class UpdateRequestValidatorRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API UpdateRequestValidatorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRequestValidator"; }

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
    inline UpdateRequestValidatorRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline UpdateRequestValidatorRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline UpdateRequestValidatorRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of RequestValidator to be updated.</p>
     */
    inline const Aws::String& GetRequestValidatorId() const{ return m_requestValidatorId; }
    inline bool RequestValidatorIdHasBeenSet() const { return m_requestValidatorIdHasBeenSet; }
    inline void SetRequestValidatorId(const Aws::String& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = value; }
    inline void SetRequestValidatorId(Aws::String&& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = std::move(value); }
    inline void SetRequestValidatorId(const char* value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId.assign(value); }
    inline UpdateRequestValidatorRequest& WithRequestValidatorId(const Aws::String& value) { SetRequestValidatorId(value); return *this;}
    inline UpdateRequestValidatorRequest& WithRequestValidatorId(Aws::String&& value) { SetRequestValidatorId(std::move(value)); return *this;}
    inline UpdateRequestValidatorRequest& WithRequestValidatorId(const char* value) { SetRequestValidatorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline const Aws::Vector<PatchOperation>& GetPatchOperations() const{ return m_patchOperations; }
    inline bool PatchOperationsHasBeenSet() const { return m_patchOperationsHasBeenSet; }
    inline void SetPatchOperations(const Aws::Vector<PatchOperation>& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }
    inline void SetPatchOperations(Aws::Vector<PatchOperation>&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = std::move(value); }
    inline UpdateRequestValidatorRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}
    inline UpdateRequestValidatorRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(std::move(value)); return *this;}
    inline UpdateRequestValidatorRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }
    inline UpdateRequestValidatorRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_requestValidatorId;
    bool m_requestValidatorIdHasBeenSet = false;

    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
