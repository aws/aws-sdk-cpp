/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/ChangeType.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>A list of change request objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/ChangeRequest">AWS
   * API Reference</a></p>
   */
  class ChangeRequest
  {
  public:
    AWS_FINSPACE_API ChangeRequest();
    AWS_FINSPACE_API ChangeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API ChangeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the type of change request. A <code>changeType</code> can have the
     * following values:</p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul>
     */
    inline const ChangeType& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Defines the type of change request. A <code>changeType</code> can have the
     * following values:</p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>Defines the type of change request. A <code>changeType</code> can have the
     * following values:</p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul>
     */
    inline void SetChangeType(const ChangeType& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Defines the type of change request. A <code>changeType</code> can have the
     * following values:</p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul>
     */
    inline void SetChangeType(ChangeType&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>Defines the type of change request. A <code>changeType</code> can have the
     * following values:</p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul>
     */
    inline ChangeRequest& WithChangeType(const ChangeType& value) { SetChangeType(value); return *this;}

    /**
     * <p>Defines the type of change request. A <code>changeType</code> can have the
     * following values:</p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul>
     */
    inline ChangeRequest& WithChangeType(ChangeType&& value) { SetChangeType(std::move(value)); return *this;}


    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline const Aws::String& GetS3Path() const{ return m_s3Path; }

    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }

    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline void SetS3Path(const Aws::String& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }

    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline void SetS3Path(Aws::String&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }

    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline void SetS3Path(const char* value) { m_s3PathHasBeenSet = true; m_s3Path.assign(value); }

    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline ChangeRequest& WithS3Path(const Aws::String& value) { SetS3Path(value); return *this;}

    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline ChangeRequest& WithS3Path(Aws::String&& value) { SetS3Path(std::move(value)); return *this;}

    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline ChangeRequest& WithS3Path(const char* value) { SetS3Path(value); return *this;}


    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline const Aws::String& GetDbPath() const{ return m_dbPath; }

    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline bool DbPathHasBeenSet() const { return m_dbPathHasBeenSet; }

    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline void SetDbPath(const Aws::String& value) { m_dbPathHasBeenSet = true; m_dbPath = value; }

    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline void SetDbPath(Aws::String&& value) { m_dbPathHasBeenSet = true; m_dbPath = std::move(value); }

    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline void SetDbPath(const char* value) { m_dbPathHasBeenSet = true; m_dbPath.assign(value); }

    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline ChangeRequest& WithDbPath(const Aws::String& value) { SetDbPath(value); return *this;}

    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline ChangeRequest& WithDbPath(Aws::String&& value) { SetDbPath(std::move(value)); return *this;}

    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline ChangeRequest& WithDbPath(const char* value) { SetDbPath(value); return *this;}

  private:

    ChangeType m_changeType;
    bool m_changeTypeHasBeenSet = false;

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;

    Aws::String m_dbPath;
    bool m_dbPathHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
