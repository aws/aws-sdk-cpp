/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector/model/ResourceGroupTag.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about a resource group. The resource group defines a set
   * of tags that, when queried, identify the AWS resources that make up the
   * assessment target. This data type is used as the response element in the
   * <a>DescribeResourceGroups</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/ResourceGroup">AWS
   * API Reference</a></p>
   */
  class ResourceGroup
  {
  public:
    AWS_INSPECTOR_API ResourceGroup();
    AWS_INSPECTOR_API ResourceGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API ResourceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the resource group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ResourceGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ResourceGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ResourceGroup& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags (key and value pairs) of the resource group. This data type property
     * is used in the <a>CreateResourceGroup</a> action.</p>
     */
    inline const Aws::Vector<ResourceGroupTag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<ResourceGroupTag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<ResourceGroupTag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ResourceGroup& WithTags(const Aws::Vector<ResourceGroupTag>& value) { SetTags(value); return *this;}
    inline ResourceGroup& WithTags(Aws::Vector<ResourceGroupTag>&& value) { SetTags(std::move(value)); return *this;}
    inline ResourceGroup& AddTags(const ResourceGroupTag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ResourceGroup& AddTags(ResourceGroupTag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which resource group is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ResourceGroup& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ResourceGroup& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<ResourceGroupTag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
