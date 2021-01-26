/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/Hsm.h>
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
  class AWS_CLOUDHSMV2_API CreateHsmResult
  {
  public:
    CreateHsmResult();
    CreateHsmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateHsmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the HSM that was created.</p>
     */
    inline const Hsm& GetHsm() const{ return m_hsm; }

    /**
     * <p>Information about the HSM that was created.</p>
     */
    inline void SetHsm(const Hsm& value) { m_hsm = value; }

    /**
     * <p>Information about the HSM that was created.</p>
     */
    inline void SetHsm(Hsm&& value) { m_hsm = std::move(value); }

    /**
     * <p>Information about the HSM that was created.</p>
     */
    inline CreateHsmResult& WithHsm(const Hsm& value) { SetHsm(value); return *this;}

    /**
     * <p>Information about the HSM that was created.</p>
     */
    inline CreateHsmResult& WithHsm(Hsm&& value) { SetHsm(std::move(value)); return *this;}

  private:

    Hsm m_hsm;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
