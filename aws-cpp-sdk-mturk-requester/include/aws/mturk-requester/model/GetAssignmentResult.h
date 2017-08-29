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
#include <aws/mturk-requester/model/Assignment.h>
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
  class AWS_MTURK_API GetAssignmentResult
  {
  public:
    GetAssignmentResult();
    GetAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline const Assignment& GetAssignment() const{ return m_assignment; }

    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline void SetAssignment(const Assignment& value) { m_assignment = value; }

    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline void SetAssignment(Assignment&& value) { m_assignment = std::move(value); }

    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline GetAssignmentResult& WithAssignment(const Assignment& value) { SetAssignment(value); return *this;}

    /**
     * <p> The assignment. The response includes one Assignment element. </p>
     */
    inline GetAssignmentResult& WithAssignment(Assignment&& value) { SetAssignment(std::move(value)); return *this;}


    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline const HIT& GetHIT() const{ return m_hIT; }

    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline void SetHIT(const HIT& value) { m_hIT = value; }

    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline void SetHIT(HIT&& value) { m_hIT = std::move(value); }

    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline GetAssignmentResult& WithHIT(const HIT& value) { SetHIT(value); return *this;}

    /**
     * <p> The HIT associated with this assignment. The response includes one HIT
     * element.</p>
     */
    inline GetAssignmentResult& WithHIT(HIT&& value) { SetHIT(std::move(value)); return *this;}

  private:

    Assignment m_assignment;

    HIT m_hIT;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
