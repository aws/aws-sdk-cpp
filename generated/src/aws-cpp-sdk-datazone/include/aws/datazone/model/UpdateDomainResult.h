/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/SingleSignOn.h>
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
  class UpdateDomainResult
  {
  public:
    AWS_DATAZONE_API UpdateDomainResult();
    AWS_DATAZONE_API UpdateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline UpdateDomainResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline UpdateDomainResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateDomain</code>
     * action.</p>
     */
    inline UpdateDomainResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline const Aws::String& GetDomainExecutionRole() const{ return m_domainExecutionRole; }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline void SetDomainExecutionRole(const Aws::String& value) { m_domainExecutionRole = value; }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline void SetDomainExecutionRole(Aws::String&& value) { m_domainExecutionRole = std::move(value); }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline void SetDomainExecutionRole(const char* value) { m_domainExecutionRole.assign(value); }

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainResult& WithDomainExecutionRole(const Aws::String& value) { SetDomainExecutionRole(value); return *this;}

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainResult& WithDomainExecutionRole(Aws::String&& value) { SetDomainExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The domain execution role to be updated as part of the
     * <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainResult& WithDomainExecutionRole(const char* value) { SetDomainExecutionRole(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline UpdateDomainResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline UpdateDomainResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline UpdateDomainResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Specifies the timestamp of when the domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>Specifies the timestamp of when the domain was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>Specifies the timestamp of when the domain was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>Specifies the timestamp of when the domain was last updated.</p>
     */
    inline UpdateDomainResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>Specifies the timestamp of when the domain was last updated.</p>
     */
    inline UpdateDomainResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateDomain</code> action.</p>
     */
    inline UpdateDomainResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The single sign-on option of the Amazon DataZone domain.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const{ return m_singleSignOn; }

    /**
     * <p>The single sign-on option of the Amazon DataZone domain.</p>
     */
    inline void SetSingleSignOn(const SingleSignOn& value) { m_singleSignOn = value; }

    /**
     * <p>The single sign-on option of the Amazon DataZone domain.</p>
     */
    inline void SetSingleSignOn(SingleSignOn&& value) { m_singleSignOn = std::move(value); }

    /**
     * <p>The single sign-on option of the Amazon DataZone domain.</p>
     */
    inline UpdateDomainResult& WithSingleSignOn(const SingleSignOn& value) { SetSingleSignOn(value); return *this;}

    /**
     * <p>The single sign-on option of the Amazon DataZone domain.</p>
     */
    inline UpdateDomainResult& WithSingleSignOn(SingleSignOn&& value) { SetSingleSignOn(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_description;

    Aws::String m_domainExecutionRole;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    SingleSignOn m_singleSignOn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
