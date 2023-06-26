/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateAppInstanceRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateAppInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppInstance"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The metadata of the <code>AppInstance</code>. Limited to a 1KB string in
     * UTF-8.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the <code>AppInstance</code>. Limited to a 1KB string in
     * UTF-8.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The metadata of the <code>AppInstance</code>. Limited to a 1KB string in
     * UTF-8.</p>
     */
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The metadata of the <code>AppInstance</code>. Limited to a 1KB string in
     * UTF-8.</p>
     */
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The metadata of the <code>AppInstance</code>. Limited to a 1KB string in
     * UTF-8.</p>
     */
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }

    /**
     * <p>The metadata of the <code>AppInstance</code>. Limited to a 1KB string in
     * UTF-8.</p>
     */
    inline CreateAppInstanceRequest& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the <code>AppInstance</code>. Limited to a 1KB string in
     * UTF-8.</p>
     */
    inline CreateAppInstanceRequest& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The metadata of the <code>AppInstance</code>. Limited to a 1KB string in
     * UTF-8.</p>
     */
    inline CreateAppInstanceRequest& WithMetadata(const char* value) { SetMetadata(value); return *this;}


    /**
     * <p>The <code>ClientRequestToken</code> of the <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>The <code>ClientRequestToken</code> of the <code>AppInstance</code>.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>The <code>ClientRequestToken</code> of the <code>AppInstance</code>.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>The <code>ClientRequestToken</code> of the <code>AppInstance</code>.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>The <code>ClientRequestToken</code> of the <code>AppInstance</code>.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>The <code>ClientRequestToken</code> of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>The <code>ClientRequestToken</code> of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ClientRequestToken</code> of the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Tags assigned to the <code>AppInstance</code>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to the <code>AppInstance</code>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to the <code>AppInstance</code>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to the <code>AppInstance</code>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags assigned to the <code>AppInstance</code>.</p>
     */
    inline CreateAppInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
