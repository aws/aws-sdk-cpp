/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/Node.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The specified node type doesn't match the expected node type for a node. You
   * can specify the node type as branch, sensor, actuator, or
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/InvalidNodeException">AWS
   * API Reference</a></p>
   */
  class InvalidNodeException
  {
  public:
    AWS_IOTFLEETWISE_API InvalidNodeException() = default;
    AWS_IOTFLEETWISE_API InvalidNodeException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidNodeException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline const Aws::Vector<Node>& GetInvalidNodes() const { return m_invalidNodes; }
    inline bool InvalidNodesHasBeenSet() const { return m_invalidNodesHasBeenSet; }
    template<typename InvalidNodesT = Aws::Vector<Node>>
    void SetInvalidNodes(InvalidNodesT&& value) { m_invalidNodesHasBeenSet = true; m_invalidNodes = std::forward<InvalidNodesT>(value); }
    template<typename InvalidNodesT = Aws::Vector<Node>>
    InvalidNodeException& WithInvalidNodes(InvalidNodesT&& value) { SetInvalidNodes(std::forward<InvalidNodesT>(value)); return *this;}
    template<typename InvalidNodesT = Node>
    InvalidNodeException& AddInvalidNodes(InvalidNodesT&& value) { m_invalidNodesHasBeenSet = true; m_invalidNodes.emplace_back(std::forward<InvalidNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason the node validation failed.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    InvalidNodeException& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidNodeException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Node> m_invalidNodes;
    bool m_invalidNodesHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
