/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/VpcIngressConnection.h>
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
namespace AppRunner
{
namespace Model
{
  class UpdateVpcIngressConnectionResult
  {
  public:
    AWS_APPRUNNER_API UpdateVpcIngressConnectionResult();
    AWS_APPRUNNER_API UpdateVpcIngressConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API UpdateVpcIngressConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner VPC Ingress Connection resource that's
     * updated by this request.</p>
     */
    inline const VpcIngressConnection& GetVpcIngressConnection() const{ return m_vpcIngressConnection; }

    /**
     * <p>A description of the App Runner VPC Ingress Connection resource that's
     * updated by this request.</p>
     */
    inline void SetVpcIngressConnection(const VpcIngressConnection& value) { m_vpcIngressConnection = value; }

    /**
     * <p>A description of the App Runner VPC Ingress Connection resource that's
     * updated by this request.</p>
     */
    inline void SetVpcIngressConnection(VpcIngressConnection&& value) { m_vpcIngressConnection = std::move(value); }

    /**
     * <p>A description of the App Runner VPC Ingress Connection resource that's
     * updated by this request.</p>
     */
    inline UpdateVpcIngressConnectionResult& WithVpcIngressConnection(const VpcIngressConnection& value) { SetVpcIngressConnection(value); return *this;}

    /**
     * <p>A description of the App Runner VPC Ingress Connection resource that's
     * updated by this request.</p>
     */
    inline UpdateVpcIngressConnectionResult& WithVpcIngressConnection(VpcIngressConnection&& value) { SetVpcIngressConnection(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateVpcIngressConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateVpcIngressConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateVpcIngressConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VpcIngressConnection m_vpcIngressConnection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
