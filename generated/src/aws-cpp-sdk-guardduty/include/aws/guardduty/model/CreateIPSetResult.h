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
  class CreateIPSetResult
  {
  public:
    AWS_GUARDDUTY_API CreateIPSetResult();
    AWS_GUARDDUTY_API CreateIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreateIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
