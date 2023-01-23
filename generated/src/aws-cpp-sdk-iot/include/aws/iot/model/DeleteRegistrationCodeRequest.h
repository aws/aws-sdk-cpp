/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DeleteRegistrationCode operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRegistrationCodeRequest">AWS
   * API Reference</a></p>
   */
  class DeleteRegistrationCodeRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteRegistrationCodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRegistrationCode"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace IoT
} // namespace Aws
