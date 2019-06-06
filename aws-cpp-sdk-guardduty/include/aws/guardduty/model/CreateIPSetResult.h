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
  class AWS_GUARDDUTY_API CreateIPSetResult
  {
  public:
    CreateIPSetResult();
    CreateIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the IPSet resource.</p>
     */
    inline const Aws::String& GetIpSetId() const{ return m_ipSetId; }

    /**
     * <p>The ID of the IPSet resource.</p>
     */
    inline void SetIpSetId(const Aws::String& value) { m_ipSetId = value; }

    /**
     * <p>The ID of the IPSet resource.</p>
     */
    inline void SetIpSetId(Aws::String&& value) { m_ipSetId = std::move(value); }

    /**
     * <p>The ID of the IPSet resource.</p>
     */
    inline void SetIpSetId(const char* value) { m_ipSetId.assign(value); }

    /**
     * <p>The ID of the IPSet resource.</p>
     */
    inline CreateIPSetResult& WithIpSetId(const Aws::String& value) { SetIpSetId(value); return *this;}

    /**
     * <p>The ID of the IPSet resource.</p>
     */
    inline CreateIPSetResult& WithIpSetId(Aws::String&& value) { SetIpSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPSet resource.</p>
     */
    inline CreateIPSetResult& WithIpSetId(const char* value) { SetIpSetId(value); return *this;}

  private:

    Aws::String m_ipSetId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
