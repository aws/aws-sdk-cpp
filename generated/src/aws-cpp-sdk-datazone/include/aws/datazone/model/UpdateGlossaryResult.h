/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryStatus.h>
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
  class UpdateGlossaryResult
  {
  public:
    AWS_DATAZONE_API UpdateGlossaryResult();
    AWS_DATAZONE_API UpdateGlossaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateGlossaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline UpdateGlossaryResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline UpdateGlossaryResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which a business glossary is
     * to be updated.</p>
     */
    inline UpdateGlossaryResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the business glossary that is to be updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the business glossary that is to be updated.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the business glossary that is to be updated.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the business glossary that is to be updated.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the business glossary that is to be updated.</p>
     */
    inline UpdateGlossaryResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the business glossary that is to be updated.</p>
     */
    inline UpdateGlossaryResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the business glossary that is to be updated.</p>
     */
    inline UpdateGlossaryResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline UpdateGlossaryResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline UpdateGlossaryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be updated as part of the <code>UpdateGlossary</code> action.</p>
     */
    inline UpdateGlossaryResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the project in which to update a business glossary.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The identifier of the project in which to update a business glossary.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }

    /**
     * <p>The identifier of the project in which to update a business glossary.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }

    /**
     * <p>The identifier of the project in which to update a business glossary.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }

    /**
     * <p>The identifier of the project in which to update a business glossary.</p>
     */
    inline UpdateGlossaryResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The identifier of the project in which to update a business glossary.</p>
     */
    inline UpdateGlossaryResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project in which to update a business glossary.</p>
     */
    inline UpdateGlossaryResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline const GlossaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetStatus(const GlossaryStatus& value) { m_status = value; }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline void SetStatus(GlossaryStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryResult& WithStatus(const GlossaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status to be updated as part of the <code>UpdateGlossary</code>
     * action.</p>
     */
    inline UpdateGlossaryResult& WithStatus(GlossaryStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateGlossaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateGlossaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateGlossaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_owningProjectId;

    GlossaryStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
