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
#include <aws/codestar/CodeStar_EXPORTS.h>
#include <aws/codestar/CodeStarRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CodeStar
{
namespace Model
{

  /**
   */
  class AWS_CODESTAR_API UntagProjectRequest : public CodeStarRequest
  {
  public:
    UntagProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagProject"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline UntagProjectRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline UntagProjectRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline UntagProjectRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The tags to remove from the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to remove from the project.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to remove from the project.</p>
     */
    inline void SetTags(const Aws::Vector<Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to remove from the project.</p>
     */
    inline void SetTags(Aws::Vector<Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to remove from the project.</p>
     */
    inline UntagProjectRequest& WithTags(const Aws::Vector<Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to remove from the project.</p>
     */
    inline UntagProjectRequest& WithTags(Aws::Vector<Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to remove from the project.</p>
     */
    inline UntagProjectRequest& AddTags(const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to remove from the project.</p>
     */
    inline UntagProjectRequest& AddTags(Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

    /**
     * <p>The tags to remove from the project.</p>
     */
    inline UntagProjectRequest& AddTags(const char* value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Vector<Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
