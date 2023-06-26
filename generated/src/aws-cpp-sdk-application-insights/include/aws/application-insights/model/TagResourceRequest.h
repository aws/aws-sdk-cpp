/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-insights/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to add one or
     * more tags to.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to add one or
     * more tags to.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to add one or
     * more tags to.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to add one or
     * more tags to.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to add one or
     * more tags to.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to add one or
     * more tags to.</p>
     */
    inline TagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to add one or
     * more tags to.</p>
     */
    inline TagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to add one or
     * more tags to.</p>
     */
    inline TagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>A list of tags that to add to the application. A tag consists of a required
     * tag key (<code>Key</code>) and an associated tag value (<code>Value</code>). The
     * maximum length of a tag key is 128 characters. The maximum length of a tag value
     * is 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags that to add to the application. A tag consists of a required
     * tag key (<code>Key</code>) and an associated tag value (<code>Value</code>). The
     * maximum length of a tag key is 128 characters. The maximum length of a tag value
     * is 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags that to add to the application. A tag consists of a required
     * tag key (<code>Key</code>) and an associated tag value (<code>Value</code>). The
     * maximum length of a tag key is 128 characters. The maximum length of a tag value
     * is 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags that to add to the application. A tag consists of a required
     * tag key (<code>Key</code>) and an associated tag value (<code>Value</code>). The
     * maximum length of a tag key is 128 characters. The maximum length of a tag value
     * is 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags that to add to the application. A tag consists of a required
     * tag key (<code>Key</code>) and an associated tag value (<code>Value</code>). The
     * maximum length of a tag key is 128 characters. The maximum length of a tag value
     * is 256 characters.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags that to add to the application. A tag consists of a required
     * tag key (<code>Key</code>) and an associated tag value (<code>Value</code>). The
     * maximum length of a tag key is 128 characters. The maximum length of a tag value
     * is 256 characters.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags that to add to the application. A tag consists of a required
     * tag key (<code>Key</code>) and an associated tag value (<code>Value</code>). The
     * maximum length of a tag key is 128 characters. The maximum length of a tag value
     * is 256 characters.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags that to add to the application. A tag consists of a required
     * tag key (<code>Key</code>) and an associated tag value (<code>Value</code>). The
     * maximum length of a tag key is 128 characters. The maximum length of a tag value
     * is 256 characters.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
