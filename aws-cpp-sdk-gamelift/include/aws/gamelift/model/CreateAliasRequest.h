/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/RoutingStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateAliasInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateAliasRequest : public GameLiftRequest
  {
  public:
    CreateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlias"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline CreateAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline CreateAliasRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with an alias. Alias names do not need
     * to be unique.</p>
     */
    inline CreateAliasRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline CreateAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline CreateAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A human-readable description of the alias.</p>
     */
    inline CreateAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline const RoutingStrategy& GetRoutingStrategy() const{ return m_routingStrategy; }

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline bool RoutingStrategyHasBeenSet() const { return m_routingStrategyHasBeenSet; }

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline void SetRoutingStrategy(const RoutingStrategy& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = value; }

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline void SetRoutingStrategy(RoutingStrategy&& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = std::move(value); }

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline CreateAliasRequest& WithRoutingStrategy(const RoutingStrategy& value) { SetRoutingStrategy(value); return *this;}

    /**
     * <p>The routing configuration, including routing type and fleet target, for the
     * alias. </p>
     */
    inline CreateAliasRequest& WithRoutingStrategy(RoutingStrategy&& value) { SetRoutingStrategy(std::move(value)); return *this;}


    /**
     * <p>A list of labels to assign to the new alias resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of labels to assign to the new alias resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of labels to assign to the new alias resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of labels to assign to the new alias resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of labels to assign to the new alias resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateAliasRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of labels to assign to the new alias resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateAliasRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of labels to assign to the new alias resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateAliasRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of labels to assign to the new alias resource. Tags are
     * developer-defined key-value pairs. Tagging AWS resources are useful for resource
     * management, access management and cost allocation. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html"> Tagging
     * AWS Resources</a> in the <i>AWS General Reference</i>. Once the resource is
     * created, you can use <a>TagResource</a>, <a>UntagResource</a>, and
     * <a>ListTagsForResource</a> to add, remove, and view tags. The maximum tag limit
     * may be lower than stated. See the AWS General Reference for actual tagging
     * limits.</p>
     */
    inline CreateAliasRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    RoutingStrategy m_routingStrategy;
    bool m_routingStrategyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
