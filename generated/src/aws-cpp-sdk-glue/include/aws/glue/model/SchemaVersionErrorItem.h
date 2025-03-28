﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ErrorDetails.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>An object that contains the error details for an operation on a schema
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SchemaVersionErrorItem">AWS
   * API Reference</a></p>
   */
  class SchemaVersionErrorItem
  {
  public:
    AWS_GLUE_API SchemaVersionErrorItem() = default;
    AWS_GLUE_API SchemaVersionErrorItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SchemaVersionErrorItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version number of the schema.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline SchemaVersionErrorItem& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the error for the schema version.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ErrorDetails>
    SchemaVersionErrorItem& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}
  private:

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
