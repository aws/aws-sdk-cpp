﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/backup/model/FrameworkControl.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class AWS_BACKUP_API CreateFrameworkRequest : public BackupRequest
  {
  public:
    CreateFrameworkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFramework"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline const Aws::String& GetFrameworkName() const{ return m_frameworkName; }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline bool FrameworkNameHasBeenSet() const { return m_frameworkNameHasBeenSet; }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetFrameworkName(const Aws::String& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = value; }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetFrameworkName(Aws::String&& value) { m_frameworkNameHasBeenSet = true; m_frameworkName = std::move(value); }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline void SetFrameworkName(const char* value) { m_frameworkNameHasBeenSet = true; m_frameworkName.assign(value); }

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateFrameworkRequest& WithFrameworkName(const Aws::String& value) { SetFrameworkName(value); return *this;}

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateFrameworkRequest& WithFrameworkName(Aws::String&& value) { SetFrameworkName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the framework. The name must be between 1 and 256
     * characters, starting with a letter, and consisting of letters (a-z, A-Z),
     * numbers (0-9), and underscores (_).</p>
     */
    inline CreateFrameworkRequest& WithFrameworkName(const char* value) { SetFrameworkName(value); return *this;}


    /**
     * <p>An optional description of the framework with a maximum of 1,024
     * characters.</p>
     */
    inline const Aws::String& GetFrameworkDescription() const{ return m_frameworkDescription; }

    /**
     * <p>An optional description of the framework with a maximum of 1,024
     * characters.</p>
     */
    inline bool FrameworkDescriptionHasBeenSet() const { return m_frameworkDescriptionHasBeenSet; }

    /**
     * <p>An optional description of the framework with a maximum of 1,024
     * characters.</p>
     */
    inline void SetFrameworkDescription(const Aws::String& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = value; }

    /**
     * <p>An optional description of the framework with a maximum of 1,024
     * characters.</p>
     */
    inline void SetFrameworkDescription(Aws::String&& value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription = std::move(value); }

    /**
     * <p>An optional description of the framework with a maximum of 1,024
     * characters.</p>
     */
    inline void SetFrameworkDescription(const char* value) { m_frameworkDescriptionHasBeenSet = true; m_frameworkDescription.assign(value); }

    /**
     * <p>An optional description of the framework with a maximum of 1,024
     * characters.</p>
     */
    inline CreateFrameworkRequest& WithFrameworkDescription(const Aws::String& value) { SetFrameworkDescription(value); return *this;}

    /**
     * <p>An optional description of the framework with a maximum of 1,024
     * characters.</p>
     */
    inline CreateFrameworkRequest& WithFrameworkDescription(Aws::String&& value) { SetFrameworkDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the framework with a maximum of 1,024
     * characters.</p>
     */
    inline CreateFrameworkRequest& WithFrameworkDescription(const char* value) { SetFrameworkDescription(value); return *this;}


    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline const Aws::Vector<FrameworkControl>& GetFrameworkControls() const{ return m_frameworkControls; }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline bool FrameworkControlsHasBeenSet() const { return m_frameworkControlsHasBeenSet; }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline void SetFrameworkControls(const Aws::Vector<FrameworkControl>& value) { m_frameworkControlsHasBeenSet = true; m_frameworkControls = value; }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline void SetFrameworkControls(Aws::Vector<FrameworkControl>&& value) { m_frameworkControlsHasBeenSet = true; m_frameworkControls = std::move(value); }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline CreateFrameworkRequest& WithFrameworkControls(const Aws::Vector<FrameworkControl>& value) { SetFrameworkControls(value); return *this;}

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline CreateFrameworkRequest& WithFrameworkControls(Aws::Vector<FrameworkControl>&& value) { SetFrameworkControls(std::move(value)); return *this;}

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkControls(const FrameworkControl& value) { m_frameworkControlsHasBeenSet = true; m_frameworkControls.push_back(value); return *this; }

    /**
     * <p>A list of the controls that make up the framework. Each control in the list
     * has a name, input parameters, and scope.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkControls(FrameworkControl&& value) { m_frameworkControlsHasBeenSet = true; m_frameworkControls.push_back(std::move(value)); return *this; }


    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline CreateFrameworkRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline CreateFrameworkRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>CreateFrameworkInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline CreateFrameworkRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFrameworkTags() const{ return m_frameworkTags; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline bool FrameworkTagsHasBeenSet() const { return m_frameworkTagsHasBeenSet; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline void SetFrameworkTags(const Aws::Map<Aws::String, Aws::String>& value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags = value; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline void SetFrameworkTags(Aws::Map<Aws::String, Aws::String>&& value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags = std::move(value); }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& WithFrameworkTags(const Aws::Map<Aws::String, Aws::String>& value) { SetFrameworkTags(value); return *this;}

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& WithFrameworkTags(Aws::Map<Aws::String, Aws::String>&& value) { SetFrameworkTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkTags(const Aws::String& key, const Aws::String& value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags.emplace(key, value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkTags(Aws::String&& key, const Aws::String& value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkTags(const Aws::String& key, Aws::String&& value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkTags(Aws::String&& key, Aws::String&& value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkTags(const char* key, Aws::String&& value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkTags(Aws::String&& key, const char* value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the frameworks that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateFrameworkRequest& AddFrameworkTags(const char* key, const char* value) { m_frameworkTagsHasBeenSet = true; m_frameworkTags.emplace(key, value); return *this; }

  private:

    Aws::String m_frameworkName;
    bool m_frameworkNameHasBeenSet;

    Aws::String m_frameworkDescription;
    bool m_frameworkDescriptionHasBeenSet;

    Aws::Vector<FrameworkControl> m_frameworkControls;
    bool m_frameworkControlsHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_frameworkTags;
    bool m_frameworkTagsHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
