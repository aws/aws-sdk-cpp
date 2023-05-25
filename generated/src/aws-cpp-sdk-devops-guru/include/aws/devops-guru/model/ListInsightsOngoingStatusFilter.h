/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/InsightType.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Used to filter for insights that have the status <code>ONGOING</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsightsOngoingStatusFilter">AWS
   * API Reference</a></p>
   */
  class ListInsightsOngoingStatusFilter
  {
  public:
    AWS_DEVOPSGURU_API ListInsightsOngoingStatusFilter();
    AWS_DEVOPSGURU_API ListInsightsOngoingStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListInsightsOngoingStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Use to filter for either <code>REACTIVE</code> or <code>PROACTIVE</code>
     * insights. </p>
     */
    inline const InsightType& GetType() const{ return m_type; }

    /**
     * <p> Use to filter for either <code>REACTIVE</code> or <code>PROACTIVE</code>
     * insights. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Use to filter for either <code>REACTIVE</code> or <code>PROACTIVE</code>
     * insights. </p>
     */
    inline void SetType(const InsightType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Use to filter for either <code>REACTIVE</code> or <code>PROACTIVE</code>
     * insights. </p>
     */
    inline void SetType(InsightType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Use to filter for either <code>REACTIVE</code> or <code>PROACTIVE</code>
     * insights. </p>
     */
    inline ListInsightsOngoingStatusFilter& WithType(const InsightType& value) { SetType(value); return *this;}

    /**
     * <p> Use to filter for either <code>REACTIVE</code> or <code>PROACTIVE</code>
     * insights. </p>
     */
    inline ListInsightsOngoingStatusFilter& WithType(InsightType&& value) { SetType(std::move(value)); return *this;}

  private:

    InsightType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
