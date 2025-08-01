/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>The Amazon Route 53 record set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Route53ResourceRecordSet">AWS
   * API Reference</a></p>
   */
  class Route53ResourceRecordSet
  {
  public:
    AWS_ARCREGIONSWITCH_API Route53ResourceRecordSet() = default;
    AWS_ARCREGIONSWITCH_API Route53ResourceRecordSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Route53ResourceRecordSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Route 53 record set identifier.</p>
     */
    inline const Aws::String& GetRecordSetIdentifier() const { return m_recordSetIdentifier; }
    inline bool RecordSetIdentifierHasBeenSet() const { return m_recordSetIdentifierHasBeenSet; }
    template<typename RecordSetIdentifierT = Aws::String>
    void SetRecordSetIdentifier(RecordSetIdentifierT&& value) { m_recordSetIdentifierHasBeenSet = true; m_recordSetIdentifier = std::forward<RecordSetIdentifierT>(value); }
    template<typename RecordSetIdentifierT = Aws::String>
    Route53ResourceRecordSet& WithRecordSetIdentifier(RecordSetIdentifierT&& value) { SetRecordSetIdentifier(std::forward<RecordSetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 record set Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Route53ResourceRecordSet& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recordSetIdentifier;
    bool m_recordSetIdentifierHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
