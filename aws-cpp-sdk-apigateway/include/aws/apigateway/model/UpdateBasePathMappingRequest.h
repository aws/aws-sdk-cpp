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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/PatchOperation.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to change information about the <a>BasePathMapping</a>
   * resource.</p>
   */
  class AWS_APIGATEWAY_API UpdateBasePathMappingRequest : public APIGatewayRequest
  {
  public:
    UpdateBasePathMappingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The base path of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }

    /**
     * <p>The base path of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>The base path of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>The base path of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }

    /**
     * <p>The base path of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithBasePath(Aws::String&& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path of the <a>BasePathMapping</a> resource to change.</p>
     */
    inline UpdateBasePathMappingRequest& WithBasePath(const char* value) { SetBasePath(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline const Aws::Vector<PatchOperation>& GetPatchOperations() const{ return m_patchOperations; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline void SetPatchOperations(const Aws::Vector<PatchOperation>& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline void SetPatchOperations(Aws::Vector<PatchOperation>&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations = value; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateBasePathMappingRequest& WithPatchOperations(const Aws::Vector<PatchOperation>& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateBasePathMappingRequest& WithPatchOperations(Aws::Vector<PatchOperation>&& value) { SetPatchOperations(value); return *this;}

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateBasePathMappingRequest& AddPatchOperations(const PatchOperation& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

    /**
     * <p>A list of update operations to be applied to the specified resource and in
     * the order specified in this list.</p>
     */
    inline UpdateBasePathMappingRequest& AddPatchOperations(PatchOperation&& value) { m_patchOperationsHasBeenSet = true; m_patchOperations.push_back(value); return *this; }

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_basePath;
    bool m_basePathHasBeenSet;
    Aws::Vector<PatchOperation> m_patchOperations;
    bool m_patchOperationsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
