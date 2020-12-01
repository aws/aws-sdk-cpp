/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API DescribeAccountOverviewRequest : public DevOpsGuruRequest
  {
  public:
    DescribeAccountOverviewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountOverview"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::Utils::DateTime& GetFromTime() const{ return m_fromTime; }

    
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }

    
    inline void SetFromTime(const Aws::Utils::DateTime& value) { m_fromTimeHasBeenSet = true; m_fromTime = value; }

    
    inline void SetFromTime(Aws::Utils::DateTime&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::move(value); }

    
    inline DescribeAccountOverviewRequest& WithFromTime(const Aws::Utils::DateTime& value) { SetFromTime(value); return *this;}

    
    inline DescribeAccountOverviewRequest& WithFromTime(Aws::Utils::DateTime&& value) { SetFromTime(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetToTime() const{ return m_toTime; }

    
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }

    
    inline void SetToTime(const Aws::Utils::DateTime& value) { m_toTimeHasBeenSet = true; m_toTime = value; }

    
    inline void SetToTime(Aws::Utils::DateTime&& value) { m_toTimeHasBeenSet = true; m_toTime = std::move(value); }

    
    inline DescribeAccountOverviewRequest& WithToTime(const Aws::Utils::DateTime& value) { SetToTime(value); return *this;}

    
    inline DescribeAccountOverviewRequest& WithToTime(Aws::Utils::DateTime&& value) { SetToTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_fromTime;
    bool m_fromTimeHasBeenSet;

    Aws::Utils::DateTime m_toTime;
    bool m_toTimeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
