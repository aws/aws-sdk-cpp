/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetQualificationScoreResult
  {
  public:
    AWS_MTURK_API GetQualificationScoreResult();
    AWS_MTURK_API GetQualificationScoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetQualificationScoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
