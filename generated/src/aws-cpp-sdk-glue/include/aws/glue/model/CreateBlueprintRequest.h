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
  class CreateBlueprintRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateBlueprintRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBlueprint"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the blueprint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the blueprint.</p>
     */
    inline CreateBlueprintRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline CreateBlueprintRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the blueprint.</p>
     */
    inline CreateBlueprintRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the blueprint.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the blueprint.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the blueprint.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the blueprint.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the blueprint.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the blueprint.</p>
     */
    inline CreateBlueprintRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the blueprint.</p>
     */
    inline CreateBlueprintRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the blueprint.</p>
     */
    inline CreateBlueprintRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline const Aws::String& GetBlueprintLocation() const{ return m_blueprintLocation; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline bool BlueprintLocationHasBeenSet() const { return m_blueprintLocationHasBeenSet; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline void SetBlueprintLocation(const Aws::String& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = value; }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline void SetBlueprintLocation(Aws::String&& value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation = std::move(value); }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline void SetBlueprintLocation(const char* value) { m_blueprintLocationHasBeenSet = true; m_blueprintLocation.assign(value); }

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline CreateBlueprintRequest& WithBlueprintLocation(const Aws::String& value) { SetBlueprintLocation(value); return *this;}

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline CreateBlueprintRequest& WithBlueprintLocation(Aws::String&& value) { SetBlueprintLocation(std::move(value)); return *this;}

    /**
     * <p>Specifies a path in Amazon S3 where the blueprint is published.</p>
     */
    inline CreateBlueprintRequest& WithBlueprintLocation(const char* value) { SetBlueprintLocation(value); return *this;}


    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be applied to this blueprint.</p>
     */
    inline CreateBlueprintRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_blueprintLocation;
    bool m_blueprintLocationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
