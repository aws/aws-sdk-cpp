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

  class AWS_DEVOPSGURU_API ListInsightsOngoingStatusFilter
  {
  public:
    ListInsightsOngoingStatusFilter();
    ListInsightsOngoingStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    ListInsightsOngoingStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const InsightType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const InsightType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(InsightType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline ListInsightsOngoingStatusFilter& WithType(const InsightType& value) { SetType(value); return *this;}

    
    inline ListInsightsOngoingStatusFilter& WithType(InsightType&& value) { SetType(std::move(value)); return *this;}

  private:

    InsightType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
