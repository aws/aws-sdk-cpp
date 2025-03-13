/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ListFlowAssociationResourceType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about flow associations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/FlowAssociationSummary">AWS
   * API Reference</a></p>
   */
  class FlowAssociationSummary
  {
  public:
    AWS_CONNECT_API FlowAssociationSummary() = default;
    AWS_CONNECT_API FlowAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API FlowAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    FlowAssociationSummary& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowId() const { return m_flowId; }
    inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
    template<typename FlowIdT = Aws::String>
    void SetFlowId(FlowIdT&& value) { m_flowIdHasBeenSet = true; m_flowId = std::forward<FlowIdT>(value); }
    template<typename FlowIdT = Aws::String>
    FlowAssociationSummary& WithFlowId(FlowIdT&& value) { SetFlowId(std::forward<FlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource association.</p>
     */
    inline ListFlowAssociationResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ListFlowAssociationResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline FlowAssociationSummary& WithResourceType(ListFlowAssociationResourceType value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_flowId;
    bool m_flowIdHasBeenSet = false;

    ListFlowAssociationResourceType m_resourceType{ListFlowAssociationResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
