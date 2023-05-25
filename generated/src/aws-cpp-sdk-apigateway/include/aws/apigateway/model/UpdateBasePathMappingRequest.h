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
   * <p>A request to change information about the BasePathMapping
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/UpdateBasePathMappingRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBasePathMappingRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API UpdateBasePathMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBasePathMapping"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The domain name of the BasePathMapping resource to change.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of the BasePathMapping resource to change.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name of the BasePathMapping resource to change.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the BasePathMapping resource to change.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name of the BasePathMapping resource to change.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of the BasePathMapping resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the BasePathMapping resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name of the BasePathMapping resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The base path of the BasePathMapping resource to change.</p> <p>To specify an
     * empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }

    /**
     * <p>The base path of the BasePathMapping resource to change.</p> <p>To specify an
     * empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline bool BasePathHasBeenSet() const { return m_basePathHasBeenSet; }

    /**
     * <p>The base path of the BasePathMapping resource to change.</p> <p>To specify an
     * empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>The base path of the BasePathMapping resource to change.</p> <p>To specify an
     * empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = std::move(value); }

    /**
     * <p>The base path of the BasePathMapping resource to change.</p> <p>To specify an
     * empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }

    /**
     * <p>The base path of the BasePathMapping resource to change.</p> <p>To specify an
     * empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline UpdateBasePathMappingRequest& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path of the BasePathMapping resource to change.</p> <p>To specify an
     * empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline UpdateBasePathMappingRequest& WithBasePath(Aws::String&& value) { SetBasePath(std::move(value)); return *this;}

    /**
     * <p>The base path of the BasePathMapping resource to change.</p> <p>To specify an
     * empty base path, set this parameter to <code>'(none)'</code>.</p>
     */
    inline UpdateBasePathMappingRequest& WithBasePath(const char* value) { SetBasePath(value); return *this;}


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
    inline UpdateBasePathMappingRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateBasePathMappingRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(std::move(value)); return *this;}

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateBasePathMappingRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

    /**
     * <p>For more information about supported patch operations, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
     * Operations</a>.</p>
     */
    inline UpdateBasePathMappingRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_basePath;
    bool m_basePathHasBeenSet = false;

    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
