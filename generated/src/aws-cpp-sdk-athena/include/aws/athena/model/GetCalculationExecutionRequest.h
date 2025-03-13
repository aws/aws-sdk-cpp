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
  class GetCalculationExecutionRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API GetCalculationExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCalculationExecution"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The calculation execution UUID.</p>
     */
    inline const Aws::String& GetCalculationExecutionId() const { return m_calculationExecutionId; }
    inline bool CalculationExecutionIdHasBeenSet() const { return m_calculationExecutionIdHasBeenSet; }
    template<typename CalculationExecutionIdT = Aws::String>
    void SetCalculationExecutionId(CalculationExecutionIdT&& value) { m_calculationExecutionIdHasBeenSet = true; m_calculationExecutionId = std::forward<CalculationExecutionIdT>(value); }
    template<typename CalculationExecutionIdT = Aws::String>
    GetCalculationExecutionRequest& WithCalculationExecutionId(CalculationExecutionIdT&& value) { SetCalculationExecutionId(std::forward<CalculationExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_calculationExecutionId;
    bool m_calculationExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
