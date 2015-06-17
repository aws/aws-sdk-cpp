/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/codedeploy/model/StopStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API StopDeploymentResult
  {
  public:
    StopDeploymentResult();
    StopDeploymentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopDeploymentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const StopStatus& GetStatus() const{ return m_status; }
    
    inline void SetStatus(const StopStatus& value) { m_status = value; }

    
    inline StopDeploymentResult&  WithStatus(const StopStatus& value) { SetStatus(value); return *this;}

    
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    
    inline StopDeploymentResult&  WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    
    inline StopDeploymentResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:
    StopStatus m_status;
    Aws::String m_statusMessage;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
