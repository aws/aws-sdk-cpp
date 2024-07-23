/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/IdNamespaceAssociationInputReferenceConfig.h>
#include <aws/cleanrooms/model/IdNamespaceAssociationInputReferencePropertiesSummary.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Provides summary information about the collaboration ID namespace
   * association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationIdNamespaceAssociationSummary">AWS
   * API Reference</a></p>
   */
  class CollaborationIdNamespaceAssociationSummary
  {
  public:
    AWS_CLEANROOMS_API CollaborationIdNamespaceAssociationSummary();
    AWS_CLEANROOMS_API CollaborationIdNamespaceAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationIdNamespaceAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration ID namespace
     * association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the collaboration ID namespace association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the collaboration ID namespace association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the collaboration ID namespace association was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * collaboration ID namespace association.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the collaboration that contains this collaboration
     * ID namespace association.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that created this collaboration ID namespace
     * association.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = value; }
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::move(value); }
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId.assign(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input reference configuration that's used to create the collaboration ID
     * namespace association.</p>
     */
    inline const IdNamespaceAssociationInputReferenceConfig& GetInputReferenceConfig() const{ return m_inputReferenceConfig; }
    inline bool InputReferenceConfigHasBeenSet() const { return m_inputReferenceConfigHasBeenSet; }
    inline void SetInputReferenceConfig(const IdNamespaceAssociationInputReferenceConfig& value) { m_inputReferenceConfigHasBeenSet = true; m_inputReferenceConfig = value; }
    inline void SetInputReferenceConfig(IdNamespaceAssociationInputReferenceConfig&& value) { m_inputReferenceConfigHasBeenSet = true; m_inputReferenceConfig = std::move(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithInputReferenceConfig(const IdNamespaceAssociationInputReferenceConfig& value) { SetInputReferenceConfig(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithInputReferenceConfig(IdNamespaceAssociationInputReferenceConfig&& value) { SetInputReferenceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the collaboration ID namespace association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the collaboration ID namepsace association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input reference properties that are used to create the collaboration ID
     * namespace association.</p>
     */
    inline const IdNamespaceAssociationInputReferencePropertiesSummary& GetInputReferenceProperties() const{ return m_inputReferenceProperties; }
    inline bool InputReferencePropertiesHasBeenSet() const { return m_inputReferencePropertiesHasBeenSet; }
    inline void SetInputReferenceProperties(const IdNamespaceAssociationInputReferencePropertiesSummary& value) { m_inputReferencePropertiesHasBeenSet = true; m_inputReferenceProperties = value; }
    inline void SetInputReferenceProperties(IdNamespaceAssociationInputReferencePropertiesSummary&& value) { m_inputReferencePropertiesHasBeenSet = true; m_inputReferenceProperties = std::move(value); }
    inline CollaborationIdNamespaceAssociationSummary& WithInputReferenceProperties(const IdNamespaceAssociationInputReferencePropertiesSummary& value) { SetInputReferenceProperties(value); return *this;}
    inline CollaborationIdNamespaceAssociationSummary& WithInputReferenceProperties(IdNamespaceAssociationInputReferencePropertiesSummary&& value) { SetInputReferenceProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    IdNamespaceAssociationInputReferenceConfig m_inputReferenceConfig;
    bool m_inputReferenceConfigHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IdNamespaceAssociationInputReferencePropertiesSummary m_inputReferenceProperties;
    bool m_inputReferencePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
