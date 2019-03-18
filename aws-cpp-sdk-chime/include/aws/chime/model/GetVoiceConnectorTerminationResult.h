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
#include <aws/chime/model/Termination.h>
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
  class AWS_CHIME_API GetVoiceConnectorTerminationResult
  {
  public:
    GetVoiceConnectorTerminationResult();
    GetVoiceConnectorTerminationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetVoiceConnectorTerminationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The termination setting details.</p>
     */
    inline const Termination& GetTermination() const{ return m_termination; }

    /**
     * <p>The termination setting details.</p>
     */
    inline void SetTermination(const Termination& value) { m_termination = value; }

    /**
     * <p>The termination setting details.</p>
     */
    inline void SetTermination(Termination&& value) { m_termination = std::move(value); }

    /**
     * <p>The termination setting details.</p>
     */
    inline GetVoiceConnectorTerminationResult& WithTermination(const Termination& value) { SetTermination(value); return *this;}

    /**
     * <p>The termination setting details.</p>
     */
    inline GetVoiceConnectorTerminationResult& WithTermination(Termination&& value) { SetTermination(std::move(value)); return *this;}

  private:

    Termination m_termination;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
