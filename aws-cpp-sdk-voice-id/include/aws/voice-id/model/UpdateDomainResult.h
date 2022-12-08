/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/Domain.h>
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
  class UpdateDomainResult
  {
  public:
    AWS_VOICEID_API UpdateDomainResult();
    AWS_VOICEID_API UpdateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API UpdateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the updated domain</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>Details about the updated domain</p>
     */
    inline void SetDomain(const Domain& value) { m_domain = value; }

    /**
     * <p>Details about the updated domain</p>
     */
    inline void SetDomain(Domain&& value) { m_domain = std::move(value); }

    /**
     * <p>Details about the updated domain</p>
     */
    inline UpdateDomainResult& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>Details about the updated domain</p>
     */
    inline UpdateDomainResult& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}

  private:

    Domain m_domain;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
