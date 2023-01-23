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
    AWS_CODEDEPLOY_API RemoveTagsFromOnPremisesInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTagsFromOnPremisesInstances"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag key-value pairs to remove from the on-premises instances.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }

    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }

    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::move(value); }

    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(std::move(value)); return *this;}

    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the on-premises instances from which to remove tags.</p>
     */
    inline RemoveTagsFromOnPremisesInstancesRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

  private:

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
