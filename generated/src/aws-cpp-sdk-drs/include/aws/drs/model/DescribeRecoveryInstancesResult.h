/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/RecoveryInstance.h>
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
namespace drs
{
namespace Model
{
  class DescribeRecoveryInstancesResult
  {
  public:
    AWS_DRS_API DescribeRecoveryInstancesResult();
    AWS_DRS_API DescribeRecoveryInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API DescribeRecoveryInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of Recovery Instances.</p>
     */
    inline const Aws::Vector<RecoveryInstance>& GetItems() const{ return m_items; }

    /**
     * <p>An array of Recovery Instances.</p>
     */
    inline void SetItems(const Aws::Vector<RecoveryInstance>& value) { m_items = value; }

    /**
     * <p>An array of Recovery Instances.</p>
     */
    inline void SetItems(Aws::Vector<RecoveryInstance>&& value) { m_items = std::move(value); }

    /**
     * <p>An array of Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesResult& WithItems(const Aws::Vector<RecoveryInstance>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesResult& WithItems(Aws::Vector<RecoveryInstance>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesResult& AddItems(const RecoveryInstance& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesResult& AddItems(RecoveryInstance&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline DescribeRecoveryInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline DescribeRecoveryInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline DescribeRecoveryInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RecoveryInstance> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
