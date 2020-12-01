/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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

  class AWS_DEVOPSGURU_API EventTimeRange
  {
  public:
    EventTimeRange();
    EventTimeRange(Aws::Utils::Json::JsonView jsonValue);
    EventTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Utils::DateTime& GetFromTime() const{ return m_fromTime; }

    
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }

    
    inline void SetFromTime(const Aws::Utils::DateTime& value) { m_fromTimeHasBeenSet = true; m_fromTime = value; }

    
    inline void SetFromTime(Aws::Utils::DateTime&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::move(value); }

    
    inline EventTimeRange& WithFromTime(const Aws::Utils::DateTime& value) { SetFromTime(value); return *this;}

    
    inline EventTimeRange& WithFromTime(Aws::Utils::DateTime&& value) { SetFromTime(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetToTime() const{ return m_toTime; }

    
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }

    
    inline void SetToTime(const Aws::Utils::DateTime& value) { m_toTimeHasBeenSet = true; m_toTime = value; }

    
    inline void SetToTime(Aws::Utils::DateTime&& value) { m_toTimeHasBeenSet = true; m_toTime = std::move(value); }

    
    inline EventTimeRange& WithToTime(const Aws::Utils::DateTime& value) { SetToTime(value); return *this;}

    
    inline EventTimeRange& WithToTime(Aws::Utils::DateTime&& value) { SetToTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_fromTime;
    bool m_fromTimeHasBeenSet;

    Aws::Utils::DateTime m_toTime;
    bool m_toTimeHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
