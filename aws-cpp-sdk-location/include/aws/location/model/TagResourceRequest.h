/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags you want to
     * update.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:resourcetype/ExampleResource</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags you want to
     * update.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:resourcetype/ExampleResource</code> </p>
     * </li> </ul>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags you want to
     * update.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:resourcetype/ExampleResource</code> </p>
     * </li> </ul>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags you want to
     * update.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:resourcetype/ExampleResource</code> </p>
     * </li> </ul>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags you want to
     * update.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:resourcetype/ExampleResource</code> </p>
     * </li> </ul>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags you want to
     * update.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:resourcetype/ExampleResource</code> </p>
     * </li> </ul>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags you want to
     * update.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:resourcetype/ExampleResource</code> </p>
     * </li> </ul>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource whose tags you want to
     * update.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:resourcetype/ExampleResource</code> </p>
     * </li> </ul>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Applies one or more tags to specific resource. A tag is a key-value pair that
     * helps you manage, identify, search, and filter your resources.</p> <p>Format:
     * <code>"key" : "value"</code> </p> <p>Restrictions:</p> <ul> <li> <p>Maximum 50
     * tags per resource.</p> </li> <li> <p>Each tag key must be unique and must have
     * exactly one associated value.</p> </li> <li> <p>Maximum key length: 128 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode
     * characters in UTF-8.</p> </li> <li> <p>Can use alphanumeric characters (A–Z,
     * a–z, 0–9), and the following characters: + - = . _ : / @</p> </li> <li>
     * <p>Cannot use "aws:" as a prefix for a key.</p> </li> </ul>
     */
    inline TagResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
