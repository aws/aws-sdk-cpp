/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/AddOnType.h>
#include <aws/lightsail/model/AutoSnapshotAddOnRequest.h>
#include <aws/lightsail/model/StopInstanceOnIdleRequest.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a request to enable, modify, or disable an add-on for an Amazon
   * Lightsail resource.</p>  <p>An additional cost may be associated with
   * enabling add-ons. For more information, see the <a
   * href="https://aws.amazon.com/lightsail/pricing/">Lightsail pricing page</a>.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AddOnRequest">AWS
   * API Reference</a></p>
   */
  class AddOnRequest
  {
  public:
    AWS_LIGHTSAIL_API AddOnRequest() = default;
    AWS_LIGHTSAIL_API AddOnRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AddOnRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The add-on type.</p>
     */
    inline AddOnType GetAddOnType() const { return m_addOnType; }
    inline bool AddOnTypeHasBeenSet() const { return m_addOnTypeHasBeenSet; }
    inline void SetAddOnType(AddOnType value) { m_addOnTypeHasBeenSet = true; m_addOnType = value; }
    inline AddOnRequest& WithAddOnType(AddOnType value) { SetAddOnType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents additional parameters when enabling or modifying
     * the automatic snapshot add-on.</p>
     */
    inline const AutoSnapshotAddOnRequest& GetAutoSnapshotAddOnRequest() const { return m_autoSnapshotAddOnRequest; }
    inline bool AutoSnapshotAddOnRequestHasBeenSet() const { return m_autoSnapshotAddOnRequestHasBeenSet; }
    template<typename AutoSnapshotAddOnRequestT = AutoSnapshotAddOnRequest>
    void SetAutoSnapshotAddOnRequest(AutoSnapshotAddOnRequestT&& value) { m_autoSnapshotAddOnRequestHasBeenSet = true; m_autoSnapshotAddOnRequest = std::forward<AutoSnapshotAddOnRequestT>(value); }
    template<typename AutoSnapshotAddOnRequestT = AutoSnapshotAddOnRequest>
    AddOnRequest& WithAutoSnapshotAddOnRequest(AutoSnapshotAddOnRequestT&& value) { SetAutoSnapshotAddOnRequest(std::forward<AutoSnapshotAddOnRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents additional parameters when enabling or modifying
     * the <code>StopInstanceOnIdle</code> add-on.</p>  <p>This object only
     * applies to Lightsail for Research resources.</p> 
     */
    inline const StopInstanceOnIdleRequest& GetStopInstanceOnIdleRequest() const { return m_stopInstanceOnIdleRequest; }
    inline bool StopInstanceOnIdleRequestHasBeenSet() const { return m_stopInstanceOnIdleRequestHasBeenSet; }
    template<typename StopInstanceOnIdleRequestT = StopInstanceOnIdleRequest>
    void SetStopInstanceOnIdleRequest(StopInstanceOnIdleRequestT&& value) { m_stopInstanceOnIdleRequestHasBeenSet = true; m_stopInstanceOnIdleRequest = std::forward<StopInstanceOnIdleRequestT>(value); }
    template<typename StopInstanceOnIdleRequestT = StopInstanceOnIdleRequest>
    AddOnRequest& WithStopInstanceOnIdleRequest(StopInstanceOnIdleRequestT&& value) { SetStopInstanceOnIdleRequest(std::forward<StopInstanceOnIdleRequestT>(value)); return *this;}
    ///@}
  private:

    AddOnType m_addOnType{AddOnType::NOT_SET};
    bool m_addOnTypeHasBeenSet = false;

    AutoSnapshotAddOnRequest m_autoSnapshotAddOnRequest;
    bool m_autoSnapshotAddOnRequestHasBeenSet = false;

    StopInstanceOnIdleRequest m_stopInstanceOnIdleRequest;
    bool m_stopInstanceOnIdleRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
