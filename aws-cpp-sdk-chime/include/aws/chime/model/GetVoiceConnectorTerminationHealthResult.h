/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/TerminationHealth.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetVoiceConnectorTerminationHealthResult
  {
  public:
    GetVoiceConnectorTerminationHealthResult();
    GetVoiceConnectorTerminationHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVoiceConnectorTerminationHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The termination health details.</p>
     */
    inline const TerminationHealth& GetTerminationHealth() const{ return m_terminationHealth; }

    /**
     * <p>The termination health details.</p>
     */
    inline void SetTerminationHealth(const TerminationHealth& value) { m_terminationHealth = value; }

    /**
     * <p>The termination health details.</p>
     */
    inline void SetTerminationHealth(TerminationHealth&& value) { m_terminationHealth = std::move(value); }

    /**
     * <p>The termination health details.</p>
     */
    inline GetVoiceConnectorTerminationHealthResult& WithTerminationHealth(const TerminationHealth& value) { SetTerminationHealth(value); return *this;}

    /**
     * <p>The termination health details.</p>
     */
    inline GetVoiceConnectorTerminationHealthResult& WithTerminationHealth(TerminationHealth&& value) { SetTerminationHealth(std::move(value)); return *this;}

  private:

    TerminationHealth m_terminationHealth;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
