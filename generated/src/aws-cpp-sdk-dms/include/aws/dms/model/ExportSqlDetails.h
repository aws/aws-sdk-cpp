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
    AWS_DATABASEMIGRATIONSERVICE_API ExportSqlDetails() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ExportSqlDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ExportSqlDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 object key for the object containing the exported metadata
     * model assessment.</p>
     */
    inline const Aws::String& GetS3ObjectKey() const { return m_s3ObjectKey; }
    inline bool S3ObjectKeyHasBeenSet() const { return m_s3ObjectKeyHasBeenSet; }
    template<typename S3ObjectKeyT = Aws::String>
    void SetS3ObjectKey(S3ObjectKeyT&& value) { m_s3ObjectKeyHasBeenSet = true; m_s3ObjectKey = std::forward<S3ObjectKeyT>(value); }
    template<typename S3ObjectKeyT = Aws::String>
    ExportSqlDetails& WithS3ObjectKey(S3ObjectKeyT&& value) { SetS3ObjectKey(std::forward<S3ObjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the object containing the exported metadata model assessment.</p>
     */
    inline const Aws::String& GetObjectURL() const { return m_objectURL; }
    inline bool ObjectURLHasBeenSet() const { return m_objectURLHasBeenSet; }
    template<typename ObjectURLT = Aws::String>
    void SetObjectURL(ObjectURLT&& value) { m_objectURLHasBeenSet = true; m_objectURL = std::forward<ObjectURLT>(value); }
    template<typename ObjectURLT = Aws::String>
    ExportSqlDetails& WithObjectURL(ObjectURLT&& value) { SetObjectURL(std::forward<ObjectURLT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3ObjectKey;
    bool m_s3ObjectKeyHasBeenSet = false;

    Aws::String m_objectURL;
    bool m_objectURLHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
