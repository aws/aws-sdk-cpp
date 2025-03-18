/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/LineageSqlQueryRunDetails.h>
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
   * <p>The data lineage run details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageRunDetails">AWS
   * API Reference</a></p>
   */
  class LineageRunDetails
  {
  public:
    AWS_DATAZONE_API LineageRunDetails() = default;
    AWS_DATAZONE_API LineageRunDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageRunDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SQL query run details of a data lineage run.</p>
     */
    inline const LineageSqlQueryRunDetails& GetSqlQueryRunDetails() const { return m_sqlQueryRunDetails; }
    inline bool SqlQueryRunDetailsHasBeenSet() const { return m_sqlQueryRunDetailsHasBeenSet; }
    template<typename SqlQueryRunDetailsT = LineageSqlQueryRunDetails>
    void SetSqlQueryRunDetails(SqlQueryRunDetailsT&& value) { m_sqlQueryRunDetailsHasBeenSet = true; m_sqlQueryRunDetails = std::forward<SqlQueryRunDetailsT>(value); }
    template<typename SqlQueryRunDetailsT = LineageSqlQueryRunDetails>
    LineageRunDetails& WithSqlQueryRunDetails(SqlQueryRunDetailsT&& value) { SetSqlQueryRunDetails(std::forward<SqlQueryRunDetailsT>(value)); return *this;}
    ///@}
  private:

    LineageSqlQueryRunDetails m_sqlQueryRunDetails;
    bool m_sqlQueryRunDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
