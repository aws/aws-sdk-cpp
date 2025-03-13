/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/IdNamespaceAssociationInputReferenceConfig.h>
#include <aws/cleanrooms/model/IdNamespaceAssociationInputReferenceProperties.h>
#include <aws/cleanrooms/model/IdMappingConfig.h>
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
   * <p>Defines details for the collaboration ID namespace association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationIdNamespaceAssociation">AWS
   * API Reference</a></p>
   */
  class CollaborationIdNamespaceAssociation
  {
  public:
    AWS_CLEANROOMS_API CollaborationIdNamespaceAssociation() = default;
    AWS_CLEANROOMS_API CollaborationIdNamespaceAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationIdNamespaceAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the collaboration ID namespace association.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CollaborationIdNamespaceAssociation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration ID namespace
     * association.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CollaborationIdNamespaceAssociation& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the collaboration that contains the collaboration ID
     * namespace association.</p>
     */
    inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    template<typename CollaborationIdT = Aws::String>
    void SetCollaborationId(CollaborationIdT&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::forward<CollaborationIdT>(value); }
    template<typename CollaborationIdT = Aws::String>
    CollaborationIdNamespaceAssociation& WithCollaborationId(CollaborationIdT&& value) { SetCollaborationId(std::forward<CollaborationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains the
     * collaboration ID namespace association.</p>
     */
    inline const Aws::String& GetCollaborationArn() const { return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    template<typename CollaborationArnT = Aws::String>
    void SetCollaborationArn(CollaborationArnT&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::forward<CollaborationArnT>(value); }
    template<typename CollaborationArnT = Aws::String>
    CollaborationIdNamespaceAssociation& WithCollaborationArn(CollaborationArnT&& value) { SetCollaborationArn(std::forward<CollaborationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the collaboration ID namespace association.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CollaborationIdNamespaceAssociation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the collaboration ID namespace association.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CollaborationIdNamespaceAssociation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Web Services account that created the
     * collaboration ID namespace association.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    CollaborationIdNamespaceAssociation& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the collaboration ID namespace association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CollaborationIdNamespaceAssociation& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the collaboration ID namespace was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    CollaborationIdNamespaceAssociation& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input reference configuration that's necessary to create the
     * collaboration ID namespace association.</p>
     */
    inline const IdNamespaceAssociationInputReferenceConfig& GetInputReferenceConfig() const { return m_inputReferenceConfig; }
    inline bool InputReferenceConfigHasBeenSet() const { return m_inputReferenceConfigHasBeenSet; }
    template<typename InputReferenceConfigT = IdNamespaceAssociationInputReferenceConfig>
    void SetInputReferenceConfig(InputReferenceConfigT&& value) { m_inputReferenceConfigHasBeenSet = true; m_inputReferenceConfig = std::forward<InputReferenceConfigT>(value); }
    template<typename InputReferenceConfigT = IdNamespaceAssociationInputReferenceConfig>
    CollaborationIdNamespaceAssociation& WithInputReferenceConfig(InputReferenceConfigT&& value) { SetInputReferenceConfig(std::forward<InputReferenceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input reference properties that are needed to create the collaboration ID
     * namespace association.</p>
     */
    inline const IdNamespaceAssociationInputReferenceProperties& GetInputReferenceProperties() const { return m_inputReferenceProperties; }
    inline bool InputReferencePropertiesHasBeenSet() const { return m_inputReferencePropertiesHasBeenSet; }
    template<typename InputReferencePropertiesT = IdNamespaceAssociationInputReferenceProperties>
    void SetInputReferenceProperties(InputReferencePropertiesT&& value) { m_inputReferencePropertiesHasBeenSet = true; m_inputReferenceProperties = std::forward<InputReferencePropertiesT>(value); }
    template<typename InputReferencePropertiesT = IdNamespaceAssociationInputReferenceProperties>
    CollaborationIdNamespaceAssociation& WithInputReferenceProperties(InputReferencePropertiesT&& value) { SetInputReferenceProperties(std::forward<InputReferencePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IdMappingConfig& GetIdMappingConfig() const { return m_idMappingConfig; }
    inline bool IdMappingConfigHasBeenSet() const { return m_idMappingConfigHasBeenSet; }
    template<typename IdMappingConfigT = IdMappingConfig>
    void SetIdMappingConfig(IdMappingConfigT&& value) { m_idMappingConfigHasBeenSet = true; m_idMappingConfig = std::forward<IdMappingConfigT>(value); }
    template<typename IdMappingConfigT = IdMappingConfig>
    CollaborationIdNamespaceAssociation& WithIdMappingConfig(IdMappingConfigT&& value) { SetIdMappingConfig(std::forward<IdMappingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    IdNamespaceAssociationInputReferenceConfig m_inputReferenceConfig;
    bool m_inputReferenceConfigHasBeenSet = false;

    IdNamespaceAssociationInputReferenceProperties m_inputReferenceProperties;
    bool m_inputReferencePropertiesHasBeenSet = false;

    IdMappingConfig m_idMappingConfig;
    bool m_idMappingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
