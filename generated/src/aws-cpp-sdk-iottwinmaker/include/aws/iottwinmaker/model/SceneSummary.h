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
    AWS_IOTTWINMAKER_API SceneSummary();
    AWS_IOTTWINMAKER_API SceneSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SceneSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the scene.</p>
     */
    inline const Aws::String& GetSceneId() const{ return m_sceneId; }

    /**
     * <p>The ID of the scene.</p>
     */
    inline bool SceneIdHasBeenSet() const { return m_sceneIdHasBeenSet; }

    /**
     * <p>The ID of the scene.</p>
     */
    inline void SetSceneId(const Aws::String& value) { m_sceneIdHasBeenSet = true; m_sceneId = value; }

    /**
     * <p>The ID of the scene.</p>
     */
    inline void SetSceneId(Aws::String&& value) { m_sceneIdHasBeenSet = true; m_sceneId = std::move(value); }

    /**
     * <p>The ID of the scene.</p>
     */
    inline void SetSceneId(const char* value) { m_sceneIdHasBeenSet = true; m_sceneId.assign(value); }

    /**
     * <p>The ID of the scene.</p>
     */
    inline SceneSummary& WithSceneId(const Aws::String& value) { SetSceneId(value); return *this;}

    /**
     * <p>The ID of the scene.</p>
     */
    inline SceneSummary& WithSceneId(Aws::String&& value) { SetSceneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the scene.</p>
     */
    inline SceneSummary& WithSceneId(const char* value) { SetSceneId(value); return *this;}


    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline const Aws::String& GetContentLocation() const{ return m_contentLocation; }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline bool ContentLocationHasBeenSet() const { return m_contentLocationHasBeenSet; }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline void SetContentLocation(const Aws::String& value) { m_contentLocationHasBeenSet = true; m_contentLocation = value; }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline void SetContentLocation(Aws::String&& value) { m_contentLocationHasBeenSet = true; m_contentLocation = std::move(value); }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline void SetContentLocation(const char* value) { m_contentLocationHasBeenSet = true; m_contentLocation.assign(value); }

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline SceneSummary& WithContentLocation(const Aws::String& value) { SetContentLocation(value); return *this;}

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline SceneSummary& WithContentLocation(Aws::String&& value) { SetContentLocation(std::move(value)); return *this;}

    /**
     * <p>The relative path that specifies the location of the content definition
     * file.</p>
     */
    inline SceneSummary& WithContentLocation(const char* value) { SetContentLocation(value); return *this;}


    /**
     * <p>The ARN of the scene.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the scene.</p>
     */
    inline SceneSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the scene.</p>
     */
    inline SceneSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scene.</p>
     */
    inline SceneSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline SceneSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time when the scene was created.</p>
     */
    inline SceneSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline SceneSummary& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The date and time when the scene was last updated.</p>
     */
    inline SceneSummary& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>The scene description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The scene description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The scene description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The scene description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The scene description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The scene description.</p>
     */
    inline SceneSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The scene description.</p>
     */
    inline SceneSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The scene description.</p>
     */
    inline SceneSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_sceneId;
    bool m_sceneIdHasBeenSet = false;

    Aws::String m_contentLocation;
    bool m_contentLocationHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
