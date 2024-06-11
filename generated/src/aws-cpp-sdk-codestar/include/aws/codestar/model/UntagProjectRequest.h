/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UntagProjectRequest : public CodeStarRequest
  {
  public:
    AWS_CODESTAR_API UntagProjectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagProject"; }

    AWS_CODESTAR_API Aws::String SerializePayload() const override;

    AWS_CODESTAR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the project to remove tags from.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UntagProjectRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UntagProjectRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UntagProjectRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to remove from the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline UntagProjectRequest& WithTags(const Aws::Vector<Aws::String>& value) { SetTags(value); return *this;}
    inline UntagProjectRequest& WithTags(Aws::Vector<Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UntagProjectRequest& AddTags(const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline UntagProjectRequest& AddTags(Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    inline UntagProjectRequest& AddTags(const char* value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
