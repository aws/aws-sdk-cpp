/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/NodeSignalValue.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A signal to a camera node to start or stop processing video.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NodeSignal">AWS
   * API Reference</a></p>
   */
  class NodeSignal
  {
  public:
    AWS_PANORAMA_API NodeSignal();
    AWS_PANORAMA_API NodeSignal(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline const Aws::String& GetNodeInstanceId() const{ return m_nodeInstanceId; }

    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline bool NodeInstanceIdHasBeenSet() const { return m_nodeInstanceIdHasBeenSet; }

    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline void SetNodeInstanceId(const Aws::String& value) { m_nodeInstanceIdHasBeenSet = true; m_nodeInstanceId = value; }

    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline void SetNodeInstanceId(Aws::String&& value) { m_nodeInstanceIdHasBeenSet = true; m_nodeInstanceId = std::move(value); }

    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline void SetNodeInstanceId(const char* value) { m_nodeInstanceIdHasBeenSet = true; m_nodeInstanceId.assign(value); }

    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline NodeSignal& WithNodeInstanceId(const Aws::String& value) { SetNodeInstanceId(value); return *this;}

    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline NodeSignal& WithNodeInstanceId(Aws::String&& value) { SetNodeInstanceId(std::move(value)); return *this;}

    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline NodeSignal& WithNodeInstanceId(const char* value) { SetNodeInstanceId(value); return *this;}


    /**
     * <p>The signal value.</p>
     */
    inline const NodeSignalValue& GetSignal() const{ return m_signal; }

    /**
     * <p>The signal value.</p>
     */
    inline bool SignalHasBeenSet() const { return m_signalHasBeenSet; }

    /**
     * <p>The signal value.</p>
     */
    inline void SetSignal(const NodeSignalValue& value) { m_signalHasBeenSet = true; m_signal = value; }

    /**
     * <p>The signal value.</p>
     */
    inline void SetSignal(NodeSignalValue&& value) { m_signalHasBeenSet = true; m_signal = std::move(value); }

    /**
     * <p>The signal value.</p>
     */
    inline NodeSignal& WithSignal(const NodeSignalValue& value) { SetSignal(value); return *this;}

    /**
     * <p>The signal value.</p>
     */
    inline NodeSignal& WithSignal(NodeSignalValue&& value) { SetSignal(std::move(value)); return *this;}

  private:

    Aws::String m_nodeInstanceId;
    bool m_nodeInstanceIdHasBeenSet = false;

    NodeSignalValue m_signal;
    bool m_signalHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
