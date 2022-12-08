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
   * <p>The problems with the module. Please fix before trying again.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InvalidContactFlowModuleException">AWS
   * API Reference</a></p>
   */
  class InvalidContactFlowModuleException
  {
  public:
    AWS_CONNECT_API InvalidContactFlowModuleException();
    AWS_CONNECT_API InvalidContactFlowModuleException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InvalidContactFlowModuleException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<ProblemDetail>& GetProblems() const{ return m_problems; }

    
    inline bool ProblemsHasBeenSet() const { return m_problemsHasBeenSet; }

    
    inline void SetProblems(const Aws::Vector<ProblemDetail>& value) { m_problemsHasBeenSet = true; m_problems = value; }

    
    inline void SetProblems(Aws::Vector<ProblemDetail>&& value) { m_problemsHasBeenSet = true; m_problems = std::move(value); }

    
    inline InvalidContactFlowModuleException& WithProblems(const Aws::Vector<ProblemDetail>& value) { SetProblems(value); return *this;}

    
    inline InvalidContactFlowModuleException& WithProblems(Aws::Vector<ProblemDetail>&& value) { SetProblems(std::move(value)); return *this;}

    
    inline InvalidContactFlowModuleException& AddProblems(const ProblemDetail& value) { m_problemsHasBeenSet = true; m_problems.push_back(value); return *this; }

    
    inline InvalidContactFlowModuleException& AddProblems(ProblemDetail&& value) { m_problemsHasBeenSet = true; m_problems.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ProblemDetail> m_problems;
    bool m_problemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
