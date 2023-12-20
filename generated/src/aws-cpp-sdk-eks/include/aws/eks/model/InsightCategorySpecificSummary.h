/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/DeprecationDetail.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Summary information that relates to the category of the insight. Currently
   * only returned with certain insights having category
   * <code>UPGRADE_READINESS</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/InsightCategorySpecificSummary">AWS
   * API Reference</a></p>
   */
  class InsightCategorySpecificSummary
  {
  public:
    AWS_EKS_API InsightCategorySpecificSummary();
    AWS_EKS_API InsightCategorySpecificSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightCategorySpecificSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline const Aws::Vector<DeprecationDetail>& GetDeprecationDetails() const{ return m_deprecationDetails; }

    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline bool DeprecationDetailsHasBeenSet() const { return m_deprecationDetailsHasBeenSet; }

    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline void SetDeprecationDetails(const Aws::Vector<DeprecationDetail>& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails = value; }

    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline void SetDeprecationDetails(Aws::Vector<DeprecationDetail>&& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails = std::move(value); }

    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline InsightCategorySpecificSummary& WithDeprecationDetails(const Aws::Vector<DeprecationDetail>& value) { SetDeprecationDetails(value); return *this;}

    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline InsightCategorySpecificSummary& WithDeprecationDetails(Aws::Vector<DeprecationDetail>&& value) { SetDeprecationDetails(std::move(value)); return *this;}

    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline InsightCategorySpecificSummary& AddDeprecationDetails(const DeprecationDetail& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails.push_back(value); return *this; }

    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline InsightCategorySpecificSummary& AddDeprecationDetails(DeprecationDetail&& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeprecationDetail> m_deprecationDetails;
    bool m_deprecationDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
