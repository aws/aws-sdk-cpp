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
   * <p>This API is in preview release for Amazon Connect and is subject to
   * change.</p> <p>Information about associations that are successfully created:
   * <code>DataSetId</code>, <code>TargetAccountId</code>,
   * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AnalyticsDataAssociationResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsDataAssociationResult
  {
  public:
    AWS_CONNECT_API AnalyticsDataAssociationResult() = default;
    AWS_CONNECT_API AnalyticsDataAssociationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AnalyticsDataAssociationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    AnalyticsDataAssociationResult& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the target account. </p>
     */
    inline const Aws::String& GetTargetAccountId() const { return m_targetAccountId; }
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
    template<typename TargetAccountIdT = Aws::String>
    void SetTargetAccountId(TargetAccountIdT&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::forward<TargetAccountIdT>(value); }
    template<typename TargetAccountIdT = Aws::String>
    AnalyticsDataAssociationResult& WithTargetAccountId(TargetAccountIdT&& value) { SetTargetAccountId(std::forward<TargetAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline const Aws::String& GetResourceShareId() const { return m_resourceShareId; }
    inline bool ResourceShareIdHasBeenSet() const { return m_resourceShareIdHasBeenSet; }
    template<typename ResourceShareIdT = Aws::String>
    void SetResourceShareId(ResourceShareIdT&& value) { m_resourceShareIdHasBeenSet = true; m_resourceShareId = std::forward<ResourceShareIdT>(value); }
    template<typename ResourceShareIdT = Aws::String>
    AnalyticsDataAssociationResult& WithResourceShareId(ResourceShareIdT&& value) { SetResourceShareId(std::forward<ResourceShareIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    template<typename ResourceShareArnT = Aws::String>
    void SetResourceShareArn(ResourceShareArnT&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::forward<ResourceShareArnT>(value); }
    template<typename ResourceShareArnT = Aws::String>
    AnalyticsDataAssociationResult& WithResourceShareArn(ResourceShareArnT&& value) { SetResourceShareArn(std::forward<ResourceShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Resource Access Manager status of association.</p>
     */
    inline const Aws::String& GetResourceShareStatus() const { return m_resourceShareStatus; }
    inline bool ResourceShareStatusHasBeenSet() const { return m_resourceShareStatusHasBeenSet; }
    template<typename ResourceShareStatusT = Aws::String>
    void SetResourceShareStatus(ResourceShareStatusT&& value) { m_resourceShareStatusHasBeenSet = true; m_resourceShareStatus = std::forward<ResourceShareStatusT>(value); }
    template<typename ResourceShareStatusT = Aws::String>
    AnalyticsDataAssociationResult& WithResourceShareStatus(ResourceShareStatusT&& value) { SetResourceShareStatus(std::forward<ResourceShareStatusT>(value)); return *this;}
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

    Aws::String m_resourceShareStatus;
    bool m_resourceShareStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
