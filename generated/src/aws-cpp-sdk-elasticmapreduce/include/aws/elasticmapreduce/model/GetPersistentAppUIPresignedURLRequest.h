/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/PersistentAppUIType.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class GetPersistentAppUIPresignedURLRequest : public EMRRequest
  {
  public:
    AWS_EMR_API GetPersistentAppUIPresignedURLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPersistentAppUIPresignedURL"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The persistent application user interface ID associated with the presigned
     * URL.</p>
     */
    inline const Aws::String& GetPersistentAppUIId() const { return m_persistentAppUIId; }
    inline bool PersistentAppUIIdHasBeenSet() const { return m_persistentAppUIIdHasBeenSet; }
    template<typename PersistentAppUIIdT = Aws::String>
    void SetPersistentAppUIId(PersistentAppUIIdT&& value) { m_persistentAppUIIdHasBeenSet = true; m_persistentAppUIId = std::forward<PersistentAppUIIdT>(value); }
    template<typename PersistentAppUIIdT = Aws::String>
    GetPersistentAppUIPresignedURLRequest& WithPersistentAppUIId(PersistentAppUIIdT&& value) { SetPersistentAppUIId(std::forward<PersistentAppUIIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The persistent application user interface type associated with the presigned
     * URL.</p>
     */
    inline PersistentAppUIType GetPersistentAppUIType() const { return m_persistentAppUIType; }
    inline bool PersistentAppUITypeHasBeenSet() const { return m_persistentAppUITypeHasBeenSet; }
    inline void SetPersistentAppUIType(PersistentAppUIType value) { m_persistentAppUITypeHasBeenSet = true; m_persistentAppUIType = value; }
    inline GetPersistentAppUIPresignedURLRequest& WithPersistentAppUIType(PersistentAppUIType value) { SetPersistentAppUIType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application ID associated with the presigned URL.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    GetPersistentAppUIPresignedURLRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean that represents if the caller is an authentication proxy call.</p>
     */
    inline bool GetAuthProxyCall() const { return m_authProxyCall; }
    inline bool AuthProxyCallHasBeenSet() const { return m_authProxyCallHasBeenSet; }
    inline void SetAuthProxyCall(bool value) { m_authProxyCallHasBeenSet = true; m_authProxyCall = value; }
    inline GetPersistentAppUIPresignedURLRequest& WithAuthProxyCall(bool value) { SetAuthProxyCall(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN associated with the presigned URL.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    GetPersistentAppUIPresignedURLRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_persistentAppUIId;
    bool m_persistentAppUIIdHasBeenSet = false;

    PersistentAppUIType m_persistentAppUIType{PersistentAppUIType::NOT_SET};
    bool m_persistentAppUITypeHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    bool m_authProxyCall{false};
    bool m_authProxyCallHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
