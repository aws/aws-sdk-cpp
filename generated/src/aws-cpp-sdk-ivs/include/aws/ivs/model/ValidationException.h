/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IVS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_IVS_API ValidationException() = default;
    AWS_IVS_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by an Amazon Web
     * Services service.</p>
     */
    inline const Aws::String& GetExceptionMessage() const { return m_exceptionMessage; }
    inline bool ExceptionMessageHasBeenSet() const { return m_exceptionMessageHasBeenSet; }
    template<typename ExceptionMessageT = Aws::String>
    void SetExceptionMessage(ExceptionMessageT&& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = std::forward<ExceptionMessageT>(value); }
    template<typename ExceptionMessageT = Aws::String>
    ValidationException& WithExceptionMessage(ExceptionMessageT&& value) { SetExceptionMessage(std::forward<ExceptionMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exceptionMessage;
    bool m_exceptionMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
