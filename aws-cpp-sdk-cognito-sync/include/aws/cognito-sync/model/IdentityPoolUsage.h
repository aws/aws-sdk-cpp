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
  class AWS_COGNITOSYNC_API IdentityPoolUsage
  {
  public:
    IdentityPoolUsage();
    IdentityPoolUsage(Aws::Utils::Json::JsonView jsonValue);
    IdentityPoolUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline IdentityPoolUsage& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline IdentityPoolUsage& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline IdentityPoolUsage& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * Number of sync sessions for the identity pool.
     */
    inline long long GetSyncSessionsCount() const{ return m_syncSessionsCount; }

    /**
     * Number of sync sessions for the identity pool.
     */
    inline bool SyncSessionsCountHasBeenSet() const { return m_syncSessionsCountHasBeenSet; }

    /**
     * Number of sync sessions for the identity pool.
     */
    inline void SetSyncSessionsCount(long long value) { m_syncSessionsCountHasBeenSet = true; m_syncSessionsCount = value; }

    /**
     * Number of sync sessions for the identity pool.
     */
    inline IdentityPoolUsage& WithSyncSessionsCount(long long value) { SetSyncSessionsCount(value); return *this;}


    /**
     * Data storage information for the identity pool.
     */
    inline long long GetDataStorage() const{ return m_dataStorage; }

    /**
     * Data storage information for the identity pool.
     */
    inline bool DataStorageHasBeenSet() const { return m_dataStorageHasBeenSet; }

    /**
     * Data storage information for the identity pool.
     */
    inline void SetDataStorage(long long value) { m_dataStorageHasBeenSet = true; m_dataStorage = value; }

    /**
     * Data storage information for the identity pool.
     */
    inline IdentityPoolUsage& WithDataStorage(long long value) { SetDataStorage(value); return *this;}


    /**
     * Date on which the identity pool was last modified.
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * Date on which the identity pool was last modified.
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * Date on which the identity pool was last modified.
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * Date on which the identity pool was last modified.
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * Date on which the identity pool was last modified.
     */
    inline IdentityPoolUsage& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * Date on which the identity pool was last modified.
     */
    inline IdentityPoolUsage& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;

    long long m_syncSessionsCount;
    bool m_syncSessionsCountHasBeenSet;

    long long m_dataStorage;
    bool m_dataStorageHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
