/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that contains information about a scene.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/SceneSummary">AWS
   * API Reference</a></p>
   */
  class SceneSummary
  {
  public:
    AWS_IOTTWINMAKER_API SceneSummary() = default;
    AWS_IOTTWINMAKER_API SceneSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SceneSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the scene.</p>
     */
    inline const Aws::String& GetSceneId() const { return m_sceneId; }
    inline bool SceneIdHasBeenSet() const { return m_sceneIdHasBeenSet; }
    template<typename SceneIdT = Aws::String>
    void SetSceneId(SceneIdT&& value) { m_sceneIdHasBeenSet = true; m_sceneId = std::forward<SceneIdT>(value); }
    template<typename SceneIdT = Aws::String>
    SceneSummary& WithSceneId(SceneIdT&& value) { SetSceneId(std::forward<SceneIdT>(value)); return *this;}
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
    SceneSummary& WithContentLocation(ContentLocationT&& value) { SetContentLocation(std::forward<ContentLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the scene.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SceneSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    SceneSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const { return m_updateDateTime; }
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    void SetUpdateDateTime(UpdateDateTimeT&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::forward<UpdateDateTimeT>(value); }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    SceneSummary& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scene description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SceneSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

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
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
