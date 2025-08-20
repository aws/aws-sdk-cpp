/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/OperationStatus.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>A request for a list of operations performed on an application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ListApplicationOperationsRequest">AWS
   * API Reference</a></p>
   */
  class ListApplicationOperationsRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API ListApplicationOperationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationOperations"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ListApplicationOperationsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListApplicationOperationsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationOperationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    ListApplicationOperationsRequest& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline OperationStatus GetOperationStatus() const { return m_operationStatus; }
    inline bool OperationStatusHasBeenSet() const { return m_operationStatusHasBeenSet; }
    inline void SetOperationStatus(OperationStatus value) { m_operationStatusHasBeenSet = true; m_operationStatus = value; }
    inline ListApplicationOperationsRequest& WithOperationStatus(OperationStatus value) { SetOperationStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    OperationStatus m_operationStatus{OperationStatus::NOT_SET};
    bool m_operationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
