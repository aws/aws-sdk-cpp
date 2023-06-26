/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Summary information about a stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/StageSummary">AWS
   * API Reference</a></p>
   */
  class StageSummary
  {
  public:
    AWS_IVSREALTIME_API StageSummary();
    AWS_IVSREALTIME_API StageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API StageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline const Aws::String& GetActiveSessionId() const{ return m_activeSessionId; }

    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline bool ActiveSessionIdHasBeenSet() const { return m_activeSessionIdHasBeenSet; }

    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline void SetActiveSessionId(const Aws::String& value) { m_activeSessionIdHasBeenSet = true; m_activeSessionId = value; }

    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline void SetActiveSessionId(Aws::String&& value) { m_activeSessionIdHasBeenSet = true; m_activeSessionId = std::move(value); }

    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline void SetActiveSessionId(const char* value) { m_activeSessionIdHasBeenSet = true; m_activeSessionId.assign(value); }

    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline StageSummary& WithActiveSessionId(const Aws::String& value) { SetActiveSessionId(value); return *this;}

    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline StageSummary& WithActiveSessionId(Aws::String&& value) { SetActiveSessionId(std::move(value)); return *this;}

    /**
     * <p>ID of the active session within the stage.</p>
     */
    inline StageSummary& WithActiveSessionId(const char* value) { SetActiveSessionId(value); return *this;}


    /**
     * <p>Stage ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Stage ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Stage ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Stage ARN.</p>
     */
    inline StageSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Stage ARN.</p>
     */
    inline StageSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Stage ARN.</p>
     */
    inline StageSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Stage name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Stage name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Stage name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Stage name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Stage name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Stage name.</p>
     */
    inline StageSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Stage name.</p>
     */
    inline StageSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Stage name.</p>
     */
    inline StageSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>. See <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * AWS Resources</a> for details, including restrictions that apply to tags and
     * "Tag naming limits and requirements"; Amazon IVS has no constraints on tags
     * beyond what is documented there.</p>
     */
    inline StageSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_activeSessionId;
    bool m_activeSessionIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
