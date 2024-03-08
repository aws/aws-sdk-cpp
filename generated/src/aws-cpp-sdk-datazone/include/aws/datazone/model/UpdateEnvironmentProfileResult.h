/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/CustomParameter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class UpdateEnvironmentProfileResult
  {
  public:
    AWS_DATAZONE_API UpdateEnvironmentProfileResult();
    AWS_DATAZONE_API UpdateEnvironmentProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateEnvironmentProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account in which a specified environment profile is
     * to be udpated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegion = value; }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region in which a specified environment profile is to
     * be updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}


    /**
     * <p>The timestamp of when the environment profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the environment profile was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the environment profile was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the environment profile was created.</p>
     */
    inline UpdateEnvironmentProfileResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the environment profile was created.</p>
     */
    inline UpdateEnvironmentProfileResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline UpdateEnvironmentProfileResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline UpdateEnvironmentProfileResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the environment profile.</p>
     */
    inline UpdateEnvironmentProfileResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * is to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * is to be updated.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * is to be updated.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * is to be updated.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * is to be updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * is to be updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the environment profile
     * is to be updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the blueprint of the environment profile that is to be
     * updated.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const{ return m_environmentBlueprintId; }

    /**
     * <p>The identifier of the blueprint of the environment profile that is to be
     * updated.</p>
     */
    inline void SetEnvironmentBlueprintId(const Aws::String& value) { m_environmentBlueprintId = value; }

    /**
     * <p>The identifier of the blueprint of the environment profile that is to be
     * updated.</p>
     */
    inline void SetEnvironmentBlueprintId(Aws::String&& value) { m_environmentBlueprintId = std::move(value); }

    /**
     * <p>The identifier of the blueprint of the environment profile that is to be
     * updated.</p>
     */
    inline void SetEnvironmentBlueprintId(const char* value) { m_environmentBlueprintId.assign(value); }

    /**
     * <p>The identifier of the blueprint of the environment profile that is to be
     * updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithEnvironmentBlueprintId(const Aws::String& value) { SetEnvironmentBlueprintId(value); return *this;}

    /**
     * <p>The identifier of the blueprint of the environment profile that is to be
     * updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithEnvironmentBlueprintId(Aws::String&& value) { SetEnvironmentBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the blueprint of the environment profile that is to be
     * updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithEnvironmentBlueprintId(const char* value) { SetEnvironmentBlueprintId(value); return *this;}


    /**
     * <p>The identifier of the environment profile that is to be udpated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the environment profile that is to be udpated.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the environment profile that is to be udpated.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the environment profile that is to be udpated.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the environment profile that is to be udpated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the environment profile that is to be udpated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment profile that is to be udpated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline UpdateEnvironmentProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline UpdateEnvironmentProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironmentProfile</code>
     * action.</p>
     */
    inline UpdateEnvironmentProfileResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the project of the environment profile that is to be
     * updated.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The identifier of the project of the environment profile that is to be
     * updated.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The identifier of the project of the environment profile that is to be
     * updated.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The identifier of the project of the environment profile that is to be
     * updated.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The identifier of the project of the environment profile that is to be
     * updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The identifier of the project of the environment profile that is to be
     * updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project of the environment profile that is to be
     * updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the environment profile was updated.</p>
     */
    inline UpdateEnvironmentProfileResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline const Aws::Vector<CustomParameter>& GetUserParameters() const{ return m_userParameters; }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetUserParameters(const Aws::Vector<CustomParameter>& value) { m_userParameters = value; }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline void SetUserParameters(Aws::Vector<CustomParameter>&& value) { m_userParameters = std::move(value); }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileResult& WithUserParameters(const Aws::Vector<CustomParameter>& value) { SetUserParameters(value); return *this;}

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileResult& WithUserParameters(Aws::Vector<CustomParameter>&& value) { SetUserParameters(std::move(value)); return *this;}

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileResult& AddUserParameters(const CustomParameter& value) { m_userParameters.push_back(value); return *this; }

    /**
     * <p>The user parameters to be updated as part of the
     * <code>UpdateEnvironmentProfile</code> action.</p>
     */
    inline UpdateEnvironmentProfileResult& AddUserParameters(CustomParameter&& value) { m_userParameters.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateEnvironmentProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateEnvironmentProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateEnvironmentProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_awsAccountId;

    Aws::String m_awsAccountRegion;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_environmentBlueprintId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_projectId;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Vector<CustomParameter> m_userParameters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
