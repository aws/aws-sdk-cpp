/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/route53-recovery-readiness/model/Resource.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class AWS_ROUTE53RECOVERYREADINESS_API CreateResourceSetResult
  {
  public:
    CreateResourceSetResult();
    CreateResourceSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateResourceSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The arn for the ResourceSet
     */
    inline const Aws::String& GetResourceSetArn() const{ return m_resourceSetArn; }

    /**
     * The arn for the ResourceSet
     */
    inline void SetResourceSetArn(const Aws::String& value) { m_resourceSetArn = value; }

    /**
     * The arn for the ResourceSet
     */
    inline void SetResourceSetArn(Aws::String&& value) { m_resourceSetArn = std::move(value); }

    /**
     * The arn for the ResourceSet
     */
    inline void SetResourceSetArn(const char* value) { m_resourceSetArn.assign(value); }

    /**
     * The arn for the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetArn(const Aws::String& value) { SetResourceSetArn(value); return *this;}

    /**
     * The arn for the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetArn(Aws::String&& value) { SetResourceSetArn(std::move(value)); return *this;}

    /**
     * The arn for the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetArn(const char* value) { SetResourceSetArn(value); return *this;}


    /**
     * The name of the ResourceSet
     */
    inline const Aws::String& GetResourceSetName() const{ return m_resourceSetName; }

    /**
     * The name of the ResourceSet
     */
    inline void SetResourceSetName(const Aws::String& value) { m_resourceSetName = value; }

    /**
     * The name of the ResourceSet
     */
    inline void SetResourceSetName(Aws::String&& value) { m_resourceSetName = std::move(value); }

    /**
     * The name of the ResourceSet
     */
    inline void SetResourceSetName(const char* value) { m_resourceSetName.assign(value); }

    /**
     * The name of the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetName(const Aws::String& value) { SetResourceSetName(value); return *this;}

    /**
     * The name of the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetName(Aws::String&& value) { SetResourceSetName(std::move(value)); return *this;}

    /**
     * The name of the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetName(const char* value) { SetResourceSetName(value); return *this;}


    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline const Aws::String& GetResourceSetType() const{ return m_resourceSetType; }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(const Aws::String& value) { m_resourceSetType = value; }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(Aws::String&& value) { m_resourceSetType = std::move(value); }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(const char* value) { m_resourceSetType.assign(value); }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetType(const Aws::String& value) { SetResourceSetType(value); return *this;}

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetType(Aws::String&& value) { SetResourceSetType(std::move(value)); return *this;}

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline CreateResourceSetResult& WithResourceSetType(const char* value) { SetResourceSetType(value); return *this;}


    /**
     * A list of Resource objects
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * A list of Resource objects
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resources = value; }

    /**
     * A list of Resource objects
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resources = std::move(value); }

    /**
     * A list of Resource objects
     */
    inline CreateResourceSetResult& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * A list of Resource objects
     */
    inline CreateResourceSetResult& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * A list of Resource objects
     */
    inline CreateResourceSetResult& AddResources(const Resource& value) { m_resources.push_back(value); return *this; }

    /**
     * A list of Resource objects
     */
    inline CreateResourceSetResult& AddResources(Resource&& value) { m_resources.push_back(std::move(value)); return *this; }


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline CreateResourceSetResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateResourceSetResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateResourceSetResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline CreateResourceSetResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateResourceSetResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateResourceSetResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateResourceSetResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateResourceSetResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateResourceSetResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceSetArn;

    Aws::String m_resourceSetName;

    Aws::String m_resourceSetType;

    Aws::Vector<Resource> m_resources;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
