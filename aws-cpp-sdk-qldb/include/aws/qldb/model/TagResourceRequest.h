﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class AWS_QLDB_API TagResourceRequest : public QLDBRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tags. For
     * example:</p> <p>
     * <code>arn:aws:qldb:us-east-1:123456789012:ledger/exampleLedger</code> </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tags. For
     * example:</p> <p>
     * <code>arn:aws:qldb:us-east-1:123456789012:ledger/exampleLedger</code> </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tags. For
     * example:</p> <p>
     * <code>arn:aws:qldb:us-east-1:123456789012:ledger/exampleLedger</code> </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tags. For
     * example:</p> <p>
     * <code>arn:aws:qldb:us-east-1:123456789012:ledger/exampleLedger</code> </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tags. For
     * example:</p> <p>
     * <code>arn:aws:qldb:us-east-1:123456789012:ledger/exampleLedger</code> </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tags. For
     * example:</p> <p>
     * <code>arn:aws:qldb:us-east-1:123456789012:ledger/exampleLedger</code> </p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tags. For
     * example:</p> <p>
     * <code>arn:aws:qldb:us-east-1:123456789012:ledger/exampleLedger</code> </p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) to which you want to add the tags. For
     * example:</p> <p>
     * <code>arn:aws:qldb:us-east-1:123456789012:ledger/exampleLedger</code> </p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the specified QLDB resource. Tag keys
     * are case sensitive. If you specify a key that already exists for the resource,
     * your request fails and returns an error. Tag values are case sensitive and can
     * be null.</p>
     */
    inline TagResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
