/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/CriteriaForJob.h>
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
   * for including or excluding S3 buckets from a classification job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CriteriaBlockForJob">AWS
   * API Reference</a></p>
   */
  class CriteriaBlockForJob
  {
  public:
    AWS_MACIE2_API CriteriaBlockForJob();
    AWS_MACIE2_API CriteriaBlockForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API CriteriaBlockForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline const Aws::Vector<CriteriaForJob>& GetAnd() const{ return m_and; }

    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline void SetAnd(const Aws::Vector<CriteriaForJob>& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline void SetAnd(Aws::Vector<CriteriaForJob>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline CriteriaBlockForJob& WithAnd(const Aws::Vector<CriteriaForJob>& value) { SetAnd(value); return *this;}

    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline CriteriaBlockForJob& WithAnd(Aws::Vector<CriteriaForJob>&& value) { SetAnd(std::move(value)); return *this;}

    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline CriteriaBlockForJob& AddAnd(const CriteriaForJob& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }

    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline CriteriaBlockForJob& AddAnd(CriteriaForJob&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CriteriaForJob> m_and;
    bool m_andHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
