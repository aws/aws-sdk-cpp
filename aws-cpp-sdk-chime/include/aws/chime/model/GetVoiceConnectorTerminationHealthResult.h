/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetVoiceConnectorTerminationHealthResult
  {
  public:
    AWS_CHIME_API GetVoiceConnectorTerminationHealthResult();
    AWS_CHIME_API GetVoiceConnectorTerminationHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetVoiceConnectorTerminationHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
