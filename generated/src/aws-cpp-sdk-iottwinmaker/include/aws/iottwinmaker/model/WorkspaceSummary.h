/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An object that contains information about a workspace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/WorkspaceSummary">AWS
   * API Reference</a></p>
   */
  class WorkspaceSummary
  {
  public:
    AWS_IOTTWINMAKER_API WorkspaceSummary();
    AWS_IOTTWINMAKER_API WorkspaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API WorkspaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline WorkspaceSummary& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline WorkspaceSummary& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline WorkspaceSummary& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the workspace.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline WorkspaceSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline WorkspaceSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline WorkspaceSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the workspace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WorkspaceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WorkspaceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WorkspaceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of services that are linked to the workspace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedServices() const{ return m_linkedServices; }
    inline bool LinkedServicesHasBeenSet() const { return m_linkedServicesHasBeenSet; }
    inline void SetLinkedServices(const Aws::Vector<Aws::String>& value) { m_linkedServicesHasBeenSet = true; m_linkedServices = value; }
    inline void SetLinkedServices(Aws::Vector<Aws::String>&& value) { m_linkedServicesHasBeenSet = true; m_linkedServices = std::move(value); }
    inline WorkspaceSummary& WithLinkedServices(const Aws::Vector<Aws::String>& value) { SetLinkedServices(value); return *this;}
    inline WorkspaceSummary& WithLinkedServices(Aws::Vector<Aws::String>&& value) { SetLinkedServices(std::move(value)); return *this;}
    inline WorkspaceSummary& AddLinkedServices(const Aws::String& value) { m_linkedServicesHasBeenSet = true; m_linkedServices.push_back(value); return *this; }
    inline WorkspaceSummary& AddLinkedServices(Aws::String&& value) { m_linkedServicesHasBeenSet = true; m_linkedServices.push_back(std::move(value)); return *this; }
    inline WorkspaceSummary& AddLinkedServices(const char* value) { m_linkedServicesHasBeenSet = true; m_linkedServices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the workspace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline WorkspaceSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline WorkspaceSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the workspace was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }
    inline WorkspaceSummary& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}
    inline WorkspaceSummary& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkedServices;
    bool m_linkedServicesHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
