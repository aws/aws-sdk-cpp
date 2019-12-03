/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-reviewer/model/ProviderType.h>
#include <aws/codeguru-reviewer/model/RepositoryAssociationState.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about a repository association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RepositoryAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API RepositoryAssociation
  {
  public:
    RepositoryAssociation();
    RepositoryAssociation(Aws::Utils::Json::JsonView jsonValue);
    RepositoryAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The id of the repository association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The id of the repository association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The id of the repository association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The id of the repository association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The id of the repository association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The id of the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The id of the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The id of the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline const Aws::String& GetAssociationArn() const{ return m_associationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline void SetAssociationArn(const Aws::String& value) { m_associationArnHasBeenSet = true; m_associationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline void SetAssociationArn(Aws::String&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline void SetAssociationArn(const char* value) { m_associationArnHasBeenSet = true; m_associationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationArn(const Aws::String& value) { SetAssociationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationArn(Aws::String&& value) { SetAssociationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the repository association.</p>
     */
    inline RepositoryAssociation& WithAssociationArn(const char* value) { SetAssociationArn(value); return *this;}


    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the repository.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the repository.</p>
     */
    inline RepositoryAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline RepositoryAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository.</p>
     */
    inline RepositoryAssociation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The owner of the repository.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the repository.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the repository.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the repository.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the repository.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the repository.</p>
     */
    inline RepositoryAssociation& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the repository.</p>
     */
    inline RepositoryAssociation& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the repository.</p>
     */
    inline RepositoryAssociation& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The provider type of the repository association.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline RepositoryAssociation& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The provider type of the repository association.</p>
     */
    inline RepositoryAssociation& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The state of the repository association.</p>
     */
    inline const RepositoryAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the repository association.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the repository association.</p>
     */
    inline void SetState(const RepositoryAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the repository association.</p>
     */
    inline void SetState(RepositoryAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the repository association.</p>
     */
    inline RepositoryAssociation& WithState(const RepositoryAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the repository association.</p>
     */
    inline RepositoryAssociation& WithState(RepositoryAssociationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline RepositoryAssociation& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline RepositoryAssociation& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>A description of why the repository association is in the current state.</p>
     */
    inline RepositoryAssociation& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimeStamp() const{ return m_lastUpdatedTimeStamp; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline void SetLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline void SetLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline RepositoryAssociation& WithLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimeStamp(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was last updated.</p>
     */
    inline RepositoryAssociation& WithLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimeStamp(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const{ return m_createdTimeStamp; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline void SetCreatedTimeStamp(const Aws::Utils::DateTime& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline void SetCreatedTimeStamp(Aws::Utils::DateTime&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline RepositoryAssociation& WithCreatedTimeStamp(const Aws::Utils::DateTime& value) { SetCreatedTimeStamp(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the repository association
     * was created.</p>
     */
    inline RepositoryAssociation& WithCreatedTimeStamp(Aws::Utils::DateTime&& value) { SetCreatedTimeStamp(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet;

    RepositoryAssociationState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp;
    bool m_lastUpdatedTimeStampHasBeenSet;

    Aws::Utils::DateTime m_createdTimeStamp;
    bool m_createdTimeStampHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
