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
   * <p>The response elements represent the output of a request to perform a rollback
   * of a
            transaction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/RollbackTransactionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API RollbackTransactionResult
  {
  public:
    RollbackTransactionResult();
    RollbackTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RollbackTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the rollback operation.</p>
     */
    inline const Aws::String& GetTransactionStatus() const{ return m_transactionStatus; }

    /**
     * <p>The status of the rollback operation.</p>
     */
    inline void SetTransactionStatus(const Aws::String& value) { m_transactionStatus = value; }

    /**
     * <p>The status of the rollback operation.</p>
     */
    inline void SetTransactionStatus(Aws::String&& value) { m_transactionStatus = std::move(value); }

    /**
     * <p>The status of the rollback operation.</p>
     */
    inline void SetTransactionStatus(const char* value) { m_transactionStatus.assign(value); }

    /**
     * <p>The status of the rollback operation.</p>
     */
    inline RollbackTransactionResult& WithTransactionStatus(const Aws::String& value) { SetTransactionStatus(value); return *this;}

    /**
     * <p>The status of the rollback operation.</p>
     */
    inline RollbackTransactionResult& WithTransactionStatus(Aws::String&& value) { SetTransactionStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the rollback operation.</p>
     */
    inline RollbackTransactionResult& WithTransactionStatus(const char* value) { SetTransactionStatus(value); return *this;}

  private:

    Aws::String m_transactionStatus;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
