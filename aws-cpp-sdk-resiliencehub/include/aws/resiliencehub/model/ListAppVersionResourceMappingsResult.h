/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceMapping.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppVersionResourceMappingsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppVersionResourceMappingsResult();
    AWS_RESILIENCEHUB_API ListAppVersionResourceMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppVersionResourceMappingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionResourceMappingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionResourceMappingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListAppVersionResourceMappingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline const Aws::Vector<ResourceMapping>& GetResourceMappings() const{ return m_resourceMappings; }

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline void SetResourceMappings(const Aws::Vector<ResourceMapping>& value) { m_resourceMappings = value; }

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline void SetResourceMappings(Aws::Vector<ResourceMapping>&& value) { m_resourceMappings = std::move(value); }

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline ListAppVersionResourceMappingsResult& WithResourceMappings(const Aws::Vector<ResourceMapping>& value) { SetResourceMappings(value); return *this;}

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline ListAppVersionResourceMappingsResult& WithResourceMappings(Aws::Vector<ResourceMapping>&& value) { SetResourceMappings(std::move(value)); return *this;}

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline ListAppVersionResourceMappingsResult& AddResourceMappings(const ResourceMapping& value) { m_resourceMappings.push_back(value); return *this; }

    /**
     * <p>Mappings used to map logical resources from the template to physical
     * resources. You can use the mapping type <code>CFN_STACK</code> if the
     * application template uses a logical stack name. Or you can map individual
     * resources by using the mapping type <code>RESOURCE</code>. We recommend using
     * the mapping type <code>CFN_STACK</code> if the application is backed by a
     * CloudFormation stack.</p>
     */
    inline ListAppVersionResourceMappingsResult& AddResourceMappings(ResourceMapping&& value) { m_resourceMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourceMapping> m_resourceMappings;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
