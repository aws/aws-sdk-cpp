/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class CreateExtendedSourceServerRequest : public DrsRequest
  {
  public:
    AWS_DRS_API CreateExtendedSourceServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExtendedSourceServer"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline const Aws::String& GetSourceServerArn() const{ return m_sourceServerArn; }

    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline bool SourceServerArnHasBeenSet() const { return m_sourceServerArnHasBeenSet; }

    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline void SetSourceServerArn(const Aws::String& value) { m_sourceServerArnHasBeenSet = true; m_sourceServerArn = value; }

    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline void SetSourceServerArn(Aws::String&& value) { m_sourceServerArnHasBeenSet = true; m_sourceServerArn = std::move(value); }

    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline void SetSourceServerArn(const char* value) { m_sourceServerArnHasBeenSet = true; m_sourceServerArn.assign(value); }

    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& WithSourceServerArn(const Aws::String& value) { SetSourceServerArn(value); return *this;}

    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& WithSourceServerArn(Aws::String&& value) { SetSourceServerArn(std::move(value)); return *this;}

    /**
     * <p>This defines the ARN of the source server in staging Account based on which
     * you want to create an extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& WithSourceServerArn(const char* value) { SetSourceServerArn(value); return *this;}


    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the extended source server.</p>
     */
    inline CreateExtendedSourceServerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_sourceServerArn;
    bool m_sourceServerArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
