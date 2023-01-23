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
    AWS_CONNECTCASES_API EventBridgeConfiguration();
    AWS_CONNECTCASES_API EventBridgeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API EventBridgeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the to broadcast case event data to the customer.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the to broadcast case event data to the customer.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the to broadcast case event data to the customer.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the to broadcast case event data to the customer.</p>
     */
    inline EventBridgeConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Details of what case and related item data is published through the case
     * event stream.</p>
     */
    inline const EventIncludedData& GetIncludedData() const{ return m_includedData; }

    /**
     * <p>Details of what case and related item data is published through the case
     * event stream.</p>
     */
    inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }

    /**
     * <p>Details of what case and related item data is published through the case
     * event stream.</p>
     */
    inline void SetIncludedData(const EventIncludedData& value) { m_includedDataHasBeenSet = true; m_includedData = value; }

    /**
     * <p>Details of what case and related item data is published through the case
     * event stream.</p>
     */
    inline void SetIncludedData(EventIncludedData&& value) { m_includedDataHasBeenSet = true; m_includedData = std::move(value); }

    /**
     * <p>Details of what case and related item data is published through the case
     * event stream.</p>
     */
    inline EventBridgeConfiguration& WithIncludedData(const EventIncludedData& value) { SetIncludedData(value); return *this;}

    /**
     * <p>Details of what case and related item data is published through the case
     * event stream.</p>
     */
    inline EventBridgeConfiguration& WithIncludedData(EventIncludedData&& value) { SetIncludedData(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    EventIncludedData m_includedData;
    bool m_includedDataHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
