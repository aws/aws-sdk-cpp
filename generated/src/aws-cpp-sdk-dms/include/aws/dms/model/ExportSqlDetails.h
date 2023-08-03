/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information about a metadata model assessment exported to
   * SQL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ExportSqlDetails">AWS
   * API Reference</a></p>
   */
  class ExportSqlDetails
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ExportSqlDetails();
    AWS_DATABASEMIGRATIONSERVICE_API ExportSqlDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ExportSqlDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline const Aws::String& GetS3ObjectKey() const{ return m_s3ObjectKey; }

    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline bool S3ObjectKeyHasBeenSet() const { return m_s3ObjectKeyHasBeenSet; }

    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline void SetS3ObjectKey(const Aws::String& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = value; }

    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline void SetS3ObjectKey(Aws::String&& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = std::move(value); }

    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline void SetS3ObjectKey(const char* value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey.assign(value); }

    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline ExportSqlDetails& WithS3ObjectKey(const Aws::String& value) { SetS3ObjectKey(value); return *this;}

    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline ExportSqlDetails& WithS3ObjectKey(Aws::String&& value) { SetS3ObjectKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline ExportSqlDetails& WithS3ObjectKey(const char* value) { SetS3ObjectKey(value); return *this;}


    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline const Aws::String& GetObjectURL() const{ return m_objectURL; }

    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline bool ObjectURLHasBeenSet() const { return m_objectURLHasBeenSet; }

    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline void SetObjectURL(const Aws::String& value) { m_objectURLHasBeenSet = true; m_objectURL = value; }

    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline void SetObjectURL(Aws::String&& value) { m_objectURLHasBeenSet = true; m_objectURL = std::move(value); }

    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline void SetObjectURL(const char* value) { m_objectURLHasBeenSet = true; m_objectURL.assign(value); }

    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline ExportSqlDetails& WithObjectURL(const Aws::String& value) { SetObjectURL(value); return *this;}

    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline ExportSqlDetails& WithObjectURL(Aws::String&& value) { SetObjectURL(std::move(value)); return *this;}

    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline ExportSqlDetails& WithObjectURL(const char* value) { SetObjectURL(value); return *this;}

  private:

    Aws::String m_s3ObjectKey;
    bool m_s3ObjectKeyHasBeenSet = false;

    Aws::String m_objectURL;
    bool m_objectURLHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
