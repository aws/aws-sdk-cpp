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
   * <p>Request to update an existing RestApi resource in your
   * collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateRestApiRequest">AWS
   * API Reference</a></p>
   */
  class UpdateRestApiRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API UpdateRestApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRestApi"; }

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
    inline UpdateRestApiRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline UpdateRestApiRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline UpdateRestApiRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline const Aws::Vector<PatchOperation>& GetPatchOperations() const{ return m_patchOperations; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline bool PatchOperationsHasBeenSet() const { return m_patchOperationsHasBeenSet; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline void SetPatchOperations(const Aws::Vector<PatchOperation>& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline void SetPatchOperations(Aws::Vector<PatchOperation>&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = std::move(value); }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateRestApiRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateRestApiRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(std::move(value)); return *this;}

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateRestApiRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateRestApiRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
