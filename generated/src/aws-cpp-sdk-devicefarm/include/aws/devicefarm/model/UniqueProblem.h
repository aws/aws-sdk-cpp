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
    AWS_DEVICEFARM_API UniqueProblem();
    AWS_DEVICEFARM_API UniqueProblem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API UniqueProblem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline UniqueProblem& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline UniqueProblem& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline UniqueProblem& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the problems.</p>
     */
    inline const Aws::Vector<Problem>& GetProblems() const{ return m_problems; }
    inline bool ProblemsHasBeenSet() const { return m_problemsHasBeenSet; }
    inline void SetProblems(const Aws::Vector<Problem>& value) { m_problemsHasBeenSet = true; m_problems = value; }
    inline void SetProblems(Aws::Vector<Problem>&& value) { m_problemsHasBeenSet = true; m_problems = std::move(value); }
    inline UniqueProblem& WithProblems(const Aws::Vector<Problem>& value) { SetProblems(value); return *this;}
    inline UniqueProblem& WithProblems(Aws::Vector<Problem>&& value) { SetProblems(std::move(value)); return *this;}
    inline UniqueProblem& AddProblems(const Problem& value) { m_problemsHasBeenSet = true; m_problems.push_back(value); return *this; }
    inline UniqueProblem& AddProblems(Problem&& value) { m_problemsHasBeenSet = true; m_problems.push_back(std::move(value)); return *this; }
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
