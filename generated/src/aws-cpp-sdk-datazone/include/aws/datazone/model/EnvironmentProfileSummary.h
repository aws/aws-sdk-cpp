/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of an environment profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentProfileSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentProfileSummary
  {
  public:
    AWS_DATAZONE_API EnvironmentProfileSummary();
    AWS_DATAZONE_API EnvironmentProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of an Amazon Web Services account in which an environment
     * profile exists.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The identifier of an Amazon Web Services account in which an environment
     * profile exists.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The identifier of an Amazon Web Services account in which an environment
     * profile exists.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The identifier of an Amazon Web Services account in which an environment
     * profile exists.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The identifier of an Amazon Web Services account in which an environment
     * profile exists.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The identifier of an Amazon Web Services account in which an environment
     * profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The identifier of an Amazon Web Services account in which an environment
     * profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Amazon Web Services account in which an environment
     * profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which an environment profile exists.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }

    /**
     * <p>The Amazon Web Services Region in which an environment profile exists.</p>
     */
    inline bool AwsAccountRegionHasBeenSet() const { return m_awsAccountRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which an environment profile exists.</p>
     */
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = value; }

    /**
     * <p>The Amazon Web Services Region in which an environment profile exists.</p>
     */
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which an environment profile exists.</p>
     */
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which an environment profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which an environment profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which an environment profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}


    /**
     * <p>The timestamp of when an environment profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when an environment profile was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when an environment profile was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when an environment profile was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when an environment profile was created.</p>
     */
    inline EnvironmentProfileSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when an environment profile was created.</p>
     */
    inline EnvironmentProfileSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the environment profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the environment profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the environment profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the environment profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the environment profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * exists.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * exists.</p>
     */
    inline EnvironmentProfileSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * exists.</p>
     */
    inline EnvironmentProfileSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * exists.</p>
     */
    inline EnvironmentProfileSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of a blueprint with which an environment profile is
     * created.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const{ return m_environmentBlueprintId; }

    /**
     * <p>The identifier of a blueprint with which an environment profile is
     * created.</p>
     */
    inline bool EnvironmentBlueprintIdHasBeenSet() const { return m_environmentBlueprintIdHasBeenSet; }

    /**
     * <p>The identifier of a blueprint with which an environment profile is
     * created.</p>
     */
    inline void SetEnvironmentBlueprintId(const Aws::String& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = value; }

    /**
     * <p>The identifier of a blueprint with which an environment profile is
     * created.</p>
     */
    inline void SetEnvironmentBlueprintId(Aws::String&& value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId = std::move(value); }

    /**
     * <p>The identifier of a blueprint with which an environment profile is
     * created.</p>
     */
    inline void SetEnvironmentBlueprintId(const char* value) { m_environmentBlueprintIdHasBeenSet = true; m_environmentBlueprintId.assign(value); }

    /**
     * <p>The identifier of a blueprint with which an environment profile is
     * created.</p>
     */
    inline EnvironmentProfileSummary& WithEnvironmentBlueprintId(const Aws::String& value) { SetEnvironmentBlueprintId(value); return *this;}

    /**
     * <p>The identifier of a blueprint with which an environment profile is
     * created.</p>
     */
    inline EnvironmentProfileSummary& WithEnvironmentBlueprintId(Aws::String&& value) { SetEnvironmentBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a blueprint with which an environment profile is
     * created.</p>
     */
    inline EnvironmentProfileSummary& WithEnvironmentBlueprintId(const char* value) { SetEnvironmentBlueprintId(value); return *this;}


    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the environment profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment profile.</p>
     */
    inline EnvironmentProfileSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of a project in which an environment profile exists.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The identifier of a project in which an environment profile exists.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The identifier of a project in which an environment profile exists.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The identifier of a project in which an environment profile exists.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The identifier of a project in which an environment profile exists.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The identifier of a project in which an environment profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The identifier of a project in which an environment profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a project in which an environment profile exists.</p>
     */
    inline EnvironmentProfileSummary& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline EnvironmentProfileSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline EnvironmentProfileSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsAccountRegion;
    bool m_awsAccountRegionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_environmentBlueprintId;
    bool m_environmentBlueprintIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
