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
  /**
   * <p>Contains the output of the <a>CreateHAPartitionGroup</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CreateHapgResponse">AWS
   * API Reference</a></p>
   */
  class CreateHapgResult
  {
  public:
    AWS_CLOUDHSM_API CreateHapgResult();
    AWS_CLOUDHSM_API CreateHapgResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSM_API CreateHapgResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateHapgResult& WithHapgArn(const Aws::String& value) { SetHapgArn(value); return *this;}

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline CreateHapgResult& WithHapgArn(Aws::String&& value) { SetHapgArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the high-availability partition group.</p>
     */
    inline CreateHapgResult& WithHapgArn(const char* value) { SetHapgArn(value); return *this;}

  private:

    Aws::String m_hapgArn;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
