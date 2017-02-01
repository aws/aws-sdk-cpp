/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/vitalservices/VitalServices_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vitalservices/model/ClientDoctorService.h>

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
namespace VitalServices
{
namespace Model
{
  class AWS_VITALSERVICES_API getAllDoctorServicesResult
  {
  public:
    getAllDoctorServicesResult();
    getAllDoctorServicesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    getAllDoctorServicesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<ClientDoctorService>& GetServices() const{ return m_services; }

    
    inline void SetServices(const Aws::Vector<ClientDoctorService>& value) { m_services = value; }

    
    inline void SetServices(Aws::Vector<ClientDoctorService>&& value) { m_services = value; }

    
    inline getAllDoctorServicesResult& WithServices(const Aws::Vector<ClientDoctorService>& value) { SetServices(value); return *this;}

    
    inline getAllDoctorServicesResult& WithServices(Aws::Vector<ClientDoctorService>&& value) { SetServices(value); return *this;}

    
    inline getAllDoctorServicesResult& AddServices(const ClientDoctorService& value) { m_services.push_back(value); return *this; }

    
    inline getAllDoctorServicesResult& AddServices(ClientDoctorService&& value) { m_services.push_back(value); return *this; }

  private:
    Aws::Vector<ClientDoctorService> m_services;
  };

} // namespace Model
} // namespace VitalServices
} // namespace Aws
