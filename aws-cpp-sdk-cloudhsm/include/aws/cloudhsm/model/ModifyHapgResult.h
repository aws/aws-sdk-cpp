/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
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
namespace CloudHSM
{
namespace Model
{
  class ModifyHapgResult
  {
  public:
    AWS_CLOUDHSM_API ModifyHapgResult();
    AWS_CLOUDHSM_API ModifyHapgResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API ModifyHapgResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline const Aws::String& GetHapgArn() const{ return m_hapgArn; }

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline void SetHapgArn(const Aws::String& value) { m_hapgArn = value; }

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline void SetHapgArn(Aws::String&& value) { m_hapgArn = std::move(value); }

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline void SetHapgArn(const char* value) { m_hapgArn.assign(value); }

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline ModifyHapgResult& WithHapgArn(const Aws::String& value) { SetHapgArn(value); return *this;}

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline ModifyHapgResult& WithHapgArn(Aws::String&& value) { SetHapgArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline ModifyHapgResult& WithHapgArn(const char* value) { SetHapgArn(value); return *this;}

  private:

    Aws::String m_hapgArn;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
