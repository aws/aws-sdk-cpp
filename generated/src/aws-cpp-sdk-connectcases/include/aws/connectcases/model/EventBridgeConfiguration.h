/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/EventIncludedData.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Configuration to enable EventBridge case event delivery and determine what
   * data is delivered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/EventBridgeConfiguration">AWS
   * API Reference</a></p>
   */
  class EventBridgeConfiguration
  {
  public:
    AWS_CONNECTCASES_API EventBridgeConfiguration() = default;
    AWS_CONNECTCASES_API EventBridgeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API EventBridgeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the to broadcast case event data to the customer.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventBridgeConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of what case and related item data is published through the case
     * event stream.</p>
     */
    inline const EventIncludedData& GetIncludedData() const { return m_includedData; }
    inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
    template<typename IncludedDataT = EventIncludedData>
    void SetIncludedData(IncludedDataT&& value) { m_includedDataHasBeenSet = true; m_includedData = std::forward<IncludedDataT>(value); }
    template<typename IncludedDataT = EventIncludedData>
    EventBridgeConfiguration& WithIncludedData(IncludedDataT&& value) { SetIncludedData(std::forward<IncludedDataT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    EventIncludedData m_includedData;
    bool m_includedDataHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
