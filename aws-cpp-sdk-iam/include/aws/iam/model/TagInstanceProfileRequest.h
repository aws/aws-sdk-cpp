/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API TagInstanceProfileRequest : public IAMRequest
  {
  public:
    TagInstanceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagInstanceProfile"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the IAM instance profile to which you want to add tags.</p>
     * <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }

    /**
     * <p>The name of the IAM instance profile to which you want to add tags.</p>
     * <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }

    /**
     * <p>The name of the IAM instance profile to which you want to add tags.</p>
     * <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }

    /**
     * <p>The name of the IAM instance profile to which you want to add tags.</p>
     * <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }

    /**
     * <p>The name of the IAM instance profile to which you want to add tags.</p>
     * <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }

    /**
     * <p>The name of the IAM instance profile to which you want to add tags.</p>
     * <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline TagInstanceProfileRequest& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}

    /**
     * <p>The name of the IAM instance profile to which you want to add tags.</p>
     * <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline TagInstanceProfileRequest& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM instance profile to which you want to add tags.</p>
     * <p>This parameter accepts (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that consist of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline TagInstanceProfileRequest& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}


    /**
     * <p>The list of tags that you want to attach to the IAM instance profile. Each
     * tag consists of a key name and an associated value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags that you want to attach to the IAM instance profile. Each
     * tag consists of a key name and an associated value.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags that you want to attach to the IAM instance profile. Each
     * tag consists of a key name and an associated value.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags that you want to attach to the IAM instance profile. Each
     * tag consists of a key name and an associated value.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags that you want to attach to the IAM instance profile. Each
     * tag consists of a key name and an associated value.</p>
     */
    inline TagInstanceProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags that you want to attach to the IAM instance profile. Each
     * tag consists of a key name and an associated value.</p>
     */
    inline TagInstanceProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags that you want to attach to the IAM instance profile. Each
     * tag consists of a key name and an associated value.</p>
     */
    inline TagInstanceProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags that you want to attach to the IAM instance profile. Each
     * tag consists of a key name and an associated value.</p>
     */
    inline TagInstanceProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
