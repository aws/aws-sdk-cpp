/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/Problem.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>A collection of one or more problems, grouped by their result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UniqueProblem">AWS
   * API Reference</a></p>
   */
  class UniqueProblem
  {
  public:
    AWS_DEVICEFARM_API UniqueProblem() = default;
    AWS_DEVICEFARM_API UniqueProblem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API UniqueProblem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UniqueProblem& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the problems.</p>
     */
    inline const Aws::Vector<Problem>& GetProblems() const { return m_problems; }
    inline bool ProblemsHasBeenSet() const { return m_problemsHasBeenSet; }
    template<typename ProblemsT = Aws::Vector<Problem>>
    void SetProblems(ProblemsT&& value) { m_problemsHasBeenSet = true; m_problems = std::forward<ProblemsT>(value); }
    template<typename ProblemsT = Aws::Vector<Problem>>
    UniqueProblem& WithProblems(ProblemsT&& value) { SetProblems(std::forward<ProblemsT>(value)); return *this;}
    template<typename ProblemsT = Problem>
    UniqueProblem& AddProblems(ProblemsT&& value) { m_problemsHasBeenSet = true; m_problems.emplace_back(std::forward<ProblemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Problem> m_problems;
    bool m_problemsHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
