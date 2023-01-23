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
    AWS_ATHENA_API Row();
    AWS_ATHENA_API Row(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Row& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline const Aws::Vector<Datum>& GetData() const{ return m_data; }

    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline void SetData(const Aws::Vector<Datum>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline void SetData(Aws::Vector<Datum>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline Row& WithData(const Aws::Vector<Datum>& value) { SetData(value); return *this;}

    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline Row& WithData(Aws::Vector<Datum>&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline Row& AddData(const Datum& value) { m_dataHasBeenSet = true; m_data.push_back(value); return *this; }

    /**
     * <p>The data that populates a row in a query result table.</p>
     */
    inline Row& AddData(Datum&& value) { m_dataHasBeenSet = true; m_data.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Datum> m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
