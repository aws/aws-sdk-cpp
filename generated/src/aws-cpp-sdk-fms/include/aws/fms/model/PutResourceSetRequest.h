/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/FMSRequest.h>
#include <aws/fms/model/ResourceSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FMS
{
namespace Model
{

  /**
   */
  class PutResourceSetRequest : public FMSRequest
  {
  public:
    AWS_FMS_API PutResourceSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourceSet"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Details about the resource set to be created or updated.&gt;</p>
     */
    inline const ResourceSet& GetResourceSet() const{ return m_resourceSet; }

    /**
     * <p>Details about the resource set to be created or updated.&gt;</p>
     */
    inline bool ResourceSetHasBeenSet() const { return m_resourceSetHasBeenSet; }

    /**
     * <p>Details about the resource set to be created or updated.&gt;</p>
     */
    inline void SetResourceSet(const ResourceSet& value) { m_resourceSetHasBeenSet = true; m_resourceSet = value; }

    /**
     * <p>Details about the resource set to be created or updated.&gt;</p>
     */
    inline void SetResourceSet(ResourceSet&& value) { m_resourceSetHasBeenSet = true; m_resourceSet = std::move(value); }

    /**
     * <p>Details about the resource set to be created or updated.&gt;</p>
     */
    inline PutResourceSetRequest& WithResourceSet(const ResourceSet& value) { SetResourceSet(value); return *this;}

    /**
     * <p>Details about the resource set to be created or updated.&gt;</p>
     */
    inline PutResourceSetRequest& WithResourceSet(ResourceSet&& value) { SetResourceSet(std::move(value)); return *this;}


    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline PutResourceSetRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline PutResourceSetRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline PutResourceSetRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline PutResourceSetRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    ResourceSet m_resourceSet;
    bool m_resourceSetHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
