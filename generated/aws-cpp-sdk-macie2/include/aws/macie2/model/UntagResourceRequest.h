﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API UntagResourceRequest : public Macie2Request
  {
  public:
    UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the classification job, custom data
     * identifier, findings filter, or member account.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job, custom data
     * identifier, findings filter, or member account.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job, custom data
     * identifier, findings filter, or member account.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job, custom data
     * identifier, findings filter, or member account.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job, custom data
     * identifier, findings filter, or member account.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job, custom data
     * identifier, findings filter, or member account.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job, custom data
     * identifier, findings filter, or member account.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job, custom data
     * identifier, findings filter, or member account.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The key of the tag to remove from the resource. To remove multiple tags,
     * append the tagKeys parameter and argument for each additional tag to remove,
     * separated by an ampersand (&amp;).</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
