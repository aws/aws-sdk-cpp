/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/BatchPutPropertyError.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that contains information about errors returned by the
   * <code>BatchPutProperty</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/BatchPutPropertyErrorEntry">AWS
   * API Reference</a></p>
   */
  class BatchPutPropertyErrorEntry
  {
  public:
    AWS_IOTTWINMAKER_API BatchPutPropertyErrorEntry() = default;
    AWS_IOTTWINMAKER_API BatchPutPropertyErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API BatchPutPropertyErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of objects that contain information about errors returned by the
     * <code>BatchPutProperty</code> action.</p>
     */
    inline const Aws::Vector<BatchPutPropertyError>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<BatchPutPropertyError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchPutPropertyError>>
    BatchPutPropertyErrorEntry& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchPutPropertyError>
    BatchPutPropertyErrorEntry& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BatchPutPropertyError> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
