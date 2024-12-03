/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Integration.h>
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
  class DescribeIntegrationsResult
  {
  public:
    AWS_GLUE_API DescribeIntegrationsResult();
    AWS_GLUE_API DescribeIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DescribeIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of zero-ETL integrations.</p>
     */
    inline const Aws::Vector<Integration>& GetIntegrations() const{ return m_integrations; }
    inline void SetIntegrations(const Aws::Vector<Integration>& value) { m_integrations = value; }
    inline void SetIntegrations(Aws::Vector<Integration>&& value) { m_integrations = std::move(value); }
    inline DescribeIntegrationsResult& WithIntegrations(const Aws::Vector<Integration>& value) { SetIntegrations(value); return *this;}
    inline DescribeIntegrationsResult& WithIntegrations(Aws::Vector<Integration>&& value) { SetIntegrations(std::move(value)); return *this;}
    inline DescribeIntegrationsResult& AddIntegrations(const Integration& value) { m_integrations.push_back(value); return *this; }
    inline DescribeIntegrationsResult& AddIntegrations(Integration&& value) { m_integrations.push_back(std::move(value)); return *this; }
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
    inline DescribeIntegrationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeIntegrationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeIntegrationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeIntegrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeIntegrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeIntegrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Integration> m_integrations;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
