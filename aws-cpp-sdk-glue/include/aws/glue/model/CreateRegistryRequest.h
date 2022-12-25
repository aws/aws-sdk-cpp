/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateRegistryRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateRegistryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRegistry"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the registry to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>Name of the registry to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }

    /**
     * <p>Name of the registry to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }

    /**
     * <p>Name of the registry to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }

    /**
     * <p>Name of the registry to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }

    /**
     * <p>Name of the registry to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline CreateRegistryRequest& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>Name of the registry to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline CreateRegistryRequest& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>Name of the registry to be created of max length of 255, and may only contain
     * letters, numbers, hyphen, underscore, dollar sign, or hash mark. No
     * whitespace.</p>
     */
    inline CreateRegistryRequest& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>A description of the registry. If description is not provided, there will not
     * be any default value for this.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the registry. If description is not provided, there will not
     * be any default value for this.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the registry. If description is not provided, there will not
     * be any default value for this.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the registry. If description is not provided, there will not
     * be any default value for this.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the registry. If description is not provided, there will not
     * be any default value for this.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the registry. If description is not provided, there will not
     * be any default value for this.</p>
     */
    inline CreateRegistryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the registry. If description is not provided, there will not
     * be any default value for this.</p>
     */
    inline CreateRegistryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the registry. If description is not provided, there will not
     * be any default value for this.</p>
     */
    inline CreateRegistryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Amazon Web Services tags that contain a key value pair and may be searched by
     * console, command line, or API.</p>
     */
    inline CreateRegistryRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
