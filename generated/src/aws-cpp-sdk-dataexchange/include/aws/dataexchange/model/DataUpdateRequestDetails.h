﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Extra details specific to a data update type notification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/DataUpdateRequestDetails">AWS
   * API Reference</a></p>
   */
  class DataUpdateRequestDetails
  {
  public:
    AWS_DATAEXCHANGE_API DataUpdateRequestDetails() = default;
    AWS_DATAEXCHANGE_API DataUpdateRequestDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API DataUpdateRequestDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A datetime in the past when the data was updated. This typically means that
     * the underlying resource supporting the data set was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetDataUpdatedAt() const { return m_dataUpdatedAt; }
    inline bool DataUpdatedAtHasBeenSet() const { return m_dataUpdatedAtHasBeenSet; }
    template<typename DataUpdatedAtT = Aws::Utils::DateTime>
    void SetDataUpdatedAt(DataUpdatedAtT&& value) { m_dataUpdatedAtHasBeenSet = true; m_dataUpdatedAt = std::forward<DataUpdatedAtT>(value); }
    template<typename DataUpdatedAtT = Aws::Utils::DateTime>
    DataUpdateRequestDetails& WithDataUpdatedAt(DataUpdatedAtT&& value) { SetDataUpdatedAt(std::forward<DataUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_dataUpdatedAt{};
    bool m_dataUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
