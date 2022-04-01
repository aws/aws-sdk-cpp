﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ResourceDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Details about the resource involved in a finding.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/Resource">AWS API
   * Reference</a></p>
   */
  class AWS_ECR_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline const ResourceDetails& GetDetails() const{ return m_details; }

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline void SetDetails(const ResourceDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline void SetDetails(ResourceDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline Resource& WithDetails(const ResourceDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>An object that contains details about the resource involved in a finding.</p>
     */
    inline Resource& WithDetails(ResourceDetails&& value) { SetDetails(std::move(value)); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The tags attached to the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags attached to the resource.</p>
     */
    inline Resource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of resource.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of resource.</p>
     */
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of resource.</p>
     */
    inline Resource& WithType(const char* value) { SetType(value); return *this;}

  private:

    ResourceDetails m_details;
    bool m_detailsHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
