/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
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
namespace LakeFormation
{
namespace Model
{
  class StartTransactionResult
  {
  public:
    AWS_LAKEFORMATION_API StartTransactionResult();
    AWS_LAKEFORMATION_API StartTransactionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API StartTransactionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An opaque identifier for the transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>An opaque identifier for the transaction.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionId = value; }

    /**
     * <p>An opaque identifier for the transaction.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionId = std::move(value); }

    /**
     * <p>An opaque identifier for the transaction.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionId.assign(value); }

    /**
     * <p>An opaque identifier for the transaction.</p>
     */
    inline StartTransactionResult& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>An opaque identifier for the transaction.</p>
     */
    inline StartTransactionResult& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>An opaque identifier for the transaction.</p>
     */
    inline StartTransactionResult& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartTransactionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartTransactionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartTransactionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_transactionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
