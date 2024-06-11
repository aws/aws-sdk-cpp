/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ErrorDetail.h>
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
   * <p>An error record for table-version operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableVersionError">AWS
   * API Reference</a></p>
   */
  class TableVersionError
  {
  public:
    AWS_GLUE_API TableVersionError();
    AWS_GLUE_API TableVersionError(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableVersionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the table in question.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline TableVersionError& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline TableVersionError& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline TableVersionError& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline TableVersionError& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline TableVersionError& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline TableVersionError& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the error.</p>
     */
    inline const ErrorDetail& GetErrorDetail() const{ return m_errorDetail; }
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }
    inline void SetErrorDetail(const ErrorDetail& value) { m_errorDetailHasBeenSet = true; m_errorDetail = value; }
    inline void SetErrorDetail(ErrorDetail&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::move(value); }
    inline TableVersionError& WithErrorDetail(const ErrorDetail& value) { SetErrorDetail(value); return *this;}
    inline TableVersionError& WithErrorDetail(ErrorDetail&& value) { SetErrorDetail(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    ErrorDetail m_errorDetail;
    bool m_errorDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
