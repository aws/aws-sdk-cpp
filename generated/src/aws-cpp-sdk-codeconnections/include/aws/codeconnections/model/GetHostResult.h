/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/ProviderType.h>
#include <aws/codeconnections/model/VpcConfiguration.h>
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
namespace CodeConnections
{
namespace Model
{
  class GetHostResult
  {
  public:
    AWS_CODECONNECTIONS_API GetHostResult();
    AWS_CODECONNECTIONS_API GetHostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECONNECTIONS_API GetHostResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the requested host.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetHostResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetHostResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetHostResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the requested host.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline GetHostResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GetHostResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GetHostResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider type of the requested host, such as GitHub Enterprise
     * Server.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }
    inline void SetProviderType(const ProviderType& value) { m_providerType = value; }
    inline void SetProviderType(ProviderType&& value) { m_providerType = std::move(value); }
    inline GetHostResult& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}
    inline GetHostResult& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of the infrastructure represented by the requested host.</p>
     */
    inline const Aws::String& GetProviderEndpoint() const{ return m_providerEndpoint; }
    inline void SetProviderEndpoint(const Aws::String& value) { m_providerEndpoint = value; }
    inline void SetProviderEndpoint(Aws::String&& value) { m_providerEndpoint = std::move(value); }
    inline void SetProviderEndpoint(const char* value) { m_providerEndpoint.assign(value); }
    inline GetHostResult& WithProviderEndpoint(const Aws::String& value) { SetProviderEndpoint(value); return *this;}
    inline GetHostResult& WithProviderEndpoint(Aws::String&& value) { SetProviderEndpoint(std::move(value)); return *this;}
    inline GetHostResult& WithProviderEndpoint(const char* value) { SetProviderEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC configuration of the requested host.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfiguration = std::move(value); }
    inline GetHostResult& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline GetHostResult& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetHostResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetHostResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetHostResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_status;

    ProviderType m_providerType;

    Aws::String m_providerEndpoint;

    VpcConfiguration m_vpcConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
