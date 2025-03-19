/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MitigationActionType.h>
#include <aws/iot/model/MitigationActionParams.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class DescribeMitigationActionResult
  {
  public:
    AWS_IOT_API DescribeMitigationActionResult() = default;
    AWS_IOT_API DescribeMitigationActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeMitigationActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The friendly name that uniquely identifies the mitigation action.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    DescribeMitigationActionResult& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of mitigation action.</p>
     */
    inline MitigationActionType GetActionType() const { return m_actionType; }
    inline void SetActionType(MitigationActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline DescribeMitigationActionResult& WithActionType(MitigationActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN that identifies this migration action.</p>
     */
    inline const Aws::String& GetActionArn() const { return m_actionArn; }
    template<typename ActionArnT = Aws::String>
    void SetActionArn(ActionArnT&& value) { m_actionArnHasBeenSet = true; m_actionArn = std::forward<ActionArnT>(value); }
    template<typename ActionArnT = Aws::String>
    DescribeMitigationActionResult& WithActionArn(ActionArnT&& value) { SetActionArn(std::forward<ActionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for this action.</p>
     */
    inline const Aws::String& GetActionId() const { return m_actionId; }
    template<typename ActionIdT = Aws::String>
    void SetActionId(ActionIdT&& value) { m_actionIdHasBeenSet = true; m_actionId = std::forward<ActionIdT>(value); }
    template<typename ActionIdT = Aws::String>
    DescribeMitigationActionResult& WithActionId(ActionIdT&& value) { SetActionId(std::forward<ActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role used to apply this action.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeMitigationActionResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameters that control how the mitigation action is applied, specific to the
     * type of mitigation action.</p>
     */
    inline const MitigationActionParams& GetActionParams() const { return m_actionParams; }
    template<typename ActionParamsT = MitigationActionParams>
    void SetActionParams(ActionParamsT&& value) { m_actionParamsHasBeenSet = true; m_actionParams = std::forward<ActionParamsT>(value); }
    template<typename ActionParamsT = MitigationActionParams>
    DescribeMitigationActionResult& WithActionParams(ActionParamsT&& value) { SetActionParams(std::forward<ActionParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the mitigation action was added to your Amazon Web
     * Services accounts.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DescribeMitigationActionResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the mitigation action was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    DescribeMitigationActionResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMitigationActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    MitigationActionType m_actionType{MitigationActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_actionArn;
    bool m_actionArnHasBeenSet = false;

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    MitigationActionParams m_actionParams;
    bool m_actionParamsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
