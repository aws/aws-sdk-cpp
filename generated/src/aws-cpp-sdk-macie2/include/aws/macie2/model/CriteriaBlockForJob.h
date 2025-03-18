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
    AWS_MACIE2_API CriteriaBlockForJob() = default;
    AWS_MACIE2_API CriteriaBlockForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API CriteriaBlockForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of conditions, one for each condition that determines which buckets
     * to include or exclude from the job. If you specify more than one condition,
     * Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline const Aws::Vector<CriteriaForJob>& GetAnd() const { return m_and; }
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }
    template<typename AndT = Aws::Vector<CriteriaForJob>>
    void SetAnd(AndT&& value) { m_andHasBeenSet = true; m_and = std::forward<AndT>(value); }
    template<typename AndT = Aws::Vector<CriteriaForJob>>
    CriteriaBlockForJob& WithAnd(AndT&& value) { SetAnd(std::forward<AndT>(value)); return *this;}
    template<typename AndT = CriteriaForJob>
    CriteriaBlockForJob& AddAnd(AndT&& value) { m_andHasBeenSet = true; m_and.emplace_back(std::forward<AndT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CriteriaForJob> m_and;
    bool m_andHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
