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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{
  class AWS_MTURK_API CreateHITTypeResult
  {
  public:
    CreateHITTypeResult();
    CreateHITTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateHITTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline const Aws::String& GetHITTypeId() const{ return m_hITTypeId; }

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline void SetHITTypeId(const Aws::String& value) { m_hITTypeId = value; }

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline void SetHITTypeId(Aws::String&& value) { m_hITTypeId = std::move(value); }

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline void SetHITTypeId(const char* value) { m_hITTypeId.assign(value); }

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline CreateHITTypeResult& WithHITTypeId(const Aws::String& value) { SetHITTypeId(value); return *this;}

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline CreateHITTypeResult& WithHITTypeId(Aws::String&& value) { SetHITTypeId(std::move(value)); return *this;}

    /**
     * <p> The ID of the newly registered HIT type.</p>
     */
    inline CreateHITTypeResult& WithHITTypeId(const char* value) { SetHITTypeId(value); return *this;}

  private:

    Aws::String m_hITTypeId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
