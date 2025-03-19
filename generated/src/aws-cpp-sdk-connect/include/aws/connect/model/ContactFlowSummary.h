/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowType.h>
#include <aws/connect/model/ContactFlowState.h>
#include <aws/connect/model/ContactFlowStatus.h>
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
   * <p>Contains summary information about a flow.</p> <p>You can also create and
   * update flows using the <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/flow-language.html">Amazon
   * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowSummary">AWS
   * API Reference</a></p>
   */
  class ContactFlowSummary
  {
  public:
    AWS_CONNECT_API ContactFlowSummary() = default;
    AWS_CONNECT_API ContactFlowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactFlowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ContactFlowSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ContactFlowSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContactFlowSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of flow.</p>
     */
    inline ContactFlowType GetContactFlowType() const { return m_contactFlowType; }
    inline bool ContactFlowTypeHasBeenSet() const { return m_contactFlowTypeHasBeenSet; }
    inline void SetContactFlowType(ContactFlowType value) { m_contactFlowTypeHasBeenSet = true; m_contactFlowType = value; }
    inline ContactFlowSummary& WithContactFlowType(ContactFlowType value) { SetContactFlowType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of flow.</p>
     */
    inline ContactFlowState GetContactFlowState() const { return m_contactFlowState; }
    inline bool ContactFlowStateHasBeenSet() const { return m_contactFlowStateHasBeenSet; }
    inline void SetContactFlowState(ContactFlowState value) { m_contactFlowStateHasBeenSet = true; m_contactFlowState = value; }
    inline ContactFlowSummary& WithContactFlowState(ContactFlowState value) { SetContactFlowState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow.</p>
     */
    inline ContactFlowStatus GetContactFlowStatus() const { return m_contactFlowStatus; }
    inline bool ContactFlowStatusHasBeenSet() const { return m_contactFlowStatusHasBeenSet; }
    inline void SetContactFlowStatus(ContactFlowStatus value) { m_contactFlowStatusHasBeenSet = true; m_contactFlowStatus = value; }
    inline ContactFlowSummary& WithContactFlowStatus(ContactFlowStatus value) { SetContactFlowStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ContactFlowType m_contactFlowType{ContactFlowType::NOT_SET};
    bool m_contactFlowTypeHasBeenSet = false;

    ContactFlowState m_contactFlowState{ContactFlowState::NOT_SET};
    bool m_contactFlowStateHasBeenSet = false;

    ContactFlowStatus m_contactFlowStatus{ContactFlowStatus::NOT_SET};
    bool m_contactFlowStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
