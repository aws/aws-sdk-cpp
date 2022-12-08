/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ProvisionedResource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Proton
{
namespace Model
{
  class ListServicePipelineProvisionedResourcesResult
  {
  public:
    AWS_PROTON_API ListServicePipelineProvisionedResourcesResult();
    AWS_PROTON_API ListServicePipelineProvisionedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListServicePipelineProvisionedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the current requested list of provisioned
     * resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the current requested list of provisioned
     * resources.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the current requested list of provisioned
     * resources.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the current requested list of provisioned
     * resources.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the current requested list of provisioned
     * resources.</p>
     */
    inline ListServicePipelineProvisionedResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the current requested list of provisioned
     * resources.</p>
     */
    inline ListServicePipelineProvisionedResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next provisioned resource in the
     * array of provisioned resources, after the current requested list of provisioned
     * resources.</p>
     */
    inline ListServicePipelineProvisionedResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of provisioned resources for a service and pipeline.</p>
     */
    inline const Aws::Vector<ProvisionedResource>& GetProvisionedResources() const{ return m_provisionedResources; }

    /**
     * <p>An array of provisioned resources for a service and pipeline.</p>
     */
    inline void SetProvisionedResources(const Aws::Vector<ProvisionedResource>& value) { m_provisionedResources = value; }

    /**
     * <p>An array of provisioned resources for a service and pipeline.</p>
     */
    inline void SetProvisionedResources(Aws::Vector<ProvisionedResource>&& value) { m_provisionedResources = std::move(value); }

    /**
     * <p>An array of provisioned resources for a service and pipeline.</p>
     */
    inline ListServicePipelineProvisionedResourcesResult& WithProvisionedResources(const Aws::Vector<ProvisionedResource>& value) { SetProvisionedResources(value); return *this;}

    /**
     * <p>An array of provisioned resources for a service and pipeline.</p>
     */
    inline ListServicePipelineProvisionedResourcesResult& WithProvisionedResources(Aws::Vector<ProvisionedResource>&& value) { SetProvisionedResources(std::move(value)); return *this;}

    /**
     * <p>An array of provisioned resources for a service and pipeline.</p>
     */
    inline ListServicePipelineProvisionedResourcesResult& AddProvisionedResources(const ProvisionedResource& value) { m_provisionedResources.push_back(value); return *this; }

    /**
     * <p>An array of provisioned resources for a service and pipeline.</p>
     */
    inline ListServicePipelineProvisionedResourcesResult& AddProvisionedResources(ProvisionedResource&& value) { m_provisionedResources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProvisionedResource> m_provisionedResources;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
