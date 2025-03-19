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
    AWS_FMS_API PutResourceSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourceSet"; }

    AWS_FMS_API Aws::String SerializePayload() const override;

    AWS_FMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Details about the resource set to be created or updated.&gt;</p>
     */
    inline const ResourceSet& GetResourceSet() const { return m_resourceSet; }
    inline bool ResourceSetHasBeenSet() const { return m_resourceSetHasBeenSet; }
    template<typename ResourceSetT = ResourceSet>
    void SetResourceSet(ResourceSetT&& value) { m_resourceSetHasBeenSet = true; m_resourceSet = std::forward<ResourceSetT>(value); }
    template<typename ResourceSetT = ResourceSet>
    PutResourceSetRequest& WithResourceSet(ResourceSetT&& value) { SetResourceSet(std::forward<ResourceSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the tags associated with the specified resource set. Tags are
     * key:value pairs that you can use to categorize and manage your resources, for
     * purposes like billing. For example, you might set the tag key to "customer" and
     * the value to the customer name or ID. You can specify one or more tags to add to
     * each Amazon Web Services resource, up to 50 tags for a resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    PutResourceSetRequest& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    PutResourceSetRequest& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
  private:

    ResourceSet m_resourceSet;
    bool m_resourceSetHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
