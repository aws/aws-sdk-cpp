/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class CreateSceneRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API CreateSceneRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScene"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    CreateSceneRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scene.</p>
     */
    inline const Aws::String& GetSceneId() const { return m_sceneId; }
    inline bool SceneIdHasBeenSet() const { return m_sceneIdHasBeenSet; }
    template<typename SceneIdT = Aws::String>
    void SetSceneId(SceneIdT&& value) { m_sceneIdHasBeenSet = true; m_sceneId = std::forward<SceneIdT>(value); }
    template<typename SceneIdT = Aws::String>
    CreateSceneRequest& WithSceneId(SceneIdT&& value) { SetSceneId(std::forward<SceneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline const Aws::String& GetContentLocation() const { return m_contentLocation; }
    inline bool ContentLocationHasBeenSet() const { return m_contentLocationHasBeenSet; }
    template<typename ContentLocationT = Aws::String>
    void SetContentLocation(ContentLocationT&& value) { m_contentLocationHasBeenSet = true; m_contentLocation = std::forward<ContentLocationT>(value); }
    template<typename ContentLocationT = Aws::String>
    CreateSceneRequest& WithContentLocation(ContentLocationT&& value) { SetContentLocation(std::forward<ContentLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for this scene.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSceneRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of capabilities that the scene uses to render itself.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    CreateSceneRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    template<typename CapabilitiesT = Aws::String>
    CreateSceneRequest& AddCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.emplace_back(std::forward<CapabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that you can use to manage the scene.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSceneRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSceneRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The request metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSceneMetadata() const { return m_sceneMetadata; }
    inline bool SceneMetadataHasBeenSet() const { return m_sceneMetadataHasBeenSet; }
    template<typename SceneMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetSceneMetadata(SceneMetadataT&& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata = std::forward<SceneMetadataT>(value); }
    template<typename SceneMetadataT = Aws::Map<Aws::String, Aws::String>>
    CreateSceneRequest& WithSceneMetadata(SceneMetadataT&& value) { SetSceneMetadata(std::forward<SceneMetadataT>(value)); return *this;}
    template<typename SceneMetadataKeyT = Aws::String, typename SceneMetadataValueT = Aws::String>
    CreateSceneRequest& AddSceneMetadata(SceneMetadataKeyT&& key, SceneMetadataValueT&& value) {
      m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(std::forward<SceneMetadataKeyT>(key), std::forward<SceneMetadataValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_sceneId;
    bool m_sceneIdHasBeenSet = false;

    Aws::String m_contentLocation;
    bool m_contentLocationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sceneMetadata;
    bool m_sceneMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
