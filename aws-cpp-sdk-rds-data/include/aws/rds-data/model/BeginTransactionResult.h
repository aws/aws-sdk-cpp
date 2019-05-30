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
#include <aws/rds-data/RDSDataService_EXPORTS.h>
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
namespace RDSDataService
{
namespace Model
{
  /**
   * <p>The response elements represent the output of a request to start a SQL
      
   * transaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BeginTransactionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API BeginTransactionResult
  {
  public:
    BeginTransactionResult();
    BeginTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BeginTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionId = value; }

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionId.assign(value); }

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline BeginTransactionResult& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline BeginTransactionResult& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID of the transaction started by the call.</p>
     */
    inline BeginTransactionResult& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}

  private:

    Aws::String m_transactionId;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
