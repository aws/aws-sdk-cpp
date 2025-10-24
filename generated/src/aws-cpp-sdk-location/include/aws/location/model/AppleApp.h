/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Unique identifying information for an Apple app (iOS, macOS, tvOS and
   * watchOS). Consists of an Apple Bundle ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/AppleApp">AWS
   * API Reference</a></p>
   */
  class AppleApp
  {
  public:
    AWS_LOCATIONSERVICE_API AppleApp() = default;
    AWS_LOCATIONSERVICE_API AppleApp(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API AppleApp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the app across all Apple platforms (iOS, macOS,
     * tvOS, watchOS, etc.)</p>
     */
    inline const Aws::String& GetBundleId() const { return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    template<typename BundleIdT = Aws::String>
    void SetBundleId(BundleIdT&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::forward<BundleIdT>(value); }
    template<typename BundleIdT = Aws::String>
    AppleApp& WithBundleId(BundleIdT&& value) { SetBundleId(std::forward<BundleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
