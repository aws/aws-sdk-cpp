/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/EnvironmentStatus.h>
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
   * <p>The details of an environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentSummary
  {
  public:
    AWS_DATAZONE_API EnvironmentSummary();
    AWS_DATAZONE_API EnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the Amazon Web Services account in which an environment
     * exists.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account in which an environment
     * exists.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account in which an environment
     * exists.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account in which an environment
     * exists.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account in which an environment
     * exists.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account in which an environment
     * exists.</p>
     */
    inline EnvironmentSummary& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account in which an environment
     * exists.</p>
     */
    inline EnvironmentSummary& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account in which an environment
     * exists.</p>
     */
    inline EnvironmentSummary& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which an environment exists.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }

    /**
     * <p>The Amazon Web Services Region in which an environment exists.</p>
     */
    inline bool AwsAccountRegionHasBeenSet() const { return m_awsAccountRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region in which an environment exists.</p>
     */
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = value; }

    /**
     * <p>The Amazon Web Services Region in which an environment exists.</p>
     */
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which an environment exists.</p>
     */
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegionHasBeenSet = true; m_awsAccountRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which an environment exists.</p>
     */
    inline EnvironmentSummary& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which an environment exists.</p>
     */
    inline EnvironmentSummary& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which an environment exists.</p>
     */
    inline EnvironmentSummary& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}


    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline EnvironmentSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the environment was created.</p>
     */
    inline EnvironmentSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline EnvironmentSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline EnvironmentSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the environment.</p>
     */
    inline EnvironmentSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the environment.</p>
     */
    inline EnvironmentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the environment.</p>
     */
    inline EnvironmentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the environment.</p>
     */
    inline EnvironmentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment
     * exists.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment
     * exists.</p>
     */
    inline EnvironmentSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment
     * exists.</p>
     */
    inline EnvironmentSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment
     * exists.</p>
     */
    inline EnvironmentSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the environment profile with which the environment was
     * created.</p>
     */
    inline const Aws::String& GetEnvironmentProfileId() const{ return m_environmentProfileId; }

    /**
     * <p>The identifier of the environment profile with which the environment was
     * created.</p>
     */
    inline bool EnvironmentProfileIdHasBeenSet() const { return m_environmentProfileIdHasBeenSet; }

    /**
     * <p>The identifier of the environment profile with which the environment was
     * created.</p>
     */
    inline void SetEnvironmentProfileId(const Aws::String& value) { m_environmentProfileIdHasBeenSet = true; m_environmentProfileId = value; }

    /**
     * <p>The identifier of the environment profile with which the environment was
     * created.</p>
     */
    inline void SetEnvironmentProfileId(Aws::String&& value) { m_environmentProfileIdHasBeenSet = true; m_environmentProfileId = std::move(value); }

    /**
     * <p>The identifier of the environment profile with which the environment was
     * created.</p>
     */
    inline void SetEnvironmentProfileId(const char* value) { m_environmentProfileIdHasBeenSet = true; m_environmentProfileId.assign(value); }

    /**
     * <p>The identifier of the environment profile with which the environment was
     * created.</p>
     */
    inline EnvironmentSummary& WithEnvironmentProfileId(const Aws::String& value) { SetEnvironmentProfileId(value); return *this;}

    /**
     * <p>The identifier of the environment profile with which the environment was
     * created.</p>
     */
    inline EnvironmentSummary& WithEnvironmentProfileId(Aws::String&& value) { SetEnvironmentProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment profile with which the environment was
     * created.</p>
     */
    inline EnvironmentSummary& WithEnvironmentProfileId(const char* value) { SetEnvironmentProfileId(value); return *this;}


    /**
     * <p>The identifier of the environment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline EnvironmentSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the environment.</p>
     */
    inline EnvironmentSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment.</p>
     */
    inline EnvironmentSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the project in which the environment exists.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The identifier of the project in which the environment exists.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The identifier of the project in which the environment exists.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The identifier of the project in which the environment exists.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The identifier of the project in which the environment exists.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The identifier of the project in which the environment exists.</p>
     */
    inline EnvironmentSummary& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The identifier of the project in which the environment exists.</p>
     */
    inline EnvironmentSummary& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project in which the environment exists.</p>
     */
    inline EnvironmentSummary& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The provider of the environment.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the environment.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the environment.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the environment.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the environment.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the environment.</p>
     */
    inline EnvironmentSummary& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the environment.</p>
     */
    inline EnvironmentSummary& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the environment.</p>
     */
    inline EnvironmentSummary& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The status of the environment.</p>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the environment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the environment.</p>
     */
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the environment.</p>
     */
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the environment.</p>
     */
    inline EnvironmentSummary& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the environment.</p>
     */
    inline EnvironmentSummary& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the environment was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the environment was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the environment was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the environment was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the environment was updated.</p>
     */
    inline EnvironmentSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the environment was updated.</p>
     */
    inline EnvironmentSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

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

    Aws::String m_environmentProfileId;
    bool m_environmentProfileIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    EnvironmentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
