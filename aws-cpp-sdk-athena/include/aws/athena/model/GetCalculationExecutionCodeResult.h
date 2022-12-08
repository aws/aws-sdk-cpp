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
     * <p>A pre-signed URL to the code that executed the calculation.</p>
     */
    inline const Aws::String& GetCodeBlock() const{ return m_codeBlock; }

    /**
     * <p>A pre-signed URL to the code that executed the calculation.</p>
     */
    inline void SetCodeBlock(const Aws::String& value) { m_codeBlock = value; }

    /**
     * <p>A pre-signed URL to the code that executed the calculation.</p>
     */
    inline void SetCodeBlock(Aws::String&& value) { m_codeBlock = std::move(value); }

    /**
     * <p>A pre-signed URL to the code that executed the calculation.</p>
     */
    inline void SetCodeBlock(const char* value) { m_codeBlock.assign(value); }

    /**
     * <p>A pre-signed URL to the code that executed the calculation.</p>
     */
    inline GetCalculationExecutionCodeResult& WithCodeBlock(const Aws::String& value) { SetCodeBlock(value); return *this;}

    /**
     * <p>A pre-signed URL to the code that executed the calculation.</p>
     */
    inline GetCalculationExecutionCodeResult& WithCodeBlock(Aws::String&& value) { SetCodeBlock(std::move(value)); return *this;}

    /**
     * <p>A pre-signed URL to the code that executed the calculation.</p>
     */
    inline GetCalculationExecutionCodeResult& WithCodeBlock(const char* value) { SetCodeBlock(value); return *this;}

  private:

    Aws::String m_codeBlock;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
