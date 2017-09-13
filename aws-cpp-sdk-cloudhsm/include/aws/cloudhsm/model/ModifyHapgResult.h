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
  class AWS_CLOUDHSM_API ModifyHapgResult
  {
  public:
    ModifyHapgResult();
    ModifyHapgResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ModifyHapgResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
