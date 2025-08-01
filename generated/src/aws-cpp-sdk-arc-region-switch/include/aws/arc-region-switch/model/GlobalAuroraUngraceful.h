/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/GlobalAuroraUngracefulBehavior.h>
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
   * <p>Configuration for handling failures when performing operations on Aurora
   * global databases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/GlobalAuroraUngraceful">AWS
   * API Reference</a></p>
   */
  class GlobalAuroraUngraceful
  {
  public:
    AWS_ARCREGIONSWITCH_API GlobalAuroraUngraceful() = default;
    AWS_ARCREGIONSWITCH_API GlobalAuroraUngraceful(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API GlobalAuroraUngraceful& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The settings for ungraceful execution.</p>
     */
    inline GlobalAuroraUngracefulBehavior GetUngraceful() const { return m_ungraceful; }
    inline bool UngracefulHasBeenSet() const { return m_ungracefulHasBeenSet; }
    inline void SetUngraceful(GlobalAuroraUngracefulBehavior value) { m_ungracefulHasBeenSet = true; m_ungraceful = value; }
    inline GlobalAuroraUngraceful& WithUngraceful(GlobalAuroraUngracefulBehavior value) { SetUngraceful(value); return *this;}
    ///@}
  private:

    GlobalAuroraUngracefulBehavior m_ungraceful{GlobalAuroraUngracefulBehavior::NOT_SET};
    bool m_ungracefulHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
