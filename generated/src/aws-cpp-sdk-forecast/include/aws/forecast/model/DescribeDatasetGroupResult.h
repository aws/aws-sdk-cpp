/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Domain.h>
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
namespace ForecastService
{
namespace Model
{
  class DescribeDatasetGroupResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeDatasetGroupResult() = default;
    AWS_FORECASTSERVICE_API DescribeDatasetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeDatasetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupName() const { return m_datasetGroupName; }
    template<typename DatasetGroupNameT = Aws::String>
    void SetDatasetGroupName(DatasetGroupNameT&& value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName = std::forward<DatasetGroupNameT>(value); }
    template<typename DatasetGroupNameT = Aws::String>
    DescribeDatasetGroupResult& WithDatasetGroupName(DatasetGroupNameT&& value) { SetDatasetGroupName(std::forward<DatasetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    DescribeDatasetGroupResult& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetArns() const { return m_datasetArns; }
    template<typename DatasetArnsT = Aws::Vector<Aws::String>>
    void SetDatasetArns(DatasetArnsT&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns = std::forward<DatasetArnsT>(value); }
    template<typename DatasetArnsT = Aws::Vector<Aws::String>>
    DescribeDatasetGroupResult& WithDatasetArns(DatasetArnsT&& value) { SetDatasetArns(std::forward<DatasetArnsT>(value)); return *this;}
    template<typename DatasetArnsT = Aws::String>
    DescribeDatasetGroupResult& AddDatasetArns(DatasetArnsT&& value) { m_datasetArnsHasBeenSet = true; m_datasetArns.emplace_back(std::forward<DatasetArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domain associated with the dataset group.</p>
     */
    inline Domain GetDomain() const { return m_domain; }
    inline void SetDomain(Domain value) { m_domainHasBeenSet = true; m_domain = value; }
    inline DescribeDatasetGroupResult& WithDomain(Domain value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset group. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <p>The <code>UPDATE</code> states apply when you call the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation.</p>  <p>The <code>Status</code> of the dataset group must be
     * <code>ACTIVE</code> before you can use the dataset group to create a
     * predictor.</p> 
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeDatasetGroupResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeDatasetGroupResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDatasetGroup</code> call.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribeDatasetGroupResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetGroupName;
    bool m_datasetGroupNameHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_datasetArns;
    bool m_datasetArnsHasBeenSet = false;

    Domain m_domain{Domain::NOT_SET};
    bool m_domainHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
