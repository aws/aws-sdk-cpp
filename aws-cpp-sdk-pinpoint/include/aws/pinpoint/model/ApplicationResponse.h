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
   * Application Response.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ApplicationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API ApplicationResponse
  {
  public:
    ApplicationResponse();
    ApplicationResponse(Aws::Utils::Json::JsonView jsonValue);
    ApplicationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The arn for the application.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The arn for the application.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The arn for the application.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The arn for the application.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The arn for the application.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The arn for the application.
     */
    inline ApplicationResponse& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The arn for the application.
     */
    inline ApplicationResponse& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The arn for the application.
     */
    inline ApplicationResponse& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The unique application ID.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique application ID.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The unique application ID.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique application ID.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The unique application ID.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique application ID.
     */
    inline ApplicationResponse& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique application ID.
     */
    inline ApplicationResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique application ID.
     */
    inline ApplicationResponse& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The display name of the application.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The display name of the application.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The display name of the application.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The display name of the application.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The display name of the application.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The display name of the application.
     */
    inline ApplicationResponse& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The display name of the application.
     */
    inline ApplicationResponse& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The display name of the application.
     */
    inline ApplicationResponse& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The Tags for the application.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The Tags for the application.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * The Tags for the application.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * The Tags for the application.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The Tags for the application.
     */
    inline ApplicationResponse& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
