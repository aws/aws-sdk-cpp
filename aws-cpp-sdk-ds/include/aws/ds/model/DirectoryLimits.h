/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/DirectoryService_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains directory limit information for a region.</p>
   */
  class AWS_DIRECTORYSERVICE_API DirectoryLimits
  {
  public:
    DirectoryLimits();
    DirectoryLimits(const Aws::Utils::Json::JsonValue& jsonValue);
    DirectoryLimits& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The maximum number of cloud directories allowed in the region.</p>
     */
    inline long GetCloudOnlyDirectoriesLimit() const{ return m_cloudOnlyDirectoriesLimit; }

    /**
     * <p>The maximum number of cloud directories allowed in the region.</p>
     */
    inline void SetCloudOnlyDirectoriesLimit(long value) { m_cloudOnlyDirectoriesLimitHasBeenSet = true; m_cloudOnlyDirectoriesLimit = value; }

    /**
     * <p>The maximum number of cloud directories allowed in the region.</p>
     */
    inline DirectoryLimits& WithCloudOnlyDirectoriesLimit(long value) { SetCloudOnlyDirectoriesLimit(value); return *this;}

    /**
     * <p>The current number of cloud directories in the region.</p>
     */
    inline long GetCloudOnlyDirectoriesCurrentCount() const{ return m_cloudOnlyDirectoriesCurrentCount; }

    /**
     * <p>The current number of cloud directories in the region.</p>
     */
    inline void SetCloudOnlyDirectoriesCurrentCount(long value) { m_cloudOnlyDirectoriesCurrentCountHasBeenSet = true; m_cloudOnlyDirectoriesCurrentCount = value; }

    /**
     * <p>The current number of cloud directories in the region.</p>
     */
    inline DirectoryLimits& WithCloudOnlyDirectoriesCurrentCount(long value) { SetCloudOnlyDirectoriesCurrentCount(value); return *this;}

    /**
     * <p>Indicates if the cloud directory limit has been reached.</p>
     */
    inline bool GetCloudOnlyDirectoriesLimitReached() const{ return m_cloudOnlyDirectoriesLimitReached; }

    /**
     * <p>Indicates if the cloud directory limit has been reached.</p>
     */
    inline void SetCloudOnlyDirectoriesLimitReached(bool value) { m_cloudOnlyDirectoriesLimitReachedHasBeenSet = true; m_cloudOnlyDirectoriesLimitReached = value; }

    /**
     * <p>Indicates if the cloud directory limit has been reached.</p>
     */
    inline DirectoryLimits& WithCloudOnlyDirectoriesLimitReached(bool value) { SetCloudOnlyDirectoriesLimitReached(value); return *this;}

    /**
     * The maximum number of Microsoft AD directories allowed in the region.
     */
    inline long GetCloudOnlyMicrosoftADLimit() const{ return m_cloudOnlyMicrosoftADLimit; }

    /**
     * The maximum number of Microsoft AD directories allowed in the region.
     */
    inline void SetCloudOnlyMicrosoftADLimit(long value) { m_cloudOnlyMicrosoftADLimitHasBeenSet = true; m_cloudOnlyMicrosoftADLimit = value; }

    /**
     * The maximum number of Microsoft AD directories allowed in the region.
     */
    inline DirectoryLimits& WithCloudOnlyMicrosoftADLimit(long value) { SetCloudOnlyMicrosoftADLimit(value); return *this;}

    /**
     * The current number of Microsoft AD directories in the region.
     */
    inline long GetCloudOnlyMicrosoftADCurrentCount() const{ return m_cloudOnlyMicrosoftADCurrentCount; }

    /**
     * The current number of Microsoft AD directories in the region.
     */
    inline void SetCloudOnlyMicrosoftADCurrentCount(long value) { m_cloudOnlyMicrosoftADCurrentCountHasBeenSet = true; m_cloudOnlyMicrosoftADCurrentCount = value; }

    /**
     * The current number of Microsoft AD directories in the region.
     */
    inline DirectoryLimits& WithCloudOnlyMicrosoftADCurrentCount(long value) { SetCloudOnlyMicrosoftADCurrentCount(value); return *this;}

    /**
     * Indicates if the Microsoft AD directory limit has been reached.
     */
    inline bool GetCloudOnlyMicrosoftADLimitReached() const{ return m_cloudOnlyMicrosoftADLimitReached; }

    /**
     * Indicates if the Microsoft AD directory limit has been reached.
     */
    inline void SetCloudOnlyMicrosoftADLimitReached(bool value) { m_cloudOnlyMicrosoftADLimitReachedHasBeenSet = true; m_cloudOnlyMicrosoftADLimitReached = value; }

    /**
     * Indicates if the Microsoft AD directory limit has been reached.
     */
    inline DirectoryLimits& WithCloudOnlyMicrosoftADLimitReached(bool value) { SetCloudOnlyMicrosoftADLimitReached(value); return *this;}

    /**
     * <p>The maximum number of connected directories allowed in the region.</p>
     */
    inline long GetConnectedDirectoriesLimit() const{ return m_connectedDirectoriesLimit; }

    /**
     * <p>The maximum number of connected directories allowed in the region.</p>
     */
    inline void SetConnectedDirectoriesLimit(long value) { m_connectedDirectoriesLimitHasBeenSet = true; m_connectedDirectoriesLimit = value; }

    /**
     * <p>The maximum number of connected directories allowed in the region.</p>
     */
    inline DirectoryLimits& WithConnectedDirectoriesLimit(long value) { SetConnectedDirectoriesLimit(value); return *this;}

    /**
     * <p>The current number of connected directories in the region.</p>
     */
    inline long GetConnectedDirectoriesCurrentCount() const{ return m_connectedDirectoriesCurrentCount; }

    /**
     * <p>The current number of connected directories in the region.</p>
     */
    inline void SetConnectedDirectoriesCurrentCount(long value) { m_connectedDirectoriesCurrentCountHasBeenSet = true; m_connectedDirectoriesCurrentCount = value; }

    /**
     * <p>The current number of connected directories in the region.</p>
     */
    inline DirectoryLimits& WithConnectedDirectoriesCurrentCount(long value) { SetConnectedDirectoriesCurrentCount(value); return *this;}

    /**
     * <p>Indicates if the connected directory limit has been reached.</p>
     */
    inline bool GetConnectedDirectoriesLimitReached() const{ return m_connectedDirectoriesLimitReached; }

    /**
     * <p>Indicates if the connected directory limit has been reached.</p>
     */
    inline void SetConnectedDirectoriesLimitReached(bool value) { m_connectedDirectoriesLimitReachedHasBeenSet = true; m_connectedDirectoriesLimitReached = value; }

    /**
     * <p>Indicates if the connected directory limit has been reached.</p>
     */
    inline DirectoryLimits& WithConnectedDirectoriesLimitReached(bool value) { SetConnectedDirectoriesLimitReached(value); return *this;}

  private:
    long m_cloudOnlyDirectoriesLimit;
    bool m_cloudOnlyDirectoriesLimitHasBeenSet;
    long m_cloudOnlyDirectoriesCurrentCount;
    bool m_cloudOnlyDirectoriesCurrentCountHasBeenSet;
    bool m_cloudOnlyDirectoriesLimitReached;
    bool m_cloudOnlyDirectoriesLimitReachedHasBeenSet;
    long m_cloudOnlyMicrosoftADLimit;
    bool m_cloudOnlyMicrosoftADLimitHasBeenSet;
    long m_cloudOnlyMicrosoftADCurrentCount;
    bool m_cloudOnlyMicrosoftADCurrentCountHasBeenSet;
    bool m_cloudOnlyMicrosoftADLimitReached;
    bool m_cloudOnlyMicrosoftADLimitReachedHasBeenSet;
    long m_connectedDirectoriesLimit;
    bool m_connectedDirectoriesLimitHasBeenSet;
    long m_connectedDirectoriesCurrentCount;
    bool m_connectedDirectoriesCurrentCountHasBeenSet;
    bool m_connectedDirectoriesLimitReached;
    bool m_connectedDirectoriesLimitReachedHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
