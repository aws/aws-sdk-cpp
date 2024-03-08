/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/WorkflowType.h>
#include <aws/imagebuilder/model/WorkflowState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains metadata about the workflow resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/WorkflowSummary">AWS
   * API Reference</a></p>
   */
  class WorkflowSummary
  {
  public:
    AWS_IMAGEBUILDER_API WorkflowSummary();
    AWS_IMAGEBUILDER_API WorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline WorkflowSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline WorkflowSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline WorkflowSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the workflow.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the workflow.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the workflow.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the workflow.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the workflow.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the workflow.</p>
     */
    inline WorkflowSummary& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the workflow.</p>
     */
    inline WorkflowSummary& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the workflow.</p>
     */
    inline WorkflowSummary& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Describes the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Describes the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Describes the workflow.</p>
     */
    inline WorkflowSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Describes the workflow.</p>
     */
    inline WorkflowSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Describes the workflow.</p>
     */
    inline WorkflowSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The change description for the current version of the workflow resource.</p>
     */
    inline const Aws::String& GetChangeDescription() const{ return m_changeDescription; }

    /**
     * <p>The change description for the current version of the workflow resource.</p>
     */
    inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }

    /**
     * <p>The change description for the current version of the workflow resource.</p>
     */
    inline void SetChangeDescription(const Aws::String& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = value; }

    /**
     * <p>The change description for the current version of the workflow resource.</p>
     */
    inline void SetChangeDescription(Aws::String&& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = std::move(value); }

    /**
     * <p>The change description for the current version of the workflow resource.</p>
     */
    inline void SetChangeDescription(const char* value) { m_changeDescriptionHasBeenSet = true; m_changeDescription.assign(value); }

    /**
     * <p>The change description for the current version of the workflow resource.</p>
     */
    inline WorkflowSummary& WithChangeDescription(const Aws::String& value) { SetChangeDescription(value); return *this;}

    /**
     * <p>The change description for the current version of the workflow resource.</p>
     */
    inline WorkflowSummary& WithChangeDescription(Aws::String&& value) { SetChangeDescription(std::move(value)); return *this;}

    /**
     * <p>The change description for the current version of the workflow resource.</p>
     */
    inline WorkflowSummary& WithChangeDescription(const char* value) { SetChangeDescription(value); return *this;}


    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline void SetType(const WorkflowType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline void SetType(WorkflowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline WorkflowSummary& WithType(const WorkflowType& value) { SetType(value); return *this;}

    /**
     * <p>The image creation stage that this workflow applies to. Image Builder
     * currently supports build and test stage workflows.</p>
     */
    inline WorkflowSummary& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline WorkflowSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline WorkflowSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline WorkflowSummary& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>Describes the current state of the workflow resource.</p>
     */
    inline const WorkflowState& GetState() const{ return m_state; }

    /**
     * <p>Describes the current state of the workflow resource.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Describes the current state of the workflow resource.</p>
     */
    inline void SetState(const WorkflowState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Describes the current state of the workflow resource.</p>
     */
    inline void SetState(WorkflowState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Describes the current state of the workflow resource.</p>
     */
    inline WorkflowSummary& WithState(const WorkflowState& value) { SetState(value); return *this;}

    /**
     * <p>Describes the current state of the workflow resource.</p>
     */
    inline WorkflowSummary& WithState(WorkflowState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The original creation date of the workflow resource.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The original creation date of the workflow resource.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The original creation date of the workflow resource.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The original creation date of the workflow resource.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The original creation date of the workflow resource.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The original creation date of the workflow resource.</p>
     */
    inline WorkflowSummary& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The original creation date of the workflow resource.</p>
     */
    inline WorkflowSummary& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The original creation date of the workflow resource.</p>
     */
    inline WorkflowSummary& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Contains a list of tags that are defined for the workflow.</p>
     */
    inline WorkflowSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_changeDescription;
    bool m_changeDescriptionHasBeenSet = false;

    WorkflowType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    WorkflowState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
