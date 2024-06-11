/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CognitoSync
{
namespace Model
{

  /**
   * Usage information for the identity pool.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/IdentityPoolUsage">AWS
   * API Reference</a></p>
   */
  class IdentityPoolUsage
  {
  public:
    AWS_COGNITOSYNC_API IdentityPoolUsage();
    AWS_COGNITOSYNC_API IdentityPoolUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API IdentityPoolUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }
    inline IdentityPoolUsage& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}
    inline IdentityPoolUsage& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}
    inline IdentityPoolUsage& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of sync sessions for the identity pool.
     */
    inline long long GetSyncSessionsCount() const{ return m_syncSessionsCount; }
    inline bool SyncSessionsCountHasBeenSet() const { return m_syncSessionsCountHasBeenSet; }
    inline void SetSyncSessionsCount(long long value) { m_syncSessionsCountHasBeenSet = true; m_syncSessionsCount = value; }
    inline IdentityPoolUsage& WithSyncSessionsCount(long long value) { SetSyncSessionsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * Data storage information for the identity pool.
     */
    inline long long GetDataStorage() const{ return m_dataStorage; }
    inline bool DataStorageHasBeenSet() const { return m_dataStorageHasBeenSet; }
    inline void SetDataStorage(long long value) { m_dataStorageHasBeenSet = true; m_dataStorage = value; }
    inline IdentityPoolUsage& WithDataStorage(long long value) { SetDataStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * Date on which the identity pool was last modified.
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline IdentityPoolUsage& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline IdentityPoolUsage& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    long long m_syncSessionsCount;
    bool m_syncSessionsCountHasBeenSet = false;

    long long m_dataStorage;
    bool m_dataStorageHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
