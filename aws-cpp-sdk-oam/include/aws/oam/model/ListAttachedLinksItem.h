/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OAM
{
namespace Model
{

  /**
   * <p>A structure that contains information about one link attached to this
   * monitoring account sink.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/oam-2022-06-10/ListAttachedLinksItem">AWS
   * API Reference</a></p>
   */
  class ListAttachedLinksItem
  {
  public:
    AWS_OAM_API ListAttachedLinksItem();
    AWS_OAM_API ListAttachedLinksItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API ListAttachedLinksItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline ListAttachedLinksItem& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline ListAttachedLinksItem& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label that was assigned to this link at creation, with the variables
     * resolved to their actual values.</p>
     */
    inline ListAttachedLinksItem& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The ARN of the link.</p>
     */
    inline const Aws::String& GetLinkArn() const{ return m_linkArn; }

    /**
     * <p>The ARN of the link.</p>
     */
    inline bool LinkArnHasBeenSet() const { return m_linkArnHasBeenSet; }

    /**
     * <p>The ARN of the link.</p>
     */
    inline void SetLinkArn(const Aws::String& value) { m_linkArnHasBeenSet = true; m_linkArn = value; }

    /**
     * <p>The ARN of the link.</p>
     */
    inline void SetLinkArn(Aws::String&& value) { m_linkArnHasBeenSet = true; m_linkArn = std::move(value); }

    /**
     * <p>The ARN of the link.</p>
     */
    inline void SetLinkArn(const char* value) { m_linkArnHasBeenSet = true; m_linkArn.assign(value); }

    /**
     * <p>The ARN of the link.</p>
     */
    inline ListAttachedLinksItem& WithLinkArn(const Aws::String& value) { SetLinkArn(value); return *this;}

    /**
     * <p>The ARN of the link.</p>
     */
    inline ListAttachedLinksItem& WithLinkArn(Aws::String&& value) { SetLinkArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the link.</p>
     */
    inline ListAttachedLinksItem& WithLinkArn(const char* value) { SetLinkArn(value); return *this;}


    /**
     * <p>The resource types supported by this link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The resource types supported by this link.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The resource types supported by this link.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The resource types supported by this link.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The resource types supported by this link.</p>
     */
    inline ListAttachedLinksItem& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The resource types supported by this link.</p>
     */
    inline ListAttachedLinksItem& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource types supported by this link.</p>
     */
    inline ListAttachedLinksItem& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource types supported by this link.</p>
     */
    inline ListAttachedLinksItem& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The resource types supported by this link.</p>
     */
    inline ListAttachedLinksItem& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_linkArn;
    bool m_linkArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
