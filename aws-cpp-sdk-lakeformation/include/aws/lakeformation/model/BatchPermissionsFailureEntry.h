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
    AWS_LAKEFORMATION_API BatchPermissionsFailureEntry();
    AWS_LAKEFORMATION_API BatchPermissionsFailureEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API BatchPermissionsFailureEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier for an entry of the batch request.</p>
     */
    inline const BatchPermissionsRequestEntry& GetRequestEntry() const{ return m_requestEntry; }

    /**
     * <p>An identifier for an entry of the batch request.</p>
     */
    inline bool RequestEntryHasBeenSet() const { return m_requestEntryHasBeenSet; }

    /**
     * <p>An identifier for an entry of the batch request.</p>
     */
    inline void SetRequestEntry(const BatchPermissionsRequestEntry& value) { m_requestEntryHasBeenSet = true; m_requestEntry = value; }

    /**
     * <p>An identifier for an entry of the batch request.</p>
     */
    inline void SetRequestEntry(BatchPermissionsRequestEntry&& value) { m_requestEntryHasBeenSet = true; m_requestEntry = std::move(value); }

    /**
     * <p>An identifier for an entry of the batch request.</p>
     */
    inline BatchPermissionsFailureEntry& WithRequestEntry(const BatchPermissionsRequestEntry& value) { SetRequestEntry(value); return *this;}

    /**
     * <p>An identifier for an entry of the batch request.</p>
     */
    inline BatchPermissionsFailureEntry& WithRequestEntry(BatchPermissionsRequestEntry&& value) { SetRequestEntry(std::move(value)); return *this;}


    /**
     * <p>An error message that applies to the failure of the entry.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }

    /**
     * <p>An error message that applies to the failure of the entry.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An error message that applies to the failure of the entry.</p>
     */
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An error message that applies to the failure of the entry.</p>
     */
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An error message that applies to the failure of the entry.</p>
     */
    inline BatchPermissionsFailureEntry& WithError(const ErrorDetail& value) { SetError(value); return *this;}

    /**
     * <p>An error message that applies to the failure of the entry.</p>
     */
    inline BatchPermissionsFailureEntry& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}

  private:

    BatchPermissionsRequestEntry m_requestEntry;
    bool m_requestEntryHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
