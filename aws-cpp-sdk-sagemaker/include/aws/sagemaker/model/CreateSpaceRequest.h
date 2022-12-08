/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SpaceSettings.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateSpaceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateSpaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSpace"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline CreateSpaceRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline CreateSpaceRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline CreateSpaceRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline CreateSpaceRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline CreateSpaceRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline CreateSpaceRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline CreateSpaceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline CreateSpaceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline CreateSpaceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to associated with the space. Each tag consists of a key and an optional
     * value. Tag keys must be unique for each resource. Tags are searchable using the
     * <code>Search</code> API.</p>
     */
    inline CreateSpaceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A collection of space settings.</p>
     */
    inline const SpaceSettings& GetSpaceSettings() const{ return m_spaceSettings; }

    /**
     * <p>A collection of space settings.</p>
     */
    inline bool SpaceSettingsHasBeenSet() const { return m_spaceSettingsHasBeenSet; }

    /**
     * <p>A collection of space settings.</p>
     */
    inline void SetSpaceSettings(const SpaceSettings& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = value; }

    /**
     * <p>A collection of space settings.</p>
     */
    inline void SetSpaceSettings(SpaceSettings&& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = std::move(value); }

    /**
     * <p>A collection of space settings.</p>
     */
    inline CreateSpaceRequest& WithSpaceSettings(const SpaceSettings& value) { SetSpaceSettings(value); return *this;}

    /**
     * <p>A collection of space settings.</p>
     */
    inline CreateSpaceRequest& WithSpaceSettings(SpaceSettings&& value) { SetSpaceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SpaceSettings m_spaceSettings;
    bool m_spaceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
