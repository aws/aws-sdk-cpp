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
  class AWS_CLOUDHSMV2_API DeleteHsmResult
  {
  public:
    DeleteHsmResult();
    DeleteHsmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteHsmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
