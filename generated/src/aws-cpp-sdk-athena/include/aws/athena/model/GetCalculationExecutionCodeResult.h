/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{
  class GetCalculationExecutionCodeResult
  {
  public:
    AWS_ATHENA_API GetCalculationExecutionCodeResult();
    AWS_ATHENA_API GetCalculationExecutionCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API GetCalculationExecutionCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unencrypted code that was executed for the calculation.</p>
     */
    inline const Aws::String& GetCodeBlock() const{ return m_codeBlock; }

    /**
     * <p>The unencrypted code that was executed for the calculation.</p>
     */
    inline void SetCodeBlock(const Aws::String& value) { m_codeBlock = value; }

    /**
     * <p>The unencrypted code that was executed for the calculation.</p>
     */
    inline void SetCodeBlock(Aws::String&& value) { m_codeBlock = std::move(value); }

    /**
     * <p>The unencrypted code that was executed for the calculation.</p>
     */
    inline void SetCodeBlock(const char* value) { m_codeBlock.assign(value); }

    /**
     * <p>The unencrypted code that was executed for the calculation.</p>
     */
    inline GetCalculationExecutionCodeResult& WithCodeBlock(const Aws::String& value) { SetCodeBlock(value); return *this;}

    /**
     * <p>The unencrypted code that was executed for the calculation.</p>
     */
    inline GetCalculationExecutionCodeResult& WithCodeBlock(Aws::String&& value) { SetCodeBlock(std::move(value)); return *this;}

    /**
     * <p>The unencrypted code that was executed for the calculation.</p>
     */
    inline GetCalculationExecutionCodeResult& WithCodeBlock(const char* value) { SetCodeBlock(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCalculationExecutionCodeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCalculationExecutionCodeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCalculationExecutionCodeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_codeBlock;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
