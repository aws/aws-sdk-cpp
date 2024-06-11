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
   * Usage information for the identity.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/IdentityUsage">AWS
   * API Reference</a></p>
   */
  class IdentityUsage
  {
  public:
    AWS_COGNITOSYNC_API IdentityUsage();
    AWS_COGNITOSYNC_API IdentityUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API IdentityUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }
    inline IdentityUsage& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}
    inline IdentityUsage& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}
    inline IdentityUsage& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}
    ///@}

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
    inline IdentityUsage& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}
    inline IdentityUsage& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}
    inline IdentityUsage& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * Date on which the identity was last modified.
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline IdentityUsage& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline IdentityUsage& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of datasets for the identity.
     */
    inline int GetDatasetCount() const{ return m_datasetCount; }
    inline bool DatasetCountHasBeenSet() const { return m_datasetCountHasBeenSet; }
    inline void SetDatasetCount(int value) { m_datasetCountHasBeenSet = true; m_datasetCount = value; }
    inline IdentityUsage& WithDatasetCount(int value) { SetDatasetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * Total data storage for this identity.
     */
    inline long long GetDataStorage() const{ return m_dataStorage; }
    inline bool DataStorageHasBeenSet() const { return m_dataStorageHasBeenSet; }
    inline void SetDataStorage(long long value) { m_dataStorageHasBeenSet = true; m_dataStorage = value; }
    inline IdentityUsage& WithDataStorage(long long value) { SetDataStorage(value); return *this;}
    ///@}
  private:

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    int m_datasetCount;
    bool m_datasetCountHasBeenSet = false;

    long long m_dataStorage;
    bool m_dataStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
