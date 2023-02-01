/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The URIs for function resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResourceUri">AWS
   * API Reference</a></p>
   */
  class ResourceUri
  {
  public:
    AWS_GLUE_API ResourceUri();
    AWS_GLUE_API ResourceUri(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ResourceUri& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the resource.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource.</p>
     */
    inline ResourceUri& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource.</p>
     */
    inline ResourceUri& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The URI for accessing the resource.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The URI for accessing the resource.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The URI for accessing the resource.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The URI for accessing the resource.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The URI for accessing the resource.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The URI for accessing the resource.</p>
     */
    inline ResourceUri& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The URI for accessing the resource.</p>
     */
    inline ResourceUri& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The URI for accessing the resource.</p>
     */
    inline ResourceUri& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
