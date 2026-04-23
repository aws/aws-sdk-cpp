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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/Tag.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>A resource tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ResourceTag">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDTRAIL_API ResourceTag
  {
  public:
    ResourceTag();
    ResourceTag(Aws::Utils::Json::JsonView jsonValue);
    ResourceTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the ARN of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies the ARN of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Specifies the ARN of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies the ARN of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Specifies the ARN of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies the ARN of the resource.</p>
     */
    inline ResourceTag& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies the ARN of the resource.</p>
     */
    inline ResourceTag& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the resource.</p>
     */
    inline ResourceTag& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>A list of tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagsList() const{ return m_tagsList; }

    /**
     * <p>A list of tags.</p>
     */
    inline bool TagsListHasBeenSet() const { return m_tagsListHasBeenSet; }

    /**
     * <p>A list of tags.</p>
     */
    inline void SetTagsList(const Aws::Vector<Tag>& value) { m_tagsListHasBeenSet = true; m_tagsList = value; }

    /**
     * <p>A list of tags.</p>
     */
    inline void SetTagsList(Aws::Vector<Tag>&& value) { m_tagsListHasBeenSet = true; m_tagsList = std::move(value); }

    /**
     * <p>A list of tags.</p>
     */
    inline ResourceTag& WithTagsList(const Aws::Vector<Tag>& value) { SetTagsList(value); return *this;}

    /**
     * <p>A list of tags.</p>
     */
    inline ResourceTag& WithTagsList(Aws::Vector<Tag>&& value) { SetTagsList(std::move(value)); return *this;}

    /**
     * <p>A list of tags.</p>
     */
    inline ResourceTag& AddTagsList(const Tag& value) { m_tagsListHasBeenSet = true; m_tagsList.push_back(value); return *this; }

    /**
     * <p>A list of tags.</p>
     */
    inline ResourceTag& AddTagsList(Tag&& value) { m_tagsListHasBeenSet = true; m_tagsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::Vector<Tag> m_tagsList;
    bool m_tagsListHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
