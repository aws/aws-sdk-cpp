/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfigdata/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppConfigData
{
namespace Model
{

  /**
   * <p>The requested resource could not be found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_APPCONFIGDATA_API ResourceNotFoundException();
    AWS_APPCONFIGDATA_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The type of resource that was not found.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource that was not found.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource that was not found.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource that was not found.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource that was not found.</p>
     */
    inline ResourceNotFoundException& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource that was not found.</p>
     */
    inline ResourceNotFoundException& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetReferencedBy() const{ return m_referencedBy; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline bool ReferencedByHasBeenSet() const { return m_referencedByHasBeenSet; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline void SetReferencedBy(const Aws::Map<Aws::String, Aws::String>& value) { m_referencedByHasBeenSet = true; m_referencedBy = value; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline void SetReferencedBy(Aws::Map<Aws::String, Aws::String>&& value) { m_referencedByHasBeenSet = true; m_referencedBy = std::move(value); }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& WithReferencedBy(const Aws::Map<Aws::String, Aws::String>& value) { SetReferencedBy(value); return *this;}

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& WithReferencedBy(Aws::Map<Aws::String, Aws::String>&& value) { SetReferencedBy(std::move(value)); return *this;}

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& AddReferencedBy(const Aws::String& key, const Aws::String& value) { m_referencedByHasBeenSet = true; m_referencedBy.emplace(key, value); return *this; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& AddReferencedBy(Aws::String&& key, const Aws::String& value) { m_referencedByHasBeenSet = true; m_referencedBy.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& AddReferencedBy(const Aws::String& key, Aws::String&& value) { m_referencedByHasBeenSet = true; m_referencedBy.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& AddReferencedBy(Aws::String&& key, Aws::String&& value) { m_referencedByHasBeenSet = true; m_referencedBy.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& AddReferencedBy(const char* key, Aws::String&& value) { m_referencedByHasBeenSet = true; m_referencedBy.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& AddReferencedBy(Aws::String&& key, const char* value) { m_referencedByHasBeenSet = true; m_referencedBy.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map indicating which parameters in the request reference the resource that
     * was not found.</p>
     */
    inline ResourceNotFoundException& AddReferencedBy(const char* key, const char* value) { m_referencedByHasBeenSet = true; m_referencedBy.emplace(key, value); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_referencedBy;
    bool m_referencedByHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
