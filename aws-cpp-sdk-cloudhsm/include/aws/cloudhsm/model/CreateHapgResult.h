﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_CLOUDHSM_API CreateHapgResult
  {
  public:
    CreateHapgResult();
    CreateHapgResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateHapgResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetHapgArn(Aws::String&& value) { m_hapgArn = value; }

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
    inline CreateHapgResult& WithHapgArn(Aws::String&& value) { SetHapgArn(value); return *this;}

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
