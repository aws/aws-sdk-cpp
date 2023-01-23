/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Specifies one or more property- and tag-based conditions that define criteria
   * for including or excluding S3 objects from a classification job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/JobScopingBlock">AWS
   * API Reference</a></p>
   */
  class JobScopingBlock
  {
  public:
    AWS_MACIE2_API JobScopingBlock();
    AWS_MACIE2_API JobScopingBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API JobScopingBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of conditions, one for each property- or tag-based condition that
     * determines which objects to include or exclude from the job. If you specify more
     * than one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline const Aws::Vector<JobScopeTerm>& GetAnd() const{ return m_and; }

    /**
     * <p>An array of conditions, one for each property- or tag-based condition that
     * determines which objects to include or exclude from the job. If you specify more
     * than one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>An array of conditions, one for each property- or tag-based condition that
     * determines which objects to include or exclude from the job. If you specify more
     * than one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline void SetAnd(const Aws::Vector<JobScopeTerm>& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>An array of conditions, one for each property- or tag-based condition that
     * determines which objects to include or exclude from the job. If you specify more
     * than one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline void SetAnd(Aws::Vector<JobScopeTerm>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>An array of conditions, one for each property- or tag-based condition that
     * determines which objects to include or exclude from the job. If you specify more
     * than one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline JobScopingBlock& WithAnd(const Aws::Vector<JobScopeTerm>& value) { SetAnd(value); return *this;}

    /**
     * <p>An array of conditions, one for each property- or tag-based condition that
     * determines which objects to include or exclude from the job. If you specify more
     * than one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline JobScopingBlock& WithAnd(Aws::Vector<JobScopeTerm>&& value) { SetAnd(std::move(value)); return *this;}

    /**
     * <p>An array of conditions, one for each property- or tag-based condition that
     * determines which objects to include or exclude from the job. If you specify more
     * than one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline JobScopingBlock& AddAnd(const JobScopeTerm& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }

    /**
     * <p>An array of conditions, one for each property- or tag-based condition that
     * determines which objects to include or exclude from the job. If you specify more
     * than one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline JobScopingBlock& AddAnd(JobScopeTerm&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<JobScopeTerm> m_and;
    bool m_andHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
