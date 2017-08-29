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
#include <aws/mturk-requester/model/QualificationType.h>
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
  class AWS_MTURK_API GetQualificationTypeResult
  {
  public:
    GetQualificationTypeResult();
    GetQualificationTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetQualificationTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned Qualification Type</p>
     */
    inline const QualificationType& GetQualificationType() const{ return m_qualificationType; }

    /**
     * <p> The returned Qualification Type</p>
     */
    inline void SetQualificationType(const QualificationType& value) { m_qualificationType = value; }

    /**
     * <p> The returned Qualification Type</p>
     */
    inline void SetQualificationType(QualificationType&& value) { m_qualificationType = std::move(value); }

    /**
     * <p> The returned Qualification Type</p>
     */
    inline GetQualificationTypeResult& WithQualificationType(const QualificationType& value) { SetQualificationType(value); return *this;}

    /**
     * <p> The returned Qualification Type</p>
     */
    inline GetQualificationTypeResult& WithQualificationType(QualificationType&& value) { SetQualificationType(std::move(value)); return *this;}

  private:

    QualificationType m_qualificationType;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
