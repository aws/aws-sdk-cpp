/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/appconfigdata/model/InvalidParameterProblem.h>
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
namespace AppConfigData
{
namespace Model
{

  /**
   * <p>Information about an invalid parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/InvalidParameterDetail">AWS
   * API Reference</a></p>
   */
  class InvalidParameterDetail
  {
  public:
    AWS_APPCONFIGDATA_API InvalidParameterDetail() = default;
    AWS_APPCONFIGDATA_API InvalidParameterDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API InvalidParameterDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIGDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason the parameter is invalid.</p>
     */
    inline InvalidParameterProblem GetProblem() const { return m_problem; }
    inline bool ProblemHasBeenSet() const { return m_problemHasBeenSet; }
    inline void SetProblem(InvalidParameterProblem value) { m_problemHasBeenSet = true; m_problem = value; }
    inline InvalidParameterDetail& WithProblem(InvalidParameterProblem value) { SetProblem(value); return *this;}
    ///@}
  private:

    InvalidParameterProblem m_problem{InvalidParameterProblem::NOT_SET};
    bool m_problemHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
