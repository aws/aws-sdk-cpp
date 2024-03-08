/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/DomainStatus.h>
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
  class DeleteDomainResult
  {
  public:
    AWS_DATAZONE_API DeleteDomainResult();
    AWS_DATAZONE_API DeleteDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API DeleteDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the domain.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the domain.</p>
     */
    inline void SetStatus(const DomainStatus& value) { m_status = value; }

    /**
     * <p>The status of the domain.</p>
     */
    inline void SetStatus(DomainStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the domain.</p>
     */
    inline DeleteDomainResult& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the domain.</p>
     */
    inline DeleteDomainResult& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
