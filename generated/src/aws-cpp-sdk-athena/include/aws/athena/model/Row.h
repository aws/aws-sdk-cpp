/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/Datum.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The rows that make up a query result table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/Row">AWS API
   * Reference</a></p>
   */
  class Row
  {
  public:
    AWS_ATHENA_API Row() = default;
    AWS_ATHENA_API Row(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Row& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline const Aws::Vector<Datum>& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Vector<Datum>>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Vector<Datum>>
    Row& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    template<typename DataT = Datum>
    Row& AddData(DataT&& value) { m_dataHasBeenSet = true; m_data.emplace_back(std::forward<DataT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Datum> m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
