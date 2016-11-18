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
#include <aws/devicefarm/model/Run.h>

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
   * <p>Represents the results of your stop run attempt.</p>
   */
  class AWS_DEVICEFARM_API StopRunResult
  {
  public:
    StopRunResult();
    StopRunResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopRunResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Run& GetRun() const{ return m_run; }

    
    inline void SetRun(const Run& value) { m_run = value; }

    
    inline void SetRun(Run&& value) { m_run = value; }

    
    inline StopRunResult& WithRun(const Run& value) { SetRun(value); return *this;}

    
    inline StopRunResult& WithRun(Run&& value) { SetRun(value); return *this;}

  private:
    Run m_run;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
