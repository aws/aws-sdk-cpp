/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/FindingsFilterAction.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about a findings filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/FindingsFilterListItem">AWS
   * API Reference</a></p>
   */
  class FindingsFilterListItem
  {
  public:
    AWS_MACIE2_API FindingsFilterListItem();
    AWS_MACIE2_API FindingsFilterListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API FindingsFilterListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that's performed on findings that match the filter criteria.
     * Possible values are: ARCHIVE, suppress (automatically archive) the findings;
     * and, NOOP, don't perform any action on the findings.</p>
     */
    inline const FindingsFilterAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that's performed on findings that match the filter criteria.
     * Possible values are: ARCHIVE, suppress (automatically archive) the findings;
     * and, NOOP, don't perform any action on the findings.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that's performed on findings that match the filter criteria.
     * Possible values are: ARCHIVE, suppress (automatically archive) the findings;
     * and, NOOP, don't perform any action on the findings.</p>
     */
    inline void SetAction(const FindingsFilterAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that's performed on findings that match the filter criteria.
     * Possible values are: ARCHIVE, suppress (automatically archive) the findings;
     * and, NOOP, don't perform any action on the findings.</p>
     */
    inline void SetAction(FindingsFilterAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that's performed on findings that match the filter criteria.
     * Possible values are: ARCHIVE, suppress (automatically archive) the findings;
     * and, NOOP, don't perform any action on the findings.</p>
     */
    inline FindingsFilterListItem& WithAction(const FindingsFilterAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that's performed on findings that match the filter criteria.
     * Possible values are: ARCHIVE, suppress (automatically archive) the findings;
     * and, NOOP, don't perform any action on the findings.</p>
     */
    inline FindingsFilterListItem& WithAction(FindingsFilterAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline FindingsFilterListItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline FindingsFilterListItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the filter.</p>
     */
    inline FindingsFilterListItem& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline FindingsFilterListItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline FindingsFilterListItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the filter.</p>
     */
    inline FindingsFilterListItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The custom name of the filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The custom name of the filter.</p>
     */
    inline FindingsFilterListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The custom name of the filter.</p>
     */
    inline FindingsFilterListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The custom name of the filter.</p>
     */
    inline FindingsFilterListItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs that specifies which tags (keys and values) are
     * associated with the filter.</p>
     */
    inline FindingsFilterListItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    FindingsFilterAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
