/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ProblemDetail.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The flow is not valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InvalidContactFlowException">AWS
   * API Reference</a></p>
   */
  class InvalidContactFlowException
  {
  public:
    AWS_CONNECT_API InvalidContactFlowException() = default;
    AWS_CONNECT_API InvalidContactFlowException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InvalidContactFlowException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The problems with the flow. Please fix before trying again.</p>
     */
    inline const Aws::Vector<ProblemDetail>& GetProblems() const { return m_problems; }
    inline bool ProblemsHasBeenSet() const { return m_problemsHasBeenSet; }
    template<typename ProblemsT = Aws::Vector<ProblemDetail>>
    void SetProblems(ProblemsT&& value) { m_problemsHasBeenSet = true; m_problems = std::forward<ProblemsT>(value); }
    template<typename ProblemsT = Aws::Vector<ProblemDetail>>
    InvalidContactFlowException& WithProblems(ProblemsT&& value) { SetProblems(std::forward<ProblemsT>(value)); return *this;}
    template<typename ProblemsT = ProblemDetail>
    InvalidContactFlowException& AddProblems(ProblemsT&& value) { m_problemsHasBeenSet = true; m_problems.emplace_back(std::forward<ProblemsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ProblemDetail> m_problems;
    bool m_problemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
