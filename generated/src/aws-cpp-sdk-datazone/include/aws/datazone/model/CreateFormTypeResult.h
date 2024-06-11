/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateFormTypeResult
  {
  public:
    AWS_DATAZONE_API CreateFormTypeResult();
    AWS_DATAZONE_API CreateFormTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateFormTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateFormTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateFormTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateFormTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline CreateFormTypeResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateFormTypeResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateFormTypeResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateFormTypeResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateFormTypeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateFormTypeResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this metadata form type was
     * originally created.</p>
     */
    inline const Aws::String& GetOriginDomainId() const{ return m_originDomainId; }
    inline void SetOriginDomainId(const Aws::String& value) { m_originDomainId = value; }
    inline void SetOriginDomainId(Aws::String&& value) { m_originDomainId = std::move(value); }
    inline void SetOriginDomainId(const char* value) { m_originDomainId.assign(value); }
    inline CreateFormTypeResult& WithOriginDomainId(const Aws::String& value) { SetOriginDomainId(value); return *this;}
    inline CreateFormTypeResult& WithOriginDomainId(Aws::String&& value) { SetOriginDomainId(std::move(value)); return *this;}
    inline CreateFormTypeResult& WithOriginDomainId(const char* value) { SetOriginDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project in which this Amazon DataZone metadata form type was
     * originally created.</p>
     */
    inline const Aws::String& GetOriginProjectId() const{ return m_originProjectId; }
    inline void SetOriginProjectId(const Aws::String& value) { m_originProjectId = value; }
    inline void SetOriginProjectId(Aws::String&& value) { m_originProjectId = std::move(value); }
    inline void SetOriginProjectId(const char* value) { m_originProjectId.assign(value); }
    inline CreateFormTypeResult& WithOriginProjectId(const Aws::String& value) { SetOriginProjectId(value); return *this;}
    inline CreateFormTypeResult& WithOriginProjectId(Aws::String&& value) { SetOriginProjectId(std::move(value)); return *this;}
    inline CreateFormTypeResult& WithOriginProjectId(const char* value) { SetOriginProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project that owns this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectId.assign(value); }
    inline CreateFormTypeResult& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline CreateFormTypeResult& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline CreateFormTypeResult& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of this Amazon DataZone metadata form type.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline void SetRevision(const Aws::String& value) { m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revision.assign(value); }
    inline CreateFormTypeResult& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline CreateFormTypeResult& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline CreateFormTypeResult& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateFormTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateFormTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateFormTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_name;

    Aws::String m_originDomainId;

    Aws::String m_originProjectId;

    Aws::String m_owningProjectId;

    Aws::String m_revision;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
