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
#include <aws/mturk-requester/model/Qualification.h>
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
  class AWS_MTURK_API GetQualificationScoreResult
  {
  public:
    GetQualificationScoreResult();
    GetQualificationScoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetQualificationScoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline const Qualification& GetQualification() const{ return m_qualification; }

    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline void SetQualification(const Qualification& value) { m_qualification = value; }

    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline void SetQualification(Qualification&& value) { m_qualification = std::move(value); }

    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline GetQualificationScoreResult& WithQualification(const Qualification& value) { SetQualification(value); return *this;}

    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline GetQualificationScoreResult& WithQualification(Qualification&& value) { SetQualification(std::move(value)); return *this;}

  private:

    Qualification m_qualification;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
