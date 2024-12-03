/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/LineageRunDetails.h>
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
   * <p>The details of a job run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/JobRunDetails">AWS
   * API Reference</a></p>
   */
  class JobRunDetails
  {
  public:
    AWS_DATAZONE_API JobRunDetails();
    AWS_DATAZONE_API JobRunDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API JobRunDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data lineage details of a job run.</p>
     */
    inline const LineageRunDetails& GetLineageRunDetails() const{ return m_lineageRunDetails; }
    inline bool LineageRunDetailsHasBeenSet() const { return m_lineageRunDetailsHasBeenSet; }
    inline void SetLineageRunDetails(const LineageRunDetails& value) { m_lineageRunDetailsHasBeenSet = true; m_lineageRunDetails = value; }
    inline void SetLineageRunDetails(LineageRunDetails&& value) { m_lineageRunDetailsHasBeenSet = true; m_lineageRunDetails = std::move(value); }
    inline JobRunDetails& WithLineageRunDetails(const LineageRunDetails& value) { SetLineageRunDetails(value); return *this;}
    inline JobRunDetails& WithLineageRunDetails(LineageRunDetails&& value) { SetLineageRunDetails(std::move(value)); return *this;}
    ///@}
  private:

    LineageRunDetails m_lineageRunDetails;
    bool m_lineageRunDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
