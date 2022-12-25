/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the resource to remove a tag from.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource to remove a tag from.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource to remove a tag from.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource to remove a tag from.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource to remove a tag from.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource to remove a tag from.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline UntagResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource to remove a tag from.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline UntagResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource to remove a tag from.</p> <p>You can specify any of
     * the following taggable resources.</p> <ul> <li> <p>Amazon Web Services account –
     * specify the account ID number.</p> </li> <li> <p>Organizational unit – specify
     * the OU ID that begins with <code>ou-</code> and looks similar to:
     * <code>ou-<i>1a2b-34uvwxyz</i> </code> </p> </li> <li> <p>Root – specify the root
     * ID that begins with <code>r-</code> and looks similar to: <code>r-<i>1a2b</i>
     * </code> </p> </li> <li> <p>Policy – specify the policy ID that begins with
     * <code>p-</code> andlooks similar to: <code>p-<i>12abcdefg3</i> </code> </p>
     * </li> </ul>
     */
    inline UntagResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of keys for tags to remove from the specified resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
