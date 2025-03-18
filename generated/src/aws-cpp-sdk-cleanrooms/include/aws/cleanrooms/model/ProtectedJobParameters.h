/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The parameters for the protected job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobParameters">AWS
   * API Reference</a></p>
   */
  class ProtectedJobParameters
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobParameters();
    AWS_CLEANROOMS_API ProtectedJobParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the analysis template.</p>
     */
    inline const Aws::String& GetAnalysisTemplateArn() const{ return m_analysisTemplateArn; }
    inline bool AnalysisTemplateArnHasBeenSet() const { return m_analysisTemplateArnHasBeenSet; }
    inline void SetAnalysisTemplateArn(const Aws::String& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = value; }
    inline void SetAnalysisTemplateArn(Aws::String&& value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn = std::move(value); }
    inline void SetAnalysisTemplateArn(const char* value) { m_analysisTemplateArnHasBeenSet = true; m_analysisTemplateArn.assign(value); }
    inline ProtectedJobParameters& WithAnalysisTemplateArn(const Aws::String& value) { SetAnalysisTemplateArn(value); return *this;}
    inline ProtectedJobParameters& WithAnalysisTemplateArn(Aws::String&& value) { SetAnalysisTemplateArn(std::move(value)); return *this;}
    inline ProtectedJobParameters& WithAnalysisTemplateArn(const char* value) { SetAnalysisTemplateArn(value); return *this;}
    ///@}
  private:

    Aws::String m_analysisTemplateArn;
    bool m_analysisTemplateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
