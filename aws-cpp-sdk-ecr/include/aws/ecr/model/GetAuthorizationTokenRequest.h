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
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API GetAuthorizationTokenRequest : public ECRRequest
  {
  public:
    GetAuthorizationTokenRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A list of AWS account IDs that are associated with the registries for which
     * to get authorization tokens. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegistryIds() const{ return m_registryIds; }

    /**
     * <p>A list of AWS account IDs that are associated with the registries for which
     * to get authorization tokens. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryIds(const Aws::Vector<Aws::String>& value) { m_registryIdsHasBeenSet = true; m_registryIds = value; }

    /**
     * <p>A list of AWS account IDs that are associated with the registries for which
     * to get authorization tokens. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryIds(Aws::Vector<Aws::String>&& value) { m_registryIdsHasBeenSet = true; m_registryIds = value; }

    /**
     * <p>A list of AWS account IDs that are associated with the registries for which
     * to get authorization tokens. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline GetAuthorizationTokenRequest& WithRegistryIds(const Aws::Vector<Aws::String>& value) { SetRegistryIds(value); return *this;}

    /**
     * <p>A list of AWS account IDs that are associated with the registries for which
     * to get authorization tokens. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline GetAuthorizationTokenRequest& WithRegistryIds(Aws::Vector<Aws::String>&& value) { SetRegistryIds(value); return *this;}

    /**
     * <p>A list of AWS account IDs that are associated with the registries for which
     * to get authorization tokens. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline GetAuthorizationTokenRequest& AddRegistryIds(const Aws::String& value) { m_registryIdsHasBeenSet = true; m_registryIds.push_back(value); return *this; }

    /**
     * <p>A list of AWS account IDs that are associated with the registries for which
     * to get authorization tokens. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline GetAuthorizationTokenRequest& AddRegistryIds(Aws::String&& value) { m_registryIdsHasBeenSet = true; m_registryIds.push_back(value); return *this; }

    /**
     * <p>A list of AWS account IDs that are associated with the registries for which
     * to get authorization tokens. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline GetAuthorizationTokenRequest& AddRegistryIds(const char* value) { m_registryIdsHasBeenSet = true; m_registryIds.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_registryIds;
    bool m_registryIdsHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
