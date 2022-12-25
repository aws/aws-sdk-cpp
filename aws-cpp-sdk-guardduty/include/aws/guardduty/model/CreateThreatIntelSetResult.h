/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GuardDuty
{
namespace Model
{
  class CreateThreatIntelSetResult
  {
  public:
    AWS_GUARDDUTY_API CreateThreatIntelSetResult();
    AWS_GUARDDUTY_API CreateThreatIntelSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreateThreatIntelSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the ThreatIntelSet resource.</p>
     */
    inline const Aws::String& GetThreatIntelSetId() const{ return m_threatIntelSetId; }

    /**
     * <p>The ID of the ThreatIntelSet resource.</p>
     */
    inline void SetThreatIntelSetId(const Aws::String& value) { m_threatIntelSetId = value; }

    /**
     * <p>The ID of the ThreatIntelSet resource.</p>
     */
    inline void SetThreatIntelSetId(Aws::String&& value) { m_threatIntelSetId = std::move(value); }

    /**
     * <p>The ID of the ThreatIntelSet resource.</p>
     */
    inline void SetThreatIntelSetId(const char* value) { m_threatIntelSetId.assign(value); }

    /**
     * <p>The ID of the ThreatIntelSet resource.</p>
     */
    inline CreateThreatIntelSetResult& WithThreatIntelSetId(const Aws::String& value) { SetThreatIntelSetId(value); return *this;}

    /**
     * <p>The ID of the ThreatIntelSet resource.</p>
     */
    inline CreateThreatIntelSetResult& WithThreatIntelSetId(Aws::String&& value) { SetThreatIntelSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the ThreatIntelSet resource.</p>
     */
    inline CreateThreatIntelSetResult& WithThreatIntelSetId(const char* value) { SetThreatIntelSetId(value); return *this;}

  private:

    Aws::String m_threatIntelSetId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
