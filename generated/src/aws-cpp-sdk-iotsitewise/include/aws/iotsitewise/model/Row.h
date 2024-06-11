﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Datum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class Datum;

  /**
   * <p>Represents a single row in the query results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Row">AWS API
   * Reference</a></p>
   */
  class Row
  {
  public:
    AWS_IOTSITEWISE_API Row();
    AWS_IOTSITEWISE_API Row(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Row& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of data points in a single row of the result set.</p>
     */
    inline const Aws::Vector<Datum>& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::Vector<Datum>& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::Vector<Datum>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline Row& WithData(const Aws::Vector<Datum>& value) { SetData(value); return *this;}
    inline Row& WithData(Aws::Vector<Datum>&& value) { SetData(std::move(value)); return *this;}
    inline Row& AddData(const Datum& value) { m_dataHasBeenSet = true; m_data.push_back(value); return *this; }
    inline Row& AddData(Datum&& value) { m_dataHasBeenSet = true; m_data.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Datum> m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
