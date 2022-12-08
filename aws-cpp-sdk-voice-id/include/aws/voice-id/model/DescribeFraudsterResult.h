/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/Fraudster.h>
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
namespace VoiceID
{
namespace Model
{
  class DescribeFraudsterResult
  {
  public:
    AWS_VOICEID_API DescribeFraudsterResult();
    AWS_VOICEID_API DescribeFraudsterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API DescribeFraudsterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline const Fraudster& GetFraudster() const{ return m_fraudster; }

    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline void SetFraudster(const Fraudster& value) { m_fraudster = value; }

    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline void SetFraudster(Fraudster&& value) { m_fraudster = std::move(value); }

    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline DescribeFraudsterResult& WithFraudster(const Fraudster& value) { SetFraudster(value); return *this;}

    /**
     * <p>Information about the specified fraudster.</p>
     */
    inline DescribeFraudsterResult& WithFraudster(Fraudster&& value) { SetFraudster(std::move(value)); return *this;}

  private:

    Fraudster m_fraudster;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
