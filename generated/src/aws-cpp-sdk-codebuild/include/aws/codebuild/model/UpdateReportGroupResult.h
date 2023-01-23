/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateReportGroupResult
  {
  public:
    AWS_CODEBUILD_API UpdateReportGroupResult();
    AWS_CODEBUILD_API UpdateReportGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API UpdateReportGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
