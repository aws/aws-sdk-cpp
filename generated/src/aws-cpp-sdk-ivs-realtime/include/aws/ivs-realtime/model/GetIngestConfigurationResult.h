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
  class GetIngestConfigurationResult
  {
  public:
    AWS_IVSREALTIME_API GetIngestConfigurationResult() = default;
    AWS_IVSREALTIME_API GetIngestConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API GetIngestConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IngestConfiguration that was returned.</p>
     */
    inline const IngestConfiguration& GetIngestConfiguration() const { return m_ingestConfiguration; }
    template<typename IngestConfigurationT = IngestConfiguration>
    void SetIngestConfiguration(IngestConfigurationT&& value) { m_ingestConfigurationHasBeenSet = true; m_ingestConfiguration = std::forward<IngestConfigurationT>(value); }
    template<typename IngestConfigurationT = IngestConfiguration>
    GetIngestConfigurationResult& WithIngestConfiguration(IngestConfigurationT&& value) { SetIngestConfiguration(std::forward<IngestConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIngestConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IngestConfiguration m_ingestConfiguration;
    bool m_ingestConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
