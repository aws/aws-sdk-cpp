/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/BatchPermissionsRequestEntry.h>
#include <aws/lakeformation/model/ErrorDetail.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A list of failures when performing a batch grant or batch revoke
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchPermissionsFailureEntry">AWS
   * API Reference</a></p>
   */
  class BatchPermissionsFailureEntry
  {
  public:
    AWS_LAKEFORMATION_API BatchPermissionsFailureEntry() = default;
    AWS_LAKEFORMATION_API BatchPermissionsFailureEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API BatchPermissionsFailureEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for an entry of the batch request.</p>
     */
    inline const BatchPermissionsRequestEntry& GetRequestEntry() const { return m_requestEntry; }
    inline bool RequestEntryHasBeenSet() const { return m_requestEntryHasBeenSet; }
    template<typename RequestEntryT = BatchPermissionsRequestEntry>
    void SetRequestEntry(RequestEntryT&& value) { m_requestEntryHasBeenSet = true; m_requestEntry = std::forward<RequestEntryT>(value); }
    template<typename RequestEntryT = BatchPermissionsRequestEntry>
    BatchPermissionsFailureEntry& WithRequestEntry(RequestEntryT&& value) { SetRequestEntry(std::forward<RequestEntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message that applies to the failure of the entry.</p>
     */
    inline const ErrorDetail& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    BatchPermissionsFailureEntry& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    BatchPermissionsRequestEntry m_requestEntry;
    bool m_requestEntryHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
