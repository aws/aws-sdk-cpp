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
    AWS_FORECASTSERVICE_API DescribeDatasetGroupResult();
    AWS_FORECASTSERVICE_API DescribeDatasetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeDatasetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupName() const{ return m_datasetGroupName; }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline void SetDatasetGroupName(const Aws::String& value) { m_datasetGroupName = value; }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline void SetDatasetGroupName(Aws::String&& value) { m_datasetGroupName = std::move(value); }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline void SetDatasetGroupName(const char* value) { m_datasetGroupName.assign(value); }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroupName(const Aws::String& value) { SetDatasetGroupName(value); return *this;}

    /**
     * <p>The name of the dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroupName(Aws::String&& value) { SetDatasetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroupName(const char* value) { SetDatasetGroupName(value); return *this;}


    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArn = value; }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArn = std::move(value); }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArn.assign(value); }

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetArns() const{ return m_datasetArns; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline void SetDatasetArns(const Aws::Vector<Aws::String>& value) { m_datasetArns = value; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline void SetDatasetArns(Aws::Vector<Aws::String>&& value) { m_datasetArns = std::move(value); }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetArns(const Aws::Vector<Aws::String>& value) { SetDatasetArns(value); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDatasetArns(Aws::Vector<Aws::String>&& value) { SetDatasetArns(std::move(value)); return *this;}

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline DescribeDatasetGroupResult& AddDatasetArns(const Aws::String& value) { m_datasetArns.push_back(value); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline DescribeDatasetGroupResult& AddDatasetArns(Aws::String&& value) { m_datasetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of Amazon Resource Names (ARNs) of the datasets contained in the
     * dataset group.</p>
     */
    inline DescribeDatasetGroupResult& AddDatasetArns(const char* value) { m_datasetArns.push_back(value); return *this; }


    /**
     * <p>The domain associated with the dataset group.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain associated with the dataset group.</p>
     */
    inline void SetDomain(const Domain& value) { m_domain = value; }

    /**
     * <p>The domain associated with the dataset group.</p>
     */
    inline void SetDomain(Domain&& value) { m_domain = std::move(value); }

    /**
     * <p>The domain associated with the dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain associated with the dataset group.</p>
     */
    inline DescribeDatasetGroupResult& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


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
    inline const Aws::String& GetStatus() const{ return m_status; }

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
    inline void SetStatus(const Aws::String& value) { m_status = value; }

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
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

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
    inline void SetStatus(const char* value) { m_status.assign(value); }

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
    inline DescribeDatasetGroupResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

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
    inline DescribeDatasetGroupResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

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
    inline DescribeDatasetGroupResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>When the dataset group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the dataset group was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the dataset group was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the dataset group was created.</p>
     */
    inline DescribeDatasetGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the dataset group was created.</p>
     */
    inline DescribeDatasetGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDatasetGroup</code> call.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDatasetGroup</code> call.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDatasetGroup</code> call.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDatasetGroup</code> call.</p>
     */
    inline DescribeDatasetGroupResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDatasetGroup</code> call.</p>
     */
    inline DescribeDatasetGroupResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_datasetGroupName;

    Aws::String m_datasetGroupArn;

    Aws::Vector<Aws::String> m_datasetArns;

    Domain m_domain;

    Aws::String m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
