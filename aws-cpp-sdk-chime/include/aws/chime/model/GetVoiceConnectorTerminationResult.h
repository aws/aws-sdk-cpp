/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetVoiceConnectorTerminationResult
  {
  public:
    AWS_CHIME_API GetVoiceConnectorTerminationResult();
    AWS_CHIME_API GetVoiceConnectorTerminationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetVoiceConnectorTerminationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
