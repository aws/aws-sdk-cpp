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
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociationType.h>
#include <aws/ram/model/ResourceShareAssociationStatus.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes an association with a resource share.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceShareAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_RAM_API ResourceShareAssociation
  {
  public:
    ResourceShareAssociation();
    ResourceShareAssociation(Aws::Utils::Json::JsonView jsonValue);
    ResourceShareAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline ResourceShareAssociation& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline ResourceShareAssociation& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline ResourceShareAssociation& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>The associated entity. For resource associations, this is the ARN of the
     * resource. For principal associations, this is the ID of an AWS account or the
     * ARN of an OU or organization from AWS Organizations.</p>
     */
    inline const Aws::String& GetAssociatedEntity() const{ return m_associatedEntity; }

    /**
     * <p>The associated entity. For resource associations, this is the ARN of the
     * resource. For principal associations, this is the ID of an AWS account or the
     * ARN of an OU or organization from AWS Organizations.</p>
     */
    inline bool AssociatedEntityHasBeenSet() const { return m_associatedEntityHasBeenSet; }

    /**
     * <p>The associated entity. For resource associations, this is the ARN of the
     * resource. For principal associations, this is the ID of an AWS account or the
     * ARN of an OU or organization from AWS Organizations.</p>
     */
    inline void SetAssociatedEntity(const Aws::String& value) { m_associatedEntityHasBeenSet = true; m_associatedEntity = value; }

    /**
     * <p>The associated entity. For resource associations, this is the ARN of the
     * resource. For principal associations, this is the ID of an AWS account or the
     * ARN of an OU or organization from AWS Organizations.</p>
     */
    inline void SetAssociatedEntity(Aws::String&& value) { m_associatedEntityHasBeenSet = true; m_associatedEntity = std::move(value); }

    /**
     * <p>The associated entity. For resource associations, this is the ARN of the
     * resource. For principal associations, this is the ID of an AWS account or the
     * ARN of an OU or organization from AWS Organizations.</p>
     */
    inline void SetAssociatedEntity(const char* value) { m_associatedEntityHasBeenSet = true; m_associatedEntity.assign(value); }

    /**
     * <p>The associated entity. For resource associations, this is the ARN of the
     * resource. For principal associations, this is the ID of an AWS account or the
     * ARN of an OU or organization from AWS Organizations.</p>
     */
    inline ResourceShareAssociation& WithAssociatedEntity(const Aws::String& value) { SetAssociatedEntity(value); return *this;}

    /**
     * <p>The associated entity. For resource associations, this is the ARN of the
     * resource. For principal associations, this is the ID of an AWS account or the
     * ARN of an OU or organization from AWS Organizations.</p>
     */
    inline ResourceShareAssociation& WithAssociatedEntity(Aws::String&& value) { SetAssociatedEntity(std::move(value)); return *this;}

    /**
     * <p>The associated entity. For resource associations, this is the ARN of the
     * resource. For principal associations, this is the ID of an AWS account or the
     * ARN of an OU or organization from AWS Organizations.</p>
     */
    inline ResourceShareAssociation& WithAssociatedEntity(const char* value) { SetAssociatedEntity(value); return *this;}


    /**
     * <p>The association type.</p>
     */
    inline const ResourceShareAssociationType& GetAssociationType() const{ return m_associationType; }

    /**
     * <p>The association type.</p>
     */
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }

    /**
     * <p>The association type.</p>
     */
    inline void SetAssociationType(const ResourceShareAssociationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }

    /**
     * <p>The association type.</p>
     */
    inline void SetAssociationType(ResourceShareAssociationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }

    /**
     * <p>The association type.</p>
     */
    inline ResourceShareAssociation& WithAssociationType(const ResourceShareAssociationType& value) { SetAssociationType(value); return *this;}

    /**
     * <p>The association type.</p>
     */
    inline ResourceShareAssociation& WithAssociationType(ResourceShareAssociationType&& value) { SetAssociationType(std::move(value)); return *this;}


    /**
     * <p>The status of the association.</p>
     */
    inline const ResourceShareAssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the association.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the association.</p>
     */
    inline void SetStatus(const ResourceShareAssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the association.</p>
     */
    inline void SetStatus(ResourceShareAssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the association.</p>
     */
    inline ResourceShareAssociation& WithStatus(const ResourceShareAssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the association.</p>
     */
    inline ResourceShareAssociation& WithStatus(ResourceShareAssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message about the status of the association.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message about the status of the association.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message about the status of the association.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message about the status of the association.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message about the status of the association.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message about the status of the association.</p>
     */
    inline ResourceShareAssociation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message about the status of the association.</p>
     */
    inline ResourceShareAssociation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the status of the association.</p>
     */
    inline ResourceShareAssociation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The time when the association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the association was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the association was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the association was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the association was created.</p>
     */
    inline ResourceShareAssociation& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the association was created.</p>
     */
    inline ResourceShareAssociation& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline ResourceShareAssociation& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline ResourceShareAssociation& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the principal belongs to the same organization as the AWS
     * account that owns the resource share.</p>
     */
    inline bool GetExternal() const{ return m_external; }

    /**
     * <p>Indicates whether the principal belongs to the same organization as the AWS
     * account that owns the resource share.</p>
     */
    inline bool ExternalHasBeenSet() const { return m_externalHasBeenSet; }

    /**
     * <p>Indicates whether the principal belongs to the same organization as the AWS
     * account that owns the resource share.</p>
     */
    inline void SetExternal(bool value) { m_externalHasBeenSet = true; m_external = value; }

    /**
     * <p>Indicates whether the principal belongs to the same organization as the AWS
     * account that owns the resource share.</p>
     */
    inline ResourceShareAssociation& WithExternal(bool value) { SetExternal(value); return *this;}

  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet;

    Aws::String m_associatedEntity;
    bool m_associatedEntityHasBeenSet;

    ResourceShareAssociationType m_associationType;
    bool m_associationTypeHasBeenSet;

    ResourceShareAssociationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;

    bool m_external;
    bool m_externalHasBeenSet;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
