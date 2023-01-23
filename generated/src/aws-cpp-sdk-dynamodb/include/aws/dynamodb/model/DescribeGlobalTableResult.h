/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/GlobalTableDescription.h>
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
  class DescribeGlobalTableResult
  {
  public:
    AWS_DYNAMODB_API DescribeGlobalTableResult();
    AWS_DYNAMODB_API DescribeGlobalTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeGlobalTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the details of the global table.</p>
     */
    inline const GlobalTableDescription& GetGlobalTableDescription() const{ return m_globalTableDescription; }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline void SetGlobalTableDescription(const GlobalTableDescription& value) { m_globalTableDescription = value; }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline void SetGlobalTableDescription(GlobalTableDescription&& value) { m_globalTableDescription = std::move(value); }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline DescribeGlobalTableResult& WithGlobalTableDescription(const GlobalTableDescription& value) { SetGlobalTableDescription(value); return *this;}

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline DescribeGlobalTableResult& WithGlobalTableDescription(GlobalTableDescription&& value) { SetGlobalTableDescription(std::move(value)); return *this;}

  private:

    GlobalTableDescription m_globalTableDescription;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
