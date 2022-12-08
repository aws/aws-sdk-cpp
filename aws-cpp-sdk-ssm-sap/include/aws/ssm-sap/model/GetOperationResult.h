/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/Operation.h>
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
namespace SsmSap
{
namespace Model
{
  class GetOperationResult
  {
  public:
    AWS_SSMSAP_API GetOperationResult();
    AWS_SSMSAP_API GetOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API GetOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p/>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p/>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p/>
     */
    inline GetOperationResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p/>
     */
    inline GetOperationResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    Operation m_operation;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
