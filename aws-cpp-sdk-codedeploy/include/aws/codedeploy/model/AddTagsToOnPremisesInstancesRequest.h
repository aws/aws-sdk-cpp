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
   * <p>Represents the input of, and adds tags to, an on-premises instance
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/AddTagsToOnPremisesInstancesInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API AddTagsToOnPremisesInstancesRequest : public CodeDeployRequest
  {
  public:
    AddTagsToOnPremisesInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddTagsToOnPremisesInstances"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The tag key-value pairs to add to the on-premises instances.</p> <p>Keys and
     * values are both required. Keys cannot be null or empty strings. Value-only tags
     * are not allowed.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag key-value pairs to add to the on-premises instances.</p> <p>Keys and
     * values are both required. Keys cannot be null or empty strings. Value-only tags
     * are not allowed.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag key-value pairs to add to the on-premises instances.</p> <p>Keys and
     * values are both required. Keys cannot be null or empty strings. Value-only tags
     * are not allowed.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag key-value pairs to add to the on-premises instances.</p> <p>Keys and
     * values are both required. Keys cannot be null or empty strings. Value-only tags
     * are not allowed.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag key-value pairs to add to the on-premises instances.</p> <p>Keys and
     * values are both required. Keys cannot be null or empty strings. Value-only tags
     * are not allowed.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag key-value pairs to add to the on-premises instances.</p> <p>Keys and
     * values are both required. Keys cannot be null or empty strings. Value-only tags
     * are not allowed.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag key-value pairs to add to the on-premises instances.</p> <p>Keys and
     * values are both required. Keys cannot be null or empty strings. Value-only tags
     * are not allowed.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag key-value pairs to add to the on-premises instances.</p> <p>Keys and
     * values are both required. Keys cannot be null or empty strings. Value-only tags
     * are not allowed.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }

    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }

    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }

    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::move(value); }

    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}

    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(std::move(value)); return *this;}

    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the on-premises instances to which to add tags.</p>
     */
    inline AddTagsToOnPremisesInstancesRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }

  private:

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
