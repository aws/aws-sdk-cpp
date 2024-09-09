/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/IngestConfiguration.h>
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
namespace ivsrealtime
{
namespace Model
{
  class UpdateIngestConfigurationResult
  {
  public:
    AWS_IVSREALTIME_API UpdateIngestConfigurationResult();
    AWS_IVSREALTIME_API UpdateIngestConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API UpdateIngestConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated IngestConfiguration.</p>
     */
    inline const IngestConfiguration& GetIngestConfiguration() const{ return m_ingestConfiguration; }
    inline void SetIngestConfiguration(const IngestConfiguration& value) { m_ingestConfiguration = value; }
    inline void SetIngestConfiguration(IngestConfiguration&& value) { m_ingestConfiguration = std::move(value); }
    inline UpdateIngestConfigurationResult& WithIngestConfiguration(const IngestConfiguration& value) { SetIngestConfiguration(value); return *this;}
    inline UpdateIngestConfigurationResult& WithIngestConfiguration(IngestConfiguration&& value) { SetIngestConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateIngestConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateIngestConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateIngestConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IngestConfiguration m_ingestConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
