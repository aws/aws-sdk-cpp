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
  class CreateDomainResult
  {
  public:
    AWS_VOICEID_API CreateDomainResult();
    AWS_VOICEID_API CreateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API CreateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the newly created domain.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>Information about the newly created domain.</p>
     */
    inline void SetDomain(const Domain& value) { m_domain = value; }

    /**
     * <p>Information about the newly created domain.</p>
     */
    inline void SetDomain(Domain&& value) { m_domain = std::move(value); }

    /**
     * <p>Information about the newly created domain.</p>
     */
    inline CreateDomainResult& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>Information about the newly created domain.</p>
     */
    inline CreateDomainResult& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}

  private:

    Domain m_domain;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
