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
  class CreateEnvironmentProfileResult
  {
  public:
    AWS_DATAZONE_API CreateEnvironmentProfileResult();
    AWS_DATAZONE_API CreateEnvironmentProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateEnvironmentProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services account ID in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services region in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline const Aws::String& GetAwsAccountRegion() const{ return m_awsAccountRegion; }

    /**
     * <p>The Amazon Web Services region in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline void SetAwsAccountRegion(const Aws::String& value) { m_awsAccountRegion = value; }

    /**
     * <p>The Amazon Web Services region in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline void SetAwsAccountRegion(Aws::String&& value) { m_awsAccountRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services region in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline void SetAwsAccountRegion(const char* value) { m_awsAccountRegion.assign(value); }

    /**
     * <p>The Amazon Web Services region in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithAwsAccountRegion(const Aws::String& value) { SetAwsAccountRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services region in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithAwsAccountRegion(Aws::String&& value) { SetAwsAccountRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services region in which this Amazon DataZone environment
     * profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithAwsAccountRegion(const char* value) { SetAwsAccountRegion(value); return *this;}


    /**
     * <p>The timestamp of when this environment profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when this environment profile was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when this environment profile was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when this environment profile was created.</p>
     */
    inline CreateEnvironmentProfileResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when this environment profile was created.</p>
     */
    inline CreateEnvironmentProfileResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created this environment profile.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created this environment profile.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created this environment profile.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created this environment profile.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created this environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created this environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created this environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline CreateEnvironmentProfileResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline CreateEnvironmentProfileResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this environment profile is
     * created.</p>
     */
    inline CreateEnvironmentProfileResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline const Aws::String& GetEnvironmentBlueprintId() const{ return m_environmentBlueprintId; }

    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline void SetEnvironmentBlueprintId(const Aws::String& value) { m_environmentBlueprintId = value; }

    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline void SetEnvironmentBlueprintId(Aws::String&& value) { m_environmentBlueprintId = std::move(value); }

    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline void SetEnvironmentBlueprintId(const char* value) { m_environmentBlueprintId.assign(value); }

    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithEnvironmentBlueprintId(const Aws::String& value) { SetEnvironmentBlueprintId(value); return *this;}

    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithEnvironmentBlueprintId(Aws::String&& value) { SetEnvironmentBlueprintId(std::move(value)); return *this;}

    /**
     * <p>The ID of the blueprint with which this environment profile is created.</p>
     */
    inline CreateEnvironmentProfileResult& WithEnvironmentBlueprintId(const char* value) { SetEnvironmentBlueprintId(value); return *this;}


    /**
     * <p>The ID of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of this Amazon DataZone environment profile.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of this Amazon DataZone environment profile.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of this Amazon DataZone environment profile.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone project in which this environment profile is
     * created.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the Amazon DataZone project in which this environment profile is
     * created.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The ID of the Amazon DataZone project in which this environment profile is
     * created.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone project in which this environment profile is
     * created.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone project in which this environment profile is
     * created.</p>
     */
    inline CreateEnvironmentProfileResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project in which this environment profile is
     * created.</p>
     */
    inline CreateEnvironmentProfileResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project in which this environment profile is
     * created.</p>
     */
    inline CreateEnvironmentProfileResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The timestamp of when this environment profile was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when this environment profile was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when this environment profile was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when this environment profile was updated.</p>
     */
    inline CreateEnvironmentProfileResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when this environment profile was updated.</p>
     */
    inline CreateEnvironmentProfileResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline const Aws::Vector<CustomParameter>& GetUserParameters() const{ return m_userParameters; }

    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline void SetUserParameters(const Aws::Vector<CustomParameter>& value) { m_userParameters = value; }

    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline void SetUserParameters(Aws::Vector<CustomParameter>&& value) { m_userParameters = std::move(value); }

    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithUserParameters(const Aws::Vector<CustomParameter>& value) { SetUserParameters(value); return *this;}

    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& WithUserParameters(Aws::Vector<CustomParameter>&& value) { SetUserParameters(std::move(value)); return *this;}

    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& AddUserParameters(const CustomParameter& value) { m_userParameters.push_back(value); return *this; }

    /**
     * <p>The user parameters of this Amazon DataZone environment profile.</p>
     */
    inline CreateEnvironmentProfileResult& AddUserParameters(CustomParameter&& value) { m_userParameters.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateEnvironmentProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateEnvironmentProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateEnvironmentProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
