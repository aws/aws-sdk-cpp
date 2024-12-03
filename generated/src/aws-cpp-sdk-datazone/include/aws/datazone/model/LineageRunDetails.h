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
    AWS_DATAZONE_API LineageRunDetails();
    AWS_DATAZONE_API LineageRunDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageRunDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SQL query run details of a data lineage run.</p>
     */
    inline const LineageSqlQueryRunDetails& GetSqlQueryRunDetails() const{ return m_sqlQueryRunDetails; }
    inline bool SqlQueryRunDetailsHasBeenSet() const { return m_sqlQueryRunDetailsHasBeenSet; }
    inline void SetSqlQueryRunDetails(const LineageSqlQueryRunDetails& value) { m_sqlQueryRunDetailsHasBeenSet = true; m_sqlQueryRunDetails = value; }
    inline void SetSqlQueryRunDetails(LineageSqlQueryRunDetails&& value) { m_sqlQueryRunDetailsHasBeenSet = true; m_sqlQueryRunDetails = std::move(value); }
    inline LineageRunDetails& WithSqlQueryRunDetails(const LineageSqlQueryRunDetails& value) { SetSqlQueryRunDetails(value); return *this;}
    inline LineageRunDetails& WithSqlQueryRunDetails(LineageSqlQueryRunDetails&& value) { SetSqlQueryRunDetails(std::move(value)); return *this;}
    ///@}
  private:

    LineageSqlQueryRunDetails m_sqlQueryRunDetails;
    bool m_sqlQueryRunDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
