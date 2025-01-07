/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/Status.h>
#include <aws/datazone/model/EnvironmentConfiguration.h>
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
  class GetProjectProfileResult
  {
  public:
    AWS_DATAZONE_API GetProjectProfileResult();
    AWS_DATAZONE_API GetProjectProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetProjectProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the project profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetProjectProfileResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetProjectProfileResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the project profile.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetProjectProfileResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetProjectProfileResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetProjectProfileResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the project profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetProjectProfileResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetProjectProfileResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetProjectProfileResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain of the project profile.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetProjectProfileResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetProjectProfileResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetProjectProfileResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit of the project profile.</p>
     */
    inline const Aws::String& GetDomainUnitId() const{ return m_domainUnitId; }
    inline void SetDomainUnitId(const Aws::String& value) { m_domainUnitId = value; }
    inline void SetDomainUnitId(Aws::String&& value) { m_domainUnitId = std::move(value); }
    inline void SetDomainUnitId(const char* value) { m_domainUnitId.assign(value); }
    inline GetProjectProfileResult& WithDomainUnitId(const Aws::String& value) { SetDomainUnitId(value); return *this;}
    inline GetProjectProfileResult& WithDomainUnitId(Aws::String&& value) { SetDomainUnitId(std::move(value)); return *this;}
    inline GetProjectProfileResult& WithDomainUnitId(const char* value) { SetDomainUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment configurations of the project profile.</p>
     */
    inline const Aws::Vector<EnvironmentConfiguration>& GetEnvironmentConfigurations() const{ return m_environmentConfigurations; }
    inline void SetEnvironmentConfigurations(const Aws::Vector<EnvironmentConfiguration>& value) { m_environmentConfigurations = value; }
    inline void SetEnvironmentConfigurations(Aws::Vector<EnvironmentConfiguration>&& value) { m_environmentConfigurations = std::move(value); }
    inline GetProjectProfileResult& WithEnvironmentConfigurations(const Aws::Vector<EnvironmentConfiguration>& value) { SetEnvironmentConfigurations(value); return *this;}
    inline GetProjectProfileResult& WithEnvironmentConfigurations(Aws::Vector<EnvironmentConfiguration>&& value) { SetEnvironmentConfigurations(std::move(value)); return *this;}
    inline GetProjectProfileResult& AddEnvironmentConfigurations(const EnvironmentConfiguration& value) { m_environmentConfigurations.push_back(value); return *this; }
    inline GetProjectProfileResult& AddEnvironmentConfigurations(EnvironmentConfiguration&& value) { m_environmentConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the project profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetProjectProfileResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetProjectProfileResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetProjectProfileResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when project profile was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetProjectProfileResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetProjectProfileResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetProjectProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetProjectProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetProjectProfileResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the project profile.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline GetProjectProfileResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline GetProjectProfileResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProjectProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProjectProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProjectProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_domainUnitId;

    Aws::Vector<EnvironmentConfiguration> m_environmentConfigurations;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    Status m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
