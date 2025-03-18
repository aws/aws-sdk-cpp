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
    AWS_DATAZONE_API JobRunDetails() = default;
    AWS_DATAZONE_API JobRunDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API JobRunDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data lineage details of a job run.</p>
     */
    inline const LineageRunDetails& GetLineageRunDetails() const { return m_lineageRunDetails; }
    inline bool LineageRunDetailsHasBeenSet() const { return m_lineageRunDetailsHasBeenSet; }
    template<typename LineageRunDetailsT = LineageRunDetails>
    void SetLineageRunDetails(LineageRunDetailsT&& value) { m_lineageRunDetailsHasBeenSet = true; m_lineageRunDetails = std::forward<LineageRunDetailsT>(value); }
    template<typename LineageRunDetailsT = LineageRunDetails>
    JobRunDetails& WithLineageRunDetails(LineageRunDetailsT&& value) { SetLineageRunDetails(std::forward<LineageRunDetailsT>(value)); return *this;}
    ///@}
  private:

    LineageRunDetails m_lineageRunDetails;
    bool m_lineageRunDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
