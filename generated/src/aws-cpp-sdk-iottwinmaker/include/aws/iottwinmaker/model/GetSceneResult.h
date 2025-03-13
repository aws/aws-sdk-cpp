/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/SceneError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{
  class GetSceneResult
  {
  public:
    AWS_IOTTWINMAKER_API GetSceneResult() = default;
    AWS_IOTTWINMAKER_API GetSceneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTTWINMAKER_API GetSceneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the workspace that contains the scene.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    GetSceneResult& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the scene.</p>
     */
    inline const Aws::String& GetSceneId() const { return m_sceneId; }
    template<typename SceneIdT = Aws::String>
    void SetSceneId(SceneIdT&& value) { m_sceneIdHasBeenSet = true; m_sceneId = std::forward<SceneIdT>(value); }
    template<typename SceneIdT = Aws::String>
    GetSceneResult& WithSceneId(SceneIdT&& value) { SetSceneId(std::forward<SceneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline const Aws::String& GetContentLocation() const { return m_contentLocation; }
    template<typename ContentLocationT = Aws::String>
    void SetContentLocation(ContentLocationT&& value) { m_contentLocationHasBeenSet = true; m_contentLocation = std::forward<ContentLocationT>(value); }
    template<typename ContentLocationT = Aws::String>
    GetSceneResult& WithContentLocation(ContentLocationT&& value) { SetContentLocation(std::forward<ContentLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the scene.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSceneResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    GetSceneResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const { return m_updateDateTime; }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    void SetUpdateDateTime(UpdateDateTimeT&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::forward<UpdateDateTimeT>(value); }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    GetSceneResult& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the scene.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSceneResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of capabilities that the scene uses to render.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilities() const { return m_capabilities; }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = Aws::Vector<Aws::String>>
    GetSceneResult& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    template<typename CapabilitiesT = Aws::String>
    GetSceneResult& AddCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.emplace_back(std::forward<CapabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The response metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSceneMetadata() const { return m_sceneMetadata; }
    template<typename SceneMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetSceneMetadata(SceneMetadataT&& value) { m_sceneMetadataHasBeenSet = true; m_sceneMetadata = std::forward<SceneMetadataT>(value); }
    template<typename SceneMetadataT = Aws::Map<Aws::String, Aws::String>>
    GetSceneResult& WithSceneMetadata(SceneMetadataT&& value) { SetSceneMetadata(std::forward<SceneMetadataT>(value)); return *this;}
    template<typename SceneMetadataKeyT = Aws::String, typename SceneMetadataValueT = Aws::String>
    GetSceneResult& AddSceneMetadata(SceneMetadataKeyT&& key, SceneMetadataValueT&& value) {
      m_sceneMetadataHasBeenSet = true; m_sceneMetadata.emplace(std::forward<SceneMetadataKeyT>(key), std::forward<SceneMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The generated scene metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGeneratedSceneMetadata() const { return m_generatedSceneMetadata; }
    template<typename GeneratedSceneMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetGeneratedSceneMetadata(GeneratedSceneMetadataT&& value) { m_generatedSceneMetadataHasBeenSet = true; m_generatedSceneMetadata = std::forward<GeneratedSceneMetadataT>(value); }
    template<typename GeneratedSceneMetadataT = Aws::Map<Aws::String, Aws::String>>
    GetSceneResult& WithGeneratedSceneMetadata(GeneratedSceneMetadataT&& value) { SetGeneratedSceneMetadata(std::forward<GeneratedSceneMetadataT>(value)); return *this;}
    template<typename GeneratedSceneMetadataKeyT = Aws::String, typename GeneratedSceneMetadataValueT = Aws::String>
    GetSceneResult& AddGeneratedSceneMetadata(GeneratedSceneMetadataKeyT&& key, GeneratedSceneMetadataValueT&& value) {
      m_generatedSceneMetadataHasBeenSet = true; m_generatedSceneMetadata.emplace(std::forward<GeneratedSceneMetadataKeyT>(key), std::forward<GeneratedSceneMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The SceneResponse error.</p>
     */
    inline const SceneError& GetError() const { return m_error; }
    template<typename ErrorT = SceneError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = SceneError>
    GetSceneResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSceneResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_sceneId;
    bool m_sceneIdHasBeenSet = false;

    Aws::String m_contentLocation;
    bool m_contentLocationHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime{};
    bool m_updateDateTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sceneMetadata;
    bool m_sceneMetadataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_generatedSceneMetadata;
    bool m_generatedSceneMetadataHasBeenSet = false;

    SceneError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
