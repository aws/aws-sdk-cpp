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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/JobScopeTerm.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/JobScopingBlock">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API JobScopingBlock
  {
  public:
    JobScopingBlock();
    JobScopingBlock(Aws::Utils::Json::JsonView jsonValue);
    JobScopingBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::Vector<JobScopeTerm>& GetAnd() const{ return m_and; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAnd(const Aws::Vector<JobScopeTerm>& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAnd(Aws::Vector<JobScopeTerm>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline JobScopingBlock& WithAnd(const Aws::Vector<JobScopeTerm>& value) { SetAnd(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline JobScopingBlock& WithAnd(Aws::Vector<JobScopeTerm>&& value) { SetAnd(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline JobScopingBlock& AddAnd(const JobScopeTerm& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline JobScopingBlock& AddAnd(JobScopeTerm&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<JobScopeTerm> m_and;
    bool m_andHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
