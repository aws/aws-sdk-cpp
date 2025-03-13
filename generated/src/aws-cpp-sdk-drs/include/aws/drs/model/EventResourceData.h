/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/SourceNetworkData.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Properties of resource related to a job event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/EventResourceData">AWS
   * API Reference</a></p>
   */
  class EventResourceData
  {
  public:
    AWS_DRS_API EventResourceData() = default;
    AWS_DRS_API EventResourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API EventResourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source Network properties.</p>
     */
    inline const SourceNetworkData& GetSourceNetworkData() const { return m_sourceNetworkData; }
    inline bool SourceNetworkDataHasBeenSet() const { return m_sourceNetworkDataHasBeenSet; }
    template<typename SourceNetworkDataT = SourceNetworkData>
    void SetSourceNetworkData(SourceNetworkDataT&& value) { m_sourceNetworkDataHasBeenSet = true; m_sourceNetworkData = std::forward<SourceNetworkDataT>(value); }
    template<typename SourceNetworkDataT = SourceNetworkData>
    EventResourceData& WithSourceNetworkData(SourceNetworkDataT&& value) { SetSourceNetworkData(std::forward<SourceNetworkDataT>(value)); return *this;}
    ///@}
  private:

    SourceNetworkData m_sourceNetworkData;
    bool m_sourceNetworkDataHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
