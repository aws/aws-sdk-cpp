/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class GetCalculationExecutionStatusRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API GetCalculationExecutionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCalculationExecutionStatus"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The calculation execution UUID.</p>
     */
    inline const Aws::String& GetCalculationExecutionId() const{ return m_calculationExecutionId; }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline bool CalculationExecutionIdHasBeenSet() const { return m_calculationExecutionIdHasBeenSet; }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(const Aws::String& value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId = value; }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(Aws::String&& value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId = std::move(value); }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline void SetCalculationExecutionId(const char* value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId.assign(value); }

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline GetCalculationExecutionStatusRequest& WithCalculationExecutionId(const Aws::String& value) { SetCalculationExecutionId(value); return *this;}

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline GetCalculationExecutionStatusRequest& WithCalculationExecutionId(Aws::String&& value) { SetCalculationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The calculation execution UUID.</p>
     */
    inline GetCalculationExecutionStatusRequest& WithCalculationExecutionId(const char* value) { SetCalculationExecutionId(value); return *this;}

  private:

    Aws::String m_calculationExecutionId;
    bool m_calculationExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
