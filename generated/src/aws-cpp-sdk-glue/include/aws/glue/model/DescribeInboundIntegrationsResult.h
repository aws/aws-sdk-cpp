/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/InboundIntegration.h>
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
namespace Glue
{
namespace Model
{
  class DescribeInboundIntegrationsResult
  {
  public:
    AWS_GLUE_API DescribeInboundIntegrationsResult();
    AWS_GLUE_API DescribeInboundIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DescribeInboundIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of inbound integrations.</p>
     */
    inline const Aws::Vector<InboundIntegration>& GetInboundIntegrations() const{ return m_inboundIntegrations; }
    inline void SetInboundIntegrations(const Aws::Vector<InboundIntegration>& value) { m_inboundIntegrations = value; }
    inline void SetInboundIntegrations(Aws::Vector<InboundIntegration>&& value) { m_inboundIntegrations = std::move(value); }
    inline DescribeInboundIntegrationsResult& WithInboundIntegrations(const Aws::Vector<InboundIntegration>& value) { SetInboundIntegrations(value); return *this;}
    inline DescribeInboundIntegrationsResult& WithInboundIntegrations(Aws::Vector<InboundIntegration>&& value) { SetInboundIntegrations(std::move(value)); return *this;}
    inline DescribeInboundIntegrationsResult& AddInboundIntegrations(const InboundIntegration& value) { m_inboundIntegrations.push_back(value); return *this; }
    inline DescribeInboundIntegrationsResult& AddInboundIntegrations(InboundIntegration&& value) { m_inboundIntegrations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeInboundIntegrationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeInboundIntegrationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeInboundIntegrationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInboundIntegrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInboundIntegrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInboundIntegrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InboundIntegration> m_inboundIntegrations;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
