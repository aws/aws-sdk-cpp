/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains the unmodified data for the report. For more information, see
   * .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ReportWithRawData">AWS
   * API Reference</a></p>
   */
  class ReportWithRawData
  {
  public:
    AWS_CODEBUILD_API ReportWithRawData() = default;
    AWS_CODEBUILD_API ReportWithRawData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ReportWithRawData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the report.</p>
     */
    inline const Aws::String& GetReportArn() const { return m_reportArn; }
    inline bool ReportArnHasBeenSet() const { return m_reportArnHasBeenSet; }
    template<typename ReportArnT = Aws::String>
    void SetReportArn(ReportArnT&& value) { m_reportArnHasBeenSet = true; m_reportArn = std::forward<ReportArnT>(value); }
    template<typename ReportArnT = Aws::String>
    ReportWithRawData& WithReportArn(ReportArnT&& value) { SetReportArn(std::forward<ReportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the requested data field from the report.</p>
     */
    inline const Aws::String& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::String>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::String>
    ReportWithRawData& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportArn;
    bool m_reportArnHasBeenSet = false;

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
