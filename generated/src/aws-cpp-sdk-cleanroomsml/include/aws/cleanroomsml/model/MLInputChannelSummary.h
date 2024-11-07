/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/MLInputChannelStatus.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides summary information about the ML input channel.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/MLInputChannelSummary">AWS
   * API Reference</a></p>
   */
  class MLInputChannelSummary
  {
  public:
    AWS_CLEANROOMSML_API MLInputChannelSummary();
    AWS_CLEANROOMSML_API MLInputChannelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API MLInputChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the ML input channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline MLInputChannelSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline MLInputChannelSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the ML input channel was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline MLInputChannelSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline MLInputChannelSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership ID of the membership that contains the ML input channel.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline MLInputChannelSummary& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline MLInputChannelSummary& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline MLInputChannelSummary& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration ID of the collaboration that contains the ML input
     * channel.</p>
     */
    inline const Aws::String& GetCollaborationIdentifier() const{ return m_collaborationIdentifier; }
    inline bool CollaborationIdentifierHasBeenSet() const { return m_collaborationIdentifierHasBeenSet; }
    inline void SetCollaborationIdentifier(const Aws::String& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = value; }
    inline void SetCollaborationIdentifier(Aws::String&& value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier = std::move(value); }
    inline void SetCollaborationIdentifier(const char* value) { m_collaborationIdentifierHasBeenSet = true; m_collaborationIdentifier.assign(value); }
    inline MLInputChannelSummary& WithCollaborationIdentifier(const Aws::String& value) { SetCollaborationIdentifier(value); return *this;}
    inline MLInputChannelSummary& WithCollaborationIdentifier(Aws::String&& value) { SetCollaborationIdentifier(std::move(value)); return *this;}
    inline MLInputChannelSummary& WithCollaborationIdentifier(const char* value) { SetCollaborationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ML input channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MLInputChannelSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MLInputChannelSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MLInputChannelSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated configured model algorithms used to create the ML input
     * channel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfiguredModelAlgorithmAssociations() const{ return m_configuredModelAlgorithmAssociations; }
    inline bool ConfiguredModelAlgorithmAssociationsHasBeenSet() const { return m_configuredModelAlgorithmAssociationsHasBeenSet; }
    inline void SetConfiguredModelAlgorithmAssociations(const Aws::Vector<Aws::String>& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations = value; }
    inline void SetConfiguredModelAlgorithmAssociations(Aws::Vector<Aws::String>&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations = std::move(value); }
    inline MLInputChannelSummary& WithConfiguredModelAlgorithmAssociations(const Aws::Vector<Aws::String>& value) { SetConfiguredModelAlgorithmAssociations(value); return *this;}
    inline MLInputChannelSummary& WithConfiguredModelAlgorithmAssociations(Aws::Vector<Aws::String>&& value) { SetConfiguredModelAlgorithmAssociations(std::move(value)); return *this;}
    inline MLInputChannelSummary& AddConfiguredModelAlgorithmAssociations(const Aws::String& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    inline MLInputChannelSummary& AddConfiguredModelAlgorithmAssociations(Aws::String&& value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.push_back(std::move(value)); return *this; }
    inline MLInputChannelSummary& AddConfiguredModelAlgorithmAssociations(const char* value) { m_configuredModelAlgorithmAssociationsHasBeenSet = true; m_configuredModelAlgorithmAssociations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the protected query that was used to create the ML input
     * channel.</p>
     */
    inline const Aws::String& GetProtectedQueryIdentifier() const{ return m_protectedQueryIdentifier; }
    inline bool ProtectedQueryIdentifierHasBeenSet() const { return m_protectedQueryIdentifierHasBeenSet; }
    inline void SetProtectedQueryIdentifier(const Aws::String& value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier = value; }
    inline void SetProtectedQueryIdentifier(Aws::String&& value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier = std::move(value); }
    inline void SetProtectedQueryIdentifier(const char* value) { m_protectedQueryIdentifierHasBeenSet = true; m_protectedQueryIdentifier.assign(value); }
    inline MLInputChannelSummary& WithProtectedQueryIdentifier(const Aws::String& value) { SetProtectedQueryIdentifier(value); return *this;}
    inline MLInputChannelSummary& WithProtectedQueryIdentifier(Aws::String&& value) { SetProtectedQueryIdentifier(std::move(value)); return *this;}
    inline MLInputChannelSummary& WithProtectedQueryIdentifier(const char* value) { SetProtectedQueryIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ML input channel.</p>
     */
    inline const Aws::String& GetMlInputChannelArn() const{ return m_mlInputChannelArn; }
    inline bool MlInputChannelArnHasBeenSet() const { return m_mlInputChannelArnHasBeenSet; }
    inline void SetMlInputChannelArn(const Aws::String& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = value; }
    inline void SetMlInputChannelArn(Aws::String&& value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn = std::move(value); }
    inline void SetMlInputChannelArn(const char* value) { m_mlInputChannelArnHasBeenSet = true; m_mlInputChannelArn.assign(value); }
    inline MLInputChannelSummary& WithMlInputChannelArn(const Aws::String& value) { SetMlInputChannelArn(value); return *this;}
    inline MLInputChannelSummary& WithMlInputChannelArn(Aws::String&& value) { SetMlInputChannelArn(std::move(value)); return *this;}
    inline MLInputChannelSummary& WithMlInputChannelArn(const char* value) { SetMlInputChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ML input channel.</p>
     */
    inline const MLInputChannelStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MLInputChannelStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MLInputChannelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MLInputChannelSummary& WithStatus(const MLInputChannelStatus& value) { SetStatus(value); return *this;}
    inline MLInputChannelSummary& WithStatus(MLInputChannelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the ML input channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MLInputChannelSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MLInputChannelSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MLInputChannelSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_collaborationIdentifier;
    bool m_collaborationIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_configuredModelAlgorithmAssociations;
    bool m_configuredModelAlgorithmAssociationsHasBeenSet = false;

    Aws::String m_protectedQueryIdentifier;
    bool m_protectedQueryIdentifierHasBeenSet = false;

    Aws::String m_mlInputChannelArn;
    bool m_mlInputChannelArnHasBeenSet = false;

    MLInputChannelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
