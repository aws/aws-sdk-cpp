/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/DeleteUniqueIdErrorType.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The Delete Unique Id error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/DeleteUniqueIdError">AWS
   * API Reference</a></p>
   */
  class DeleteUniqueIdError
  {
  public:
    AWS_ENTITYRESOLUTION_API DeleteUniqueIdError() = default;
    AWS_ENTITYRESOLUTION_API DeleteUniqueIdError(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API DeleteUniqueIdError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID that could not be deleted.</p>
     */
    inline const Aws::String& GetUniqueId() const { return m_uniqueId; }
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }
    template<typename UniqueIdT = Aws::String>
    void SetUniqueId(UniqueIdT&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::forward<UniqueIdT>(value); }
    template<typename UniqueIdT = Aws::String>
    DeleteUniqueIdError& WithUniqueId(UniqueIdT&& value) { SetUniqueId(std::forward<UniqueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error type for the batch delete unique ID operation.</p>
     */
    inline DeleteUniqueIdErrorType GetErrorType() const { return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(DeleteUniqueIdErrorType value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline DeleteUniqueIdError& WithErrorType(DeleteUniqueIdErrorType value) { SetErrorType(value); return *this;}
    ///@}
  private:

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet = false;

    DeleteUniqueIdErrorType m_errorType{DeleteUniqueIdErrorType::NOT_SET};
    bool m_errorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
