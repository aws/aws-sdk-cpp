/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableAutoScalingDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class UpdateTableReplicaAutoScalingResult
  {
  public:
    AWS_DYNAMODB_API UpdateTableReplicaAutoScalingResult();
    AWS_DYNAMODB_API UpdateTableReplicaAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API UpdateTableReplicaAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about the auto scaling settings of a table with
     * replicas.</p>
     */
    inline const TableAutoScalingDescription& GetTableAutoScalingDescription() const{ return m_tableAutoScalingDescription; }

    /**
     * <p>Returns information about the auto scaling settings of a table with
     * replicas.</p>
     */
    inline void SetTableAutoScalingDescription(const TableAutoScalingDescription& value) { m_tableAutoScalingDescription = value; }

    /**
     * <p>Returns information about the auto scaling settings of a table with
     * replicas.</p>
     */
    inline void SetTableAutoScalingDescription(TableAutoScalingDescription&& value) { m_tableAutoScalingDescription = std::move(value); }

    /**
     * <p>Returns information about the auto scaling settings of a table with
     * replicas.</p>
     */
    inline UpdateTableReplicaAutoScalingResult& WithTableAutoScalingDescription(const TableAutoScalingDescription& value) { SetTableAutoScalingDescription(value); return *this;}

    /**
     * <p>Returns information about the auto scaling settings of a table with
     * replicas.</p>
     */
    inline UpdateTableReplicaAutoScalingResult& WithTableAutoScalingDescription(TableAutoScalingDescription&& value) { SetTableAutoScalingDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTableReplicaAutoScalingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTableReplicaAutoScalingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTableReplicaAutoScalingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TableAutoScalingDescription m_tableAutoScalingDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
