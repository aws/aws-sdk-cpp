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
  class CreateGlossaryResult
  {
  public:
    AWS_DATAZONE_API CreateGlossaryResult();
    AWS_DATAZONE_API CreateGlossaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateGlossaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of this business glossary.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline CreateGlossaryResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline CreateGlossaryResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary is
     * created.</p>
     */
    inline CreateGlossaryResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of this business glossary.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of this business glossary.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of this business glossary.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of this business glossary.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of this business glossary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the project that currently owns this business glossary.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The ID of the project that currently owns this business glossary.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }

    /**
     * <p>The ID of the project that currently owns this business glossary.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }

    /**
     * <p>The ID of the project that currently owns this business glossary.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }

    /**
     * <p>The ID of the project that currently owns this business glossary.</p>
     */
    inline CreateGlossaryResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The ID of the project that currently owns this business glossary.</p>
     */
    inline CreateGlossaryResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that currently owns this business glossary.</p>
     */
    inline CreateGlossaryResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The status of this business glossary.</p>
     */
    inline const GlossaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this business glossary.</p>
     */
    inline void SetStatus(const GlossaryStatus& value) { m_status = value; }

    /**
     * <p>The status of this business glossary.</p>
     */
    inline void SetStatus(GlossaryStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithStatus(const GlossaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this business glossary.</p>
     */
    inline CreateGlossaryResult& WithStatus(GlossaryStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGlossaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGlossaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGlossaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
