/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/DeleteUniqueIdErrorType.h>
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
    AWS_ENTITYRESOLUTION_API DeleteUniqueIdError();
    AWS_ENTITYRESOLUTION_API DeleteUniqueIdError(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API DeleteUniqueIdError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The error type for the batch delete unique ID operation.</p>
     */
    inline const DeleteUniqueIdErrorType& GetErrorType() const{ return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(const DeleteUniqueIdErrorType& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline void SetErrorType(DeleteUniqueIdErrorType&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }
    inline DeleteUniqueIdError& WithErrorType(const DeleteUniqueIdErrorType& value) { SetErrorType(value); return *this;}
    inline DeleteUniqueIdError& WithErrorType(DeleteUniqueIdErrorType&& value) { SetErrorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID that could not be deleted.</p>
     */
    inline const Aws::String& GetUniqueId() const{ return m_uniqueId; }
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }
    inline void SetUniqueId(const Aws::String& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = value; }
    inline void SetUniqueId(Aws::String&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::move(value); }
    inline void SetUniqueId(const char* value) { m_uniqueIdHasBeenSet = true; m_uniqueId.assign(value); }
    inline DeleteUniqueIdError& WithUniqueId(const Aws::String& value) { SetUniqueId(value); return *this;}
    inline DeleteUniqueIdError& WithUniqueId(Aws::String&& value) { SetUniqueId(std::move(value)); return *this;}
    inline DeleteUniqueIdError& WithUniqueId(const char* value) { SetUniqueId(value); return *this;}
    ///@}
  private:

    DeleteUniqueIdErrorType m_errorType;
    bool m_errorTypeHasBeenSet = false;

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
