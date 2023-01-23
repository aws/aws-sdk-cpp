/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Update.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EKS
{
namespace Model
{
  class AssociateIdentityProviderConfigResult
  {
  public:
    AWS_EKS_API AssociateIdentityProviderConfigResult();
    AWS_EKS_API AssociateIdentityProviderConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API AssociateIdentityProviderConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Update& GetUpdate() const{ return m_update; }

    
    inline void SetUpdate(const Update& value) { m_update = value; }

    
    inline void SetUpdate(Update&& value) { m_update = std::move(value); }

    
    inline AssociateIdentityProviderConfigResult& WithUpdate(const Update& value) { SetUpdate(value); return *this;}

    
    inline AssociateIdentityProviderConfigResult& WithUpdate(Update&& value) { SetUpdate(std::move(value)); return *this;}


    /**
     * <p>The tags for the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline AssociateIdentityProviderConfigResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Update m_update;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
