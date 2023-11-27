/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{
  class StartInvestigationResult
  {
  public:
    AWS_DETECTIVE_API StartInvestigationResult();
    AWS_DETECTIVE_API StartInvestigationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API StartInvestigationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline const Aws::String& GetInvestigationId() const{ return m_investigationId; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const Aws::String& value) { m_investigationId = value; }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(Aws::String&& value) { m_investigationId = std::move(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline void SetInvestigationId(const char* value) { m_investigationId.assign(value); }

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline StartInvestigationResult& WithInvestigationId(const Aws::String& value) { SetInvestigationId(value); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline StartInvestigationResult& WithInvestigationId(Aws::String&& value) { SetInvestigationId(std::move(value)); return *this;}

    /**
     * <p>The investigation ID of the investigation report.</p>
     */
    inline StartInvestigationResult& WithInvestigationId(const char* value) { SetInvestigationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartInvestigationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartInvestigationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartInvestigationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_investigationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
