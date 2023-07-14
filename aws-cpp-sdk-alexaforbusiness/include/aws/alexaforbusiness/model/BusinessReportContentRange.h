﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/BusinessReportInterval.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The content range of the report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/BusinessReportContentRange">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API BusinessReportContentRange
  {
  public:
    BusinessReportContentRange();
    BusinessReportContentRange(Aws::Utils::Json::JsonView jsonValue);
    BusinessReportContentRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The interval of the content range.</p>
     */
    inline const BusinessReportInterval& GetInterval() const{ return m_interval; }

    /**
     * <p>The interval of the content range.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The interval of the content range.</p>
     */
    inline void SetInterval(const BusinessReportInterval& value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The interval of the content range.</p>
     */
    inline void SetInterval(BusinessReportInterval&& value) { m_intervalHasBeenSet = true; m_interval = std::move(value); }

    /**
     * <p>The interval of the content range.</p>
     */
    inline BusinessReportContentRange& WithInterval(const BusinessReportInterval& value) { SetInterval(value); return *this;}

    /**
     * <p>The interval of the content range.</p>
     */
    inline BusinessReportContentRange& WithInterval(BusinessReportInterval&& value) { SetInterval(std::move(value)); return *this;}

  private:

    BusinessReportInterval m_interval;
    bool m_intervalHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
