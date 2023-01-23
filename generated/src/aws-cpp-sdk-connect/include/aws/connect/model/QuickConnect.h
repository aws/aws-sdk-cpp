/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QuickConnectConfig.h>
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
   * <p>Contains information about a quick connect.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QuickConnect">AWS
   * API Reference</a></p>
   */
  class QuickConnect
  {
  public:
    AWS_CONNECT_API QuickConnect();
    AWS_CONNECT_API QuickConnect(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QuickConnect& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline const Aws::String& GetQuickConnectARN() const{ return m_quickConnectARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline bool QuickConnectARNHasBeenSet() const { return m_quickConnectARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline void SetQuickConnectARN(const Aws::String& value) { m_quickConnectARNHasBeenSet = true; m_quickConnectARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline void SetQuickConnectARN(Aws::String&& value) { m_quickConnectARNHasBeenSet = true; m_quickConnectARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline void SetQuickConnectARN(const char* value) { m_quickConnectARNHasBeenSet = true; m_quickConnectARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline QuickConnect& WithQuickConnectARN(const Aws::String& value) { SetQuickConnectARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline QuickConnect& WithQuickConnectARN(Aws::String&& value) { SetQuickConnectARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline QuickConnect& WithQuickConnectARN(const char* value) { SetQuickConnectARN(value); return *this;}


    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline const Aws::String& GetQuickConnectId() const{ return m_quickConnectId; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline bool QuickConnectIdHasBeenSet() const { return m_quickConnectIdHasBeenSet; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(const Aws::String& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = value; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(Aws::String&& value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId = std::move(value); }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetQuickConnectId(const char* value) { m_quickConnectIdHasBeenSet = true; m_quickConnectId.assign(value); }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline QuickConnect& WithQuickConnectId(const Aws::String& value) { SetQuickConnectId(value); return *this;}

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline QuickConnect& WithQuickConnectId(Aws::String&& value) { SetQuickConnectId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline QuickConnect& WithQuickConnectId(const char* value) { SetQuickConnectId(value); return *this;}


    /**
     * <p>The name of the quick connect.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline QuickConnect& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the quick connect.</p>
     */
    inline QuickConnect& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the quick connect.</p>
     */
    inline QuickConnect& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline QuickConnect& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline QuickConnect& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline QuickConnect& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Contains information about the quick connect.</p>
     */
    inline const QuickConnectConfig& GetQuickConnectConfig() const{ return m_quickConnectConfig; }

    /**
     * <p>Contains information about the quick connect.</p>
     */
    inline bool QuickConnectConfigHasBeenSet() const { return m_quickConnectConfigHasBeenSet; }

    /**
     * <p>Contains information about the quick connect.</p>
     */
    inline void SetQuickConnectConfig(const QuickConnectConfig& value) { m_quickConnectConfigHasBeenSet = true; m_quickConnectConfig = value; }

    /**
     * <p>Contains information about the quick connect.</p>
     */
    inline void SetQuickConnectConfig(QuickConnectConfig&& value) { m_quickConnectConfigHasBeenSet = true; m_quickConnectConfig = std::move(value); }

    /**
     * <p>Contains information about the quick connect.</p>
     */
    inline QuickConnect& WithQuickConnectConfig(const QuickConnectConfig& value) { SetQuickConnectConfig(value); return *this;}

    /**
     * <p>Contains information about the quick connect.</p>
     */
    inline QuickConnect& WithQuickConnectConfig(QuickConnectConfig&& value) { SetQuickConnectConfig(std::move(value)); return *this;}


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
    inline QuickConnect& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline QuickConnect& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline QuickConnect& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline QuickConnect& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline QuickConnect& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline QuickConnect& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline QuickConnect& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline QuickConnect& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline QuickConnect& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_quickConnectARN;
    bool m_quickConnectARNHasBeenSet = false;

    Aws::String m_quickConnectId;
    bool m_quickConnectIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    QuickConnectConfig m_quickConnectConfig;
    bool m_quickConnectConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
