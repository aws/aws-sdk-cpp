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
#include <aws/mturk-requester/model/HIT.h>
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
  class AWS_MTURK_API CreateHITWithHITTypeResult
  {
  public:
    CreateHITWithHITTypeResult();
    CreateHITWithHITTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateHITWithHITTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Contains the newly created HIT data. For a description of the HIT data
     * structure as it appears in responses, see the HIT Data Structure documentation.
     * </p>
     */
    inline const HIT& GetHIT() const{ return m_hIT; }

    /**
     * <p> Contains the newly created HIT data. For a description of the HIT data
     * structure as it appears in responses, see the HIT Data Structure documentation.
     * </p>
     */
    inline void SetHIT(const HIT& value) { m_hIT = value; }

    /**
     * <p> Contains the newly created HIT data. For a description of the HIT data
     * structure as it appears in responses, see the HIT Data Structure documentation.
     * </p>
     */
    inline void SetHIT(HIT&& value) { m_hIT = std::move(value); }

    /**
     * <p> Contains the newly created HIT data. For a description of the HIT data
     * structure as it appears in responses, see the HIT Data Structure documentation.
     * </p>
     */
    inline CreateHITWithHITTypeResult& WithHIT(const HIT& value) { SetHIT(value); return *this;}

    /**
     * <p> Contains the newly created HIT data. For a description of the HIT data
     * structure as it appears in responses, see the HIT Data Structure documentation.
     * </p>
     */
    inline CreateHITWithHITTypeResult& WithHIT(HIT&& value) { SetHIT(std::move(value)); return *this;}

  private:

    HIT m_hIT;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
