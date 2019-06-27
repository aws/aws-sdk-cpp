/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the tags (keys and values) for an application, campaign, or
   * segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TagsModel">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API TagsModel
  {
  public:
    TagsModel();
    TagsModel(Aws::Utils::Json::JsonView jsonValue);
    TagsModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags for an
     * application, campaign, or segment. A project, campaign, or segment can have a
     * maximum of 50 tags.</p> <p>Each tag consists of a required tag key and an
     * associated tag value. The maximum length of a tag key is 128 characters. The
     * maximum length of a tag value is 256 characters.</p>
     */
    inline TagsModel& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
