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
  class AWS_GUARDDUTY_API CreateThreatIntelSetResult
  {
  public:
    CreateThreatIntelSetResult();
    CreateThreatIntelSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateThreatIntelSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
