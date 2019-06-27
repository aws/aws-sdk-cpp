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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the display name of an application and the tags to associate with
   * the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CreateApplicationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API CreateApplicationRequest
  {
  public:
    CreateApplicationRequest();
    CreateApplicationRequest(Aws::Utils::Json::JsonView jsonValue);
    CreateApplicationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display name of the application. This name is displayed as the <b>Project
     * name</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name of the application. This name is displayed as the <b>Project
     * name</b> on the Amazon Pinpoint console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name of the application. This name is displayed as the <b>Project
     * name</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name of the application. This name is displayed as the <b>Project
     * name</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name of the application. This name is displayed as the <b>Project
     * name</b> on the Amazon Pinpoint console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name of the application. This name is displayed as the <b>Project
     * name</b> on the Amazon Pinpoint console.</p>
     */
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name of the application. This name is displayed as the <b>Project
     * name</b> on the Amazon Pinpoint console.</p>
     */
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name of the application. This name is displayed as the <b>Project
     * name</b> on the Amazon Pinpoint console.</p>
     */
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string-to-string map of key-value pairs that defines the tags to associate
     * with the application. Each tag consists of a required tag key and an associated
     * tag value.</p>
     */
    inline CreateApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
