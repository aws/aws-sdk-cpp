/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. Currently, the supported resources are <code>ConfigRule</code>,
     * <code>ConfigurationAggregator</code> and
     * <code>AggregatorAuthorization</code>.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>An array of tag object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tag object.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of tag object.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of tag object.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of tag object.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tag object.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tag object.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of tag object.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
