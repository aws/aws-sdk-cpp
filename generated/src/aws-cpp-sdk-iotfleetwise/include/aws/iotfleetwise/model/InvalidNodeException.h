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
    AWS_IOTFLEETWISE_API InvalidNodeException();
    AWS_IOTFLEETWISE_API InvalidNodeException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API InvalidNodeException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline const Aws::Vector<Node>& GetInvalidNodes() const{ return m_invalidNodes; }

    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline bool InvalidNodesHasBeenSet() const { return m_invalidNodesHasBeenSet; }

    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline void SetInvalidNodes(const Aws::Vector<Node>& value) { m_invalidNodesHasBeenSet = true; m_invalidNodes = value; }

    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline void SetInvalidNodes(Aws::Vector<Node>&& value) { m_invalidNodesHasBeenSet = true; m_invalidNodes = std::move(value); }

    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline InvalidNodeException& WithInvalidNodes(const Aws::Vector<Node>& value) { SetInvalidNodes(value); return *this;}

    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline InvalidNodeException& WithInvalidNodes(Aws::Vector<Node>&& value) { SetInvalidNodes(std::move(value)); return *this;}

    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline InvalidNodeException& AddInvalidNodes(const Node& value) { m_invalidNodesHasBeenSet = true; m_invalidNodes.push_back(value); return *this; }

    /**
     * <p>The specified node type isn't valid.</p>
     */
    inline InvalidNodeException& AddInvalidNodes(Node&& value) { m_invalidNodesHasBeenSet = true; m_invalidNodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The reason the node validation failed.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason the node validation failed.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason the node validation failed.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason the node validation failed.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason the node validation failed.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason the node validation failed.</p>
     */
    inline InvalidNodeException& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason the node validation failed.</p>
     */
    inline InvalidNodeException& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason the node validation failed.</p>
     */
    inline InvalidNodeException& WithReason(const char* value) { SetReason(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidNodeException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidNodeException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidNodeException& WithMessage(const char* value) { SetMessage(value); return *this;}

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
