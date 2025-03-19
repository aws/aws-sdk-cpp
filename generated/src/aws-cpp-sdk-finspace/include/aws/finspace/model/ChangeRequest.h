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
    AWS_FINSPACE_API ChangeRequest() = default;
    AWS_FINSPACE_API ChangeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API ChangeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the type of change request. A <code>changeType</code> can have the
     * following values:</p> <ul> <li> <p>PUT – Adds or updates files in a
     * database.</p> </li> <li> <p>DELETE – Deletes files in a database.</p> </li>
     * </ul>
     */
    inline ChangeType GetChangeType() const { return m_changeType; }
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
    inline void SetChangeType(ChangeType value) { m_changeTypeHasBeenSet = true; m_changeType = value; }
    inline ChangeRequest& WithChangeType(ChangeType value) { SetChangeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the S3 path of the source file that is required to add or update
     * files in a database.</p>
     */
    inline const Aws::String& GetS3Path() const { return m_s3Path; }
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }
    template<typename S3PathT = Aws::String>
    void SetS3Path(S3PathT&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::forward<S3PathT>(value); }
    template<typename S3PathT = Aws::String>
    ChangeRequest& WithS3Path(S3PathT&& value) { SetS3Path(std::forward<S3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the path within the database directory. </p>
     */
    inline const Aws::String& GetDbPath() const { return m_dbPath; }
    inline bool DbPathHasBeenSet() const { return m_dbPathHasBeenSet; }
    template<typename DbPathT = Aws::String>
    void SetDbPath(DbPathT&& value) { m_dbPathHasBeenSet = true; m_dbPath = std::forward<DbPathT>(value); }
    template<typename DbPathT = Aws::String>
    ChangeRequest& WithDbPath(DbPathT&& value) { SetDbPath(std::forward<DbPathT>(value)); return *this;}
    ///@}
  private:

    ChangeType m_changeType{ChangeType::NOT_SET};
    bool m_changeTypeHasBeenSet = false;

    Aws::String m_s3Path;
    bool m_s3PathHasBeenSet = false;

    Aws::String m_dbPath;
    bool m_dbPathHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
