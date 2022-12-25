/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. </p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. </p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource for which to list
     * the tags. </p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs.</p>
     * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
     * number of tags per resource - 50.</p> </li> <li> <p>For each resource, each tag
     * key must be unique, and each tag key can have only one value.</p> </li> <li>
     * <p>Maximum key length - 128 Unicode characters in UTF-8.</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8.</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * keys as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has <code>aws</code> as its
     * prefix but the key does not, then Forecast considers it to be a user tag and
     * will count against the limit of 50 tags. Tags with only the key prefix of
     * <code>aws</code> do not count against your tags per resource limit.</p> </li>
     * </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs.</p>
     * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
     * number of tags per resource - 50.</p> </li> <li> <p>For each resource, each tag
     * key must be unique, and each tag key can have only one value.</p> </li> <li>
     * <p>Maximum key length - 128 Unicode characters in UTF-8.</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8.</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * keys as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has <code>aws</code> as its
     * prefix but the key does not, then Forecast considers it to be a user tag and
     * will count against the limit of 50 tags. Tags with only the key prefix of
     * <code>aws</code> do not count against your tags per resource limit.</p> </li>
     * </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs.</p>
     * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
     * number of tags per resource - 50.</p> </li> <li> <p>For each resource, each tag
     * key must be unique, and each tag key can have only one value.</p> </li> <li>
     * <p>Maximum key length - 128 Unicode characters in UTF-8.</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8.</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * keys as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has <code>aws</code> as its
     * prefix but the key does not, then Forecast considers it to be a user tag and
     * will count against the limit of 50 tags. Tags with only the key prefix of
     * <code>aws</code> do not count against your tags per resource limit.</p> </li>
     * </ul>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs.</p>
     * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
     * number of tags per resource - 50.</p> </li> <li> <p>For each resource, each tag
     * key must be unique, and each tag key can have only one value.</p> </li> <li>
     * <p>Maximum key length - 128 Unicode characters in UTF-8.</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8.</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * keys as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has <code>aws</code> as its
     * prefix but the key does not, then Forecast considers it to be a user tag and
     * will count against the limit of 50 tags. Tags with only the key prefix of
     * <code>aws</code> do not count against your tags per resource limit.</p> </li>
     * </ul>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs.</p>
     * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
     * number of tags per resource - 50.</p> </li> <li> <p>For each resource, each tag
     * key must be unique, and each tag key can have only one value.</p> </li> <li>
     * <p>Maximum key length - 128 Unicode characters in UTF-8.</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8.</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * keys as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has <code>aws</code> as its
     * prefix but the key does not, then Forecast considers it to be a user tag and
     * will count against the limit of 50 tags. Tags with only the key prefix of
     * <code>aws</code> do not count against your tags per resource limit.</p> </li>
     * </ul>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs.</p>
     * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
     * number of tags per resource - 50.</p> </li> <li> <p>For each resource, each tag
     * key must be unique, and each tag key can have only one value.</p> </li> <li>
     * <p>Maximum key length - 128 Unicode characters in UTF-8.</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8.</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * keys as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has <code>aws</code> as its
     * prefix but the key does not, then Forecast considers it to be a user tag and
     * will count against the limit of 50 tags. Tags with only the key prefix of
     * <code>aws</code> do not count against your tags per resource limit.</p> </li>
     * </ul>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs.</p>
     * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
     * number of tags per resource - 50.</p> </li> <li> <p>For each resource, each tag
     * key must be unique, and each tag key can have only one value.</p> </li> <li>
     * <p>Maximum key length - 128 Unicode characters in UTF-8.</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8.</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * keys as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has <code>aws</code> as its
     * prefix but the key does not, then Forecast considers it to be a user tag and
     * will count against the limit of 50 tags. Tags with only the key prefix of
     * <code>aws</code> do not count against your tags per resource limit.</p> </li>
     * </ul>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs.</p>
     * <p>The following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum
     * number of tags per resource - 50.</p> </li> <li> <p>For each resource, each tag
     * key must be unique, and each tag key can have only one value.</p> </li> <li>
     * <p>Maximum key length - 128 Unicode characters in UTF-8.</p> </li> <li>
     * <p>Maximum value length - 256 Unicode characters in UTF-8.</p> </li> <li> <p>If
     * your tagging schema is used across multiple services and resources, remember
     * that other services may have restrictions on allowed characters. Generally
     * allowed characters are: letters, numbers, and spaces representable in UTF-8, and
     * the following characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values
     * are case sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * keys as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has <code>aws</code> as its
     * prefix but the key does not, then Forecast considers it to be a user tag and
     * will count against the limit of 50 tags. Tags with only the key prefix of
     * <code>aws</code> do not count against your tags per resource limit.</p> </li>
     * </ul>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
