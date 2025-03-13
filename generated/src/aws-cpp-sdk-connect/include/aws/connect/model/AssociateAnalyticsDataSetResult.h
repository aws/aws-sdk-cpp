/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{
  class AssociateAnalyticsDataSetResult
  {
  public:
    AWS_CONNECT_API AssociateAnalyticsDataSetResult() = default;
    AWS_CONNECT_API AssociateAnalyticsDataSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API AssociateAnalyticsDataSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the dataset that was associated.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    AssociateAnalyticsDataSetResult& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target account. </p>
     */
    inline const Aws::String& GetTargetAccountId() const { return m_targetAccountId; }
    template<typename TargetAccountIdT = Aws::String>
    void SetTargetAccountId(TargetAccountIdT&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::forward<TargetAccountIdT>(value); }
    template<typename TargetAccountIdT = Aws::String>
    AssociateAnalyticsDataSetResult& WithTargetAccountId(TargetAccountIdT&& value) { SetTargetAccountId(std::forward<TargetAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Resource Access Manager share ID that is generated.</p>
     */
    inline const Aws::String& GetResourceShareId() const { return m_resourceShareId; }
    template<typename ResourceShareIdT = Aws::String>
    void SetResourceShareId(ResourceShareIdT&& value) { m_resourceShareIdHasBeenSet = true; m_resourceShareId = std::forward<ResourceShareIdT>(value); }
    template<typename ResourceShareIdT = Aws::String>
    AssociateAnalyticsDataSetResult& WithResourceShareId(ResourceShareIdT&& value) { SetResourceShareId(std::forward<ResourceShareIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
    template<typename ResourceShareArnT = Aws::String>
    void SetResourceShareArn(ResourceShareArnT&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::forward<ResourceShareArnT>(value); }
    template<typename ResourceShareArnT = Aws::String>
    AssociateAnalyticsDataSetResult& WithResourceShareArn(ResourceShareArnT&& value) { SetResourceShareArn(std::forward<ResourceShareArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateAnalyticsDataSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;

    Aws::String m_resourceShareId;
    bool m_resourceShareIdHasBeenSet = false;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
