/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public ApplicationInsightsRequest
  {
  public:
    AWS_APPLICATIONINSIGHTS_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_APPLICATIONINSIGHTS_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONINSIGHTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to remove one
     * or more tags from.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to remove one
     * or more tags from.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to remove one
     * or more tags from.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to remove one
     * or more tags from.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to remove one
     * or more tags from.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to remove one
     * or more tags from.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to remove one
     * or more tags from.</p>
     */
    inline UntagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application that you want to remove one
     * or more tags from.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The tags (tag keys) that you want to remove from the resource. When you
     * specify a tag key, the action removes both that key and its associated tag
     * value.</p> <p>To remove more than one tag from the application, append the
     * <code>TagKeys</code> parameter and argument for each additional tag to remove,
     * separated by an ampersand. </p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
