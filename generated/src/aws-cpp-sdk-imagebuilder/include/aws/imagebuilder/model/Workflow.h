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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/WorkflowParameterDetail.h>
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
   * <p>Defines a process that Image Builder uses to build and test images during the
   * image creation process.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Workflow">AWS
   * API Reference</a></p>
   */
  class Workflow
  {
  public:
    AWS_IMAGEBUILDER_API Workflow();
    AWS_IMAGEBUILDER_API Workflow(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Workflow& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Workflow& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline Workflow& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline Workflow& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the workflow resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the workflow resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the workflow resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the workflow resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the workflow resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the workflow resource.</p>
     */
    inline Workflow& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the workflow resource.</p>
     */
    inline Workflow& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow resource.</p>
     */
    inline Workflow& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The workflow resource version. Workflow resources are immutable. To make a
     * change, you can clone a workflow or create a new version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The workflow resource version. Workflow resources are immutable. To make a
     * change, you can clone a workflow or create a new version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The workflow resource version. Workflow resources are immutable. To make a
     * change, you can clone a workflow or create a new version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The workflow resource version. Workflow resources are immutable. To make a
     * change, you can clone a workflow or create a new version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The workflow resource version. Workflow resources are immutable. To make a
     * change, you can clone a workflow or create a new version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The workflow resource version. Workflow resources are immutable. To make a
     * change, you can clone a workflow or create a new version.</p>
     */
    inline Workflow& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The workflow resource version. Workflow resources are immutable. To make a
     * change, you can clone a workflow or create a new version.</p>
     */
    inline Workflow& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The workflow resource version. Workflow resources are immutable. To make a
     * change, you can clone a workflow or create a new version.</p>
     */
    inline Workflow& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the workflow.</p>
     */
    inline Workflow& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the workflow.</p>
     */
    inline Workflow& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the workflow.</p>
     */
    inline Workflow& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline const Aws::String& GetChangeDescription() const{ return m_changeDescription; }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline bool ChangeDescriptionHasBeenSet() const { return m_changeDescriptionHasBeenSet; }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline void SetChangeDescription(const Aws::String& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = value; }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline void SetChangeDescription(Aws::String&& value) { m_changeDescriptionHasBeenSet = true; m_changeDescription = std::move(value); }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline void SetChangeDescription(const char* value) { m_changeDescriptionHasBeenSet = true; m_changeDescription.assign(value); }

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline Workflow& WithChangeDescription(const Aws::String& value) { SetChangeDescription(value); return *this;}

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline Workflow& WithChangeDescription(Aws::String&& value) { SetChangeDescription(std::move(value)); return *this;}

    /**
     * <p>Describes what change has been made in this version of the workflow, or what
     * makes this version different from other versions of the workflow.</p>
     */
    inline Workflow& WithChangeDescription(const char* value) { SetChangeDescription(value); return *this;}


    /**
     * <p>Specifies the image creation stage that the workflow applies to. Image
     * Builder currently supports build and test workflows.</p>
     */
    inline const WorkflowType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the image creation stage that the workflow applies to. Image
     * Builder currently supports build and test workflows.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the image creation stage that the workflow applies to. Image
     * Builder currently supports build and test workflows.</p>
     */
    inline void SetType(const WorkflowType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the image creation stage that the workflow applies to. Image
     * Builder currently supports build and test workflows.</p>
     */
    inline void SetType(WorkflowType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the image creation stage that the workflow applies to. Image
     * Builder currently supports build and test workflows.</p>
     */
    inline Workflow& WithType(const WorkflowType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the image creation stage that the workflow applies to. Image
     * Builder currently supports build and test workflows.</p>
     */
    inline Workflow& WithType(WorkflowType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Describes the current status of the workflow and the reason for that
     * status.</p>
     */
    inline const WorkflowState& GetState() const{ return m_state; }

    /**
     * <p>Describes the current status of the workflow and the reason for that
     * status.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Describes the current status of the workflow and the reason for that
     * status.</p>
     */
    inline void SetState(const WorkflowState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Describes the current status of the workflow and the reason for that
     * status.</p>
     */
    inline void SetState(WorkflowState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Describes the current status of the workflow and the reason for that
     * status.</p>
     */
    inline Workflow& WithState(const WorkflowState& value) { SetState(value); return *this;}

    /**
     * <p>Describes the current status of the workflow and the reason for that
     * status.</p>
     */
    inline Workflow& WithState(WorkflowState&& value) { SetState(std::move(value)); return *this;}


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
    inline Workflow& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline Workflow& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the workflow resource.</p>
     */
    inline Workflow& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>Contains the YAML document content for the workflow.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>Contains the YAML document content for the workflow.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>Contains the YAML document content for the workflow.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>Contains the YAML document content for the workflow.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>Contains the YAML document content for the workflow.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>Contains the YAML document content for the workflow.</p>
     */
    inline Workflow& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>Contains the YAML document content for the workflow.</p>
     */
    inline Workflow& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>Contains the YAML document content for the workflow.</p>
     */
    inline Workflow& WithData(const char* value) { SetData(value); return *this;}


    /**
     * <p>The KMS key identifier used to encrypt the workflow resource.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier used to encrypt the workflow resource.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key identifier used to encrypt the workflow resource.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier used to encrypt the workflow resource.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier used to encrypt the workflow resource.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier used to encrypt the workflow resource.</p>
     */
    inline Workflow& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier used to encrypt the workflow resource.</p>
     */
    inline Workflow& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier used to encrypt the workflow resource.</p>
     */
    inline Workflow& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The timestamp when Image Builder created the workflow resource.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The timestamp when Image Builder created the workflow resource.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The timestamp when Image Builder created the workflow resource.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The timestamp when Image Builder created the workflow resource.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The timestamp when Image Builder created the workflow resource.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The timestamp when Image Builder created the workflow resource.</p>
     */
    inline Workflow& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The timestamp when Image Builder created the workflow resource.</p>
     */
    inline Workflow& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The timestamp when Image Builder created the workflow resource.</p>
     */
    inline Workflow& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags that apply to the workflow resource</p>
     */
    inline Workflow& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>An array of input parameters that that the image workflow uses to control
     * actions or configure settings.</p>
     */
    inline const Aws::Vector<WorkflowParameterDetail>& GetParameters() const{ return m_parameters; }

    /**
     * <p>An array of input parameters that that the image workflow uses to control
     * actions or configure settings.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>An array of input parameters that that the image workflow uses to control
     * actions or configure settings.</p>
     */
    inline void SetParameters(const Aws::Vector<WorkflowParameterDetail>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>An array of input parameters that that the image workflow uses to control
     * actions or configure settings.</p>
     */
    inline void SetParameters(Aws::Vector<WorkflowParameterDetail>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>An array of input parameters that that the image workflow uses to control
     * actions or configure settings.</p>
     */
    inline Workflow& WithParameters(const Aws::Vector<WorkflowParameterDetail>& value) { SetParameters(value); return *this;}

    /**
     * <p>An array of input parameters that that the image workflow uses to control
     * actions or configure settings.</p>
     */
    inline Workflow& WithParameters(Aws::Vector<WorkflowParameterDetail>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>An array of input parameters that that the image workflow uses to control
     * actions or configure settings.</p>
     */
    inline Workflow& AddParameters(const WorkflowParameterDetail& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>An array of input parameters that that the image workflow uses to control
     * actions or configure settings.</p>
     */
    inline Workflow& AddParameters(WorkflowParameterDetail&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

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

    WorkflowState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<WorkflowParameterDetail> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
