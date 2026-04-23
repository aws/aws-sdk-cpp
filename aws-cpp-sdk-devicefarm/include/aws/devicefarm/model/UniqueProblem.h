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
  class AWS_DEVICEFARM_API UniqueProblem
  {
  public:
    UniqueProblem();
    UniqueProblem(Aws::Utils::Json::JsonView jsonValue);
    UniqueProblem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline UniqueProblem& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline UniqueProblem& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the unique problems' result.</p>
     */
    inline UniqueProblem& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Information about the problems.</p>
     */
    inline const Aws::Vector<Problem>& GetProblems() const{ return m_problems; }

    /**
     * <p>Information about the problems.</p>
     */
    inline bool ProblemsHasBeenSet() const { return m_problemsHasBeenSet; }

    /**
     * <p>Information about the problems.</p>
     */
    inline void SetProblems(const Aws::Vector<Problem>& value) { m_problemsHasBeenSet = true; m_problems = value; }

    /**
     * <p>Information about the problems.</p>
     */
    inline void SetProblems(Aws::Vector<Problem>&& value) { m_problemsHasBeenSet = true; m_problems = std::move(value); }

    /**
     * <p>Information about the problems.</p>
     */
    inline UniqueProblem& WithProblems(const Aws::Vector<Problem>& value) { SetProblems(value); return *this;}

    /**
     * <p>Information about the problems.</p>
     */
    inline UniqueProblem& WithProblems(Aws::Vector<Problem>&& value) { SetProblems(std::move(value)); return *this;}

    /**
     * <p>Information about the problems.</p>
     */
    inline UniqueProblem& AddProblems(const Problem& value) { m_problemsHasBeenSet = true; m_problems.push_back(value); return *this; }

    /**
     * <p>Information about the problems.</p>
     */
    inline UniqueProblem& AddProblems(Problem&& value) { m_problemsHasBeenSet = true; m_problems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Vector<Problem> m_problems;
    bool m_problemsHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
