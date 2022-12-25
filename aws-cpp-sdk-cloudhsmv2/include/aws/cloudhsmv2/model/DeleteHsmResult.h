/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class DeleteHsmResult
  {
  public:
    AWS_CLOUDHSMV2_API DeleteHsmResult();
    AWS_CLOUDHSMV2_API DeleteHsmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API DeleteHsmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier (ID) of the HSM that was deleted.</p>
     */
    inline const Aws::String& GetHsmId() const{ return m_hsmId; }

    /**
     * <p>The identifier (ID) of the HSM that was deleted.</p>
     */
    inline void SetHsmId(const Aws::String& value) { m_hsmId = value; }

    /**
     * <p>The identifier (ID) of the HSM that was deleted.</p>
     */
    inline void SetHsmId(Aws::String&& value) { m_hsmId = std::move(value); }

    /**
     * <p>The identifier (ID) of the HSM that was deleted.</p>
     */
    inline void SetHsmId(const char* value) { m_hsmId.assign(value); }

    /**
     * <p>The identifier (ID) of the HSM that was deleted.</p>
     */
    inline DeleteHsmResult& WithHsmId(const Aws::String& value) { SetHsmId(value); return *this;}

    /**
     * <p>The identifier (ID) of the HSM that was deleted.</p>
     */
    inline DeleteHsmResult& WithHsmId(Aws::String&& value) { SetHsmId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the HSM that was deleted.</p>
     */
    inline DeleteHsmResult& WithHsmId(const char* value) { SetHsmId(value); return *this;}

  private:

    Aws::String m_hsmId;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
