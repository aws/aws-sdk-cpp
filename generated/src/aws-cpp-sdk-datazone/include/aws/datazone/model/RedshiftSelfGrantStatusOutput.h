/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/SelfGrantStatusDetail.h>
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
   * <p>The details for the self granting status for an Amazon Redshift data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftSelfGrantStatusOutput">AWS
   * API Reference</a></p>
   */
  class RedshiftSelfGrantStatusOutput
  {
  public:
    AWS_DATAZONE_API RedshiftSelfGrantStatusOutput() = default;
    AWS_DATAZONE_API RedshiftSelfGrantStatusOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftSelfGrantStatusOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details for the self granting status for an Amazon Redshift data
     * source.</p>
     */
    inline const Aws::Vector<SelfGrantStatusDetail>& GetSelfGrantStatusDetails() const { return m_selfGrantStatusDetails; }
    inline bool SelfGrantStatusDetailsHasBeenSet() const { return m_selfGrantStatusDetailsHasBeenSet; }
    template<typename SelfGrantStatusDetailsT = Aws::Vector<SelfGrantStatusDetail>>
    void SetSelfGrantStatusDetails(SelfGrantStatusDetailsT&& value) { m_selfGrantStatusDetailsHasBeenSet = true; m_selfGrantStatusDetails = std::forward<SelfGrantStatusDetailsT>(value); }
    template<typename SelfGrantStatusDetailsT = Aws::Vector<SelfGrantStatusDetail>>
    RedshiftSelfGrantStatusOutput& WithSelfGrantStatusDetails(SelfGrantStatusDetailsT&& value) { SetSelfGrantStatusDetails(std::forward<SelfGrantStatusDetailsT>(value)); return *this;}
    template<typename SelfGrantStatusDetailsT = SelfGrantStatusDetail>
    RedshiftSelfGrantStatusOutput& AddSelfGrantStatusDetails(SelfGrantStatusDetailsT&& value) { m_selfGrantStatusDetailsHasBeenSet = true; m_selfGrantStatusDetails.emplace_back(std::forward<SelfGrantStatusDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SelfGrantStatusDetail> m_selfGrantStatusDetails;
    bool m_selfGrantStatusDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
