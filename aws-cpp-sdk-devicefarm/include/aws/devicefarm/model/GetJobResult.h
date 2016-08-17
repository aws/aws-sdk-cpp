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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Job.h>

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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a get job request.</p>
   */
  class AWS_DEVICEFARM_API GetJobResult
  {
  public:
    GetJobResult();
    GetJobResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetJobResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Job& GetJob() const{ return m_job; }

    
    inline void SetJob(const Job& value) { m_job = value; }

    
    inline void SetJob(Job&& value) { m_job = value; }

    
    inline GetJobResult& WithJob(const Job& value) { SetJob(value); return *this;}

    
    inline GetJobResult& WithJob(Job&& value) { SetJob(value); return *this;}

  private:
    Job m_job;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
