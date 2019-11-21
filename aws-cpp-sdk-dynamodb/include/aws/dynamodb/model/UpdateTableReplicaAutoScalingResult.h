/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/TableAutoScalingDescription.h>
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
  class AWS_DYNAMODB_API UpdateTableReplicaAutoScalingResult
  {
  public:
    UpdateTableReplicaAutoScalingResult();
    UpdateTableReplicaAutoScalingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateTableReplicaAutoScalingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    TableAutoScalingDescription m_tableAutoScalingDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
