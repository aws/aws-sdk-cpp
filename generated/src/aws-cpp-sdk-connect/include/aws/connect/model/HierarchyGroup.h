/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HierarchyPath.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a hierarchy group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HierarchyGroup">AWS
   * API Reference</a></p>
   */
  class HierarchyGroup
  {
  public:
    AWS_CONNECT_API HierarchyGroup();
    AWS_CONNECT_API HierarchyGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HierarchyGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the hierarchy group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hierarchy group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hierarchy group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hierarchy group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hierarchy group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hierarchy group.</p>
     */
    inline HierarchyGroup& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the level in the hierarchy group.</p>
     */
    inline const Aws::String& GetLevelId() const{ return m_levelId; }

    /**
     * <p>The identifier of the level in the hierarchy group.</p>
     */
    inline bool LevelIdHasBeenSet() const { return m_levelIdHasBeenSet; }

    /**
     * <p>The identifier of the level in the hierarchy group.</p>
     */
    inline void SetLevelId(const Aws::String& value) { m_levelIdHasBeenSet = true; m_levelId = value; }

    /**
     * <p>The identifier of the level in the hierarchy group.</p>
     */
    inline void SetLevelId(Aws::String&& value) { m_levelIdHasBeenSet = true; m_levelId = std::move(value); }

    /**
     * <p>The identifier of the level in the hierarchy group.</p>
     */
    inline void SetLevelId(const char* value) { m_levelIdHasBeenSet = true; m_levelId.assign(value); }

    /**
     * <p>The identifier of the level in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithLevelId(const Aws::String& value) { SetLevelId(value); return *this;}

    /**
     * <p>The identifier of the level in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithLevelId(Aws::String&& value) { SetLevelId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the level in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithLevelId(const char* value) { SetLevelId(value); return *this;}


    /**
     * <p>Information about the levels in the hierarchy group.</p>
     */
    inline const HierarchyPath& GetHierarchyPath() const{ return m_hierarchyPath; }

    /**
     * <p>Information about the levels in the hierarchy group.</p>
     */
    inline bool HierarchyPathHasBeenSet() const { return m_hierarchyPathHasBeenSet; }

    /**
     * <p>Information about the levels in the hierarchy group.</p>
     */
    inline void SetHierarchyPath(const HierarchyPath& value) { m_hierarchyPathHasBeenSet = true; m_hierarchyPath = value; }

    /**
     * <p>Information about the levels in the hierarchy group.</p>
     */
    inline void SetHierarchyPath(HierarchyPath&& value) { m_hierarchyPathHasBeenSet = true; m_hierarchyPath = std::move(value); }

    /**
     * <p>Information about the levels in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithHierarchyPath(const HierarchyPath& value) { SetHierarchyPath(value); return *this;}

    /**
     * <p>Information about the levels in the hierarchy group.</p>
     */
    inline HierarchyGroup& WithHierarchyPath(HierarchyPath&& value) { SetHierarchyPath(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline HierarchyGroup& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_levelId;
    bool m_levelIdHasBeenSet = false;

    HierarchyPath m_hierarchyPath;
    bool m_hierarchyPathHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
