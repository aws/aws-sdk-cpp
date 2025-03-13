/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>RemoveTagsFromOnPremisesInstances</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/RemoveTagsFromOnPremisesInstancesInput">AWS
   * API Reference</a></p>
   */
  class RemoveTagsFromOnPremisesInstancesRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API RemoveTagsFromOnPremisesInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTagsFromOnPremisesInstances"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RemoveTagsFromOnPremisesInstancesRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RemoveTagsFromOnPremisesInstancesRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const { return m_instanceNames; }
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }
    template<typename InstanceNamesT = Aws::Vector<Aws::String>>
    void SetInstanceNames(InstanceNamesT&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::forward<InstanceNamesT>(value); }
    template<typename InstanceNamesT = Aws::Vector<Aws::String>>
    RemoveTagsFromOnPremisesInstancesRequest& WithInstanceNames(InstanceNamesT&& value) { SetInstanceNames(std::forward<InstanceNamesT>(value)); return *this;}
    template<typename InstanceNamesT = Aws::String>
    RemoveTagsFromOnPremisesInstancesRequest& AddInstanceNames(InstanceNamesT&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.emplace_back(std::forward<InstanceNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
