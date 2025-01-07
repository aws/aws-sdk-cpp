﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/OpenLineageRunEventSummary.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The event summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EventSummary">AWS
   * API Reference</a></p>
   */
  class EventSummary
  {
  public:
    AWS_DATAZONE_API EventSummary();
    AWS_DATAZONE_API EventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API EventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The open lineage run event summary.</p>
     */
    inline const OpenLineageRunEventSummary& GetOpenLineageRunEventSummary() const{ return m_openLineageRunEventSummary; }
    inline bool OpenLineageRunEventSummaryHasBeenSet() const { return m_openLineageRunEventSummaryHasBeenSet; }
    inline void SetOpenLineageRunEventSummary(const OpenLineageRunEventSummary& value) { m_openLineageRunEventSummaryHasBeenSet = true; m_openLineageRunEventSummary = value; }
    inline void SetOpenLineageRunEventSummary(OpenLineageRunEventSummary&& value) { m_openLineageRunEventSummaryHasBeenSet = true; m_openLineageRunEventSummary = std::move(value); }
    inline EventSummary& WithOpenLineageRunEventSummary(const OpenLineageRunEventSummary& value) { SetOpenLineageRunEventSummary(value); return *this;}
    inline EventSummary& WithOpenLineageRunEventSummary(OpenLineageRunEventSummary&& value) { SetOpenLineageRunEventSummary(std::move(value)); return *this;}
    ///@}
  private:

    OpenLineageRunEventSummary m_openLineageRunEventSummary;
    bool m_openLineageRunEventSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
