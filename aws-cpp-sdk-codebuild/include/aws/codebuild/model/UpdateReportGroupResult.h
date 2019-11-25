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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ReportGroup.h>
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
namespace CodeBuild
{
namespace Model
{
  class AWS_CODEBUILD_API UpdateReportGroupResult
  {
  public:
    UpdateReportGroupResult();
    UpdateReportGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateReportGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the updated report group. </p>
     */
    inline const ReportGroup& GetReportGroup() const{ return m_reportGroup; }

    /**
     * <p> Information about the updated report group. </p>
     */
    inline void SetReportGroup(const ReportGroup& value) { m_reportGroup = value; }

    /**
     * <p> Information about the updated report group. </p>
     */
    inline void SetReportGroup(ReportGroup&& value) { m_reportGroup = std::move(value); }

    /**
     * <p> Information about the updated report group. </p>
     */
    inline UpdateReportGroupResult& WithReportGroup(const ReportGroup& value) { SetReportGroup(value); return *this;}

    /**
     * <p> Information about the updated report group. </p>
     */
    inline UpdateReportGroupResult& WithReportGroup(ReportGroup&& value) { SetReportGroup(std::move(value)); return *this;}

  private:

    ReportGroup m_reportGroup;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
