/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API TableVersionError
  {
  public:
    TableVersionError();
    TableVersionError(Aws::Utils::Json::JsonView jsonValue);
    TableVersionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the table in question.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table in question.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table in question.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table in question.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table in question.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table in question.</p>
     */
    inline TableVersionError& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table in question.</p>
     */
    inline TableVersionError& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table in question.</p>
     */
    inline TableVersionError& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline TableVersionError& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline TableVersionError& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The ID value of the version in question. A <code>VersionID</code> is a string
     * representation of an integer. Each version is incremented by 1.</p>
     */
    inline TableVersionError& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>Detail about the error.</p>
     */
    inline const ErrorDetail& GetErrorDetail() const{ return m_errorDetail; }

    /**
     * <p>Detail about the error.</p>
     */
    inline bool ErrorDetailHasBeenSet() const { return m_errorDetailHasBeenSet; }

    /**
     * <p>Detail about the error.</p>
     */
    inline void SetErrorDetail(const ErrorDetail& value) { m_errorDetailHasBeenSet = true; m_errorDetail = value; }

    /**
     * <p>Detail about the error.</p>
     */
    inline void SetErrorDetail(ErrorDetail&& value) { m_errorDetailHasBeenSet = true; m_errorDetail = std::move(value); }

    /**
     * <p>Detail about the error.</p>
     */
    inline TableVersionError& WithErrorDetail(const ErrorDetail& value) { SetErrorDetail(value); return *this;}

    /**
     * <p>Detail about the error.</p>
     */
    inline TableVersionError& WithErrorDetail(ErrorDetail&& value) { SetErrorDetail(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet;

    ErrorDetail m_errorDetail;
    bool m_errorDetailHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
