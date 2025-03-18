/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/CvssScoreDetails.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Information about the Amazon Inspector score given to a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ScoreDetails">AWS
   * API Reference</a></p>
   */
  class ScoreDetails
  {
  public:
    AWS_ECR_API ScoreDetails() = default;
    AWS_ECR_API ScoreDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ScoreDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details about the CVSS score given to a finding.</p>
     */
    inline const CvssScoreDetails& GetCvss() const { return m_cvss; }
    inline bool CvssHasBeenSet() const { return m_cvssHasBeenSet; }
    template<typename CvssT = CvssScoreDetails>
    void SetCvss(CvssT&& value) { m_cvssHasBeenSet = true; m_cvss = std::forward<CvssT>(value); }
    template<typename CvssT = CvssScoreDetails>
    ScoreDetails& WithCvss(CvssT&& value) { SetCvss(std::forward<CvssT>(value)); return *this;}
    ///@}
  private:

    CvssScoreDetails m_cvss;
    bool m_cvssHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
