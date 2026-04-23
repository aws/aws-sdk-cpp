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
#include <aws/ds/DirectoryService_EXPORTS.h>

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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains directory limit information for a region.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DirectoryLimits">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DirectoryLimits
  {
  public:
    DirectoryLimits();
    DirectoryLimits(Aws::Utils::Json::JsonView jsonValue);
    DirectoryLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of cloud directories allowed in the region.</p>
     */
    inline int GetCloudOnlyDirectoriesLimit() const{ return m_cloudOnlyDirectoriesLimit; }

    /**
     * <p>The maximum number of cloud directories allowed in the region.</p>
     */
    inline bool CloudOnlyDirectoriesLimitHasBeenSet() const { return m_cloudOnlyDirectoriesLimitHasBeenSet; }

    /**
     * <p>The maximum number of cloud directories allowed in the region.</p>
     */
    inline void SetCloudOnlyDirectoriesLimit(int value) { m_cloudOnlyDirectoriesLimitHasBeenSet = true; m_cloudOnlyDirectoriesLimit = value; }

    /**
     * <p>The maximum number of cloud directories allowed in the region.</p>
     */
    inline DirectoryLimits& WithCloudOnlyDirectoriesLimit(int value) { SetCloudOnlyDirectoriesLimit(value); return *this;}


    /**
     * <p>The current number of cloud directories in the region.</p>
     */
    inline int GetCloudOnlyDirectoriesCurrentCount() const{ return m_cloudOnlyDirectoriesCurrentCount; }

    /**
     * <p>The current number of cloud directories in the region.</p>
     */
    inline bool CloudOnlyDirectoriesCurrentCountHasBeenSet() const { return m_cloudOnlyDirectoriesCurrentCountHasBeenSet; }

    /**
     * <p>The current number of cloud directories in the region.</p>
     */
    inline void SetCloudOnlyDirectoriesCurrentCount(int value) { m_cloudOnlyDirectoriesCurrentCountHasBeenSet = true; m_cloudOnlyDirectoriesCurrentCount = value; }

    /**
     * <p>The current number of cloud directories in the region.</p>
     */
    inline DirectoryLimits& WithCloudOnlyDirectoriesCurrentCount(int value) { SetCloudOnlyDirectoriesCurrentCount(value); return *this;}


    /**
     * <p>Indicates if the cloud directory limit has been reached.</p>
     */
    inline bool GetCloudOnlyDirectoriesLimitReached() const{ return m_cloudOnlyDirectoriesLimitReached; }

    /**
     * <p>Indicates if the cloud directory limit has been reached.</p>
     */
    inline bool CloudOnlyDirectoriesLimitReachedHasBeenSet() const { return m_cloudOnlyDirectoriesLimitReachedHasBeenSet; }

    /**
     * <p>Indicates if the cloud directory limit has been reached.</p>
     */
    inline void SetCloudOnlyDirectoriesLimitReached(bool value) { m_cloudOnlyDirectoriesLimitReachedHasBeenSet = true; m_cloudOnlyDirectoriesLimitReached = value; }

    /**
     * <p>Indicates if the cloud directory limit has been reached.</p>
     */
    inline DirectoryLimits& WithCloudOnlyDirectoriesLimitReached(bool value) { SetCloudOnlyDirectoriesLimitReached(value); return *this;}


    /**
     * <p>The maximum number of AWS Managed Microsoft AD directories allowed in the
     * region.</p>
     */
    inline int GetCloudOnlyMicrosoftADLimit() const{ return m_cloudOnlyMicrosoftADLimit; }

    /**
     * <p>The maximum number of AWS Managed Microsoft AD directories allowed in the
     * region.</p>
     */
    inline bool CloudOnlyMicrosoftADLimitHasBeenSet() const { return m_cloudOnlyMicrosoftADLimitHasBeenSet; }

    /**
     * <p>The maximum number of AWS Managed Microsoft AD directories allowed in the
     * region.</p>
     */
    inline void SetCloudOnlyMicrosoftADLimit(int value) { m_cloudOnlyMicrosoftADLimitHasBeenSet = true; m_cloudOnlyMicrosoftADLimit = value; }

    /**
     * <p>The maximum number of AWS Managed Microsoft AD directories allowed in the
     * region.</p>
     */
    inline DirectoryLimits& WithCloudOnlyMicrosoftADLimit(int value) { SetCloudOnlyMicrosoftADLimit(value); return *this;}


    /**
     * <p>The current number of AWS Managed Microsoft AD directories in the region.</p>
     */
    inline int GetCloudOnlyMicrosoftADCurrentCount() const{ return m_cloudOnlyMicrosoftADCurrentCount; }

    /**
     * <p>The current number of AWS Managed Microsoft AD directories in the region.</p>
     */
    inline bool CloudOnlyMicrosoftADCurrentCountHasBeenSet() const { return m_cloudOnlyMicrosoftADCurrentCountHasBeenSet; }

    /**
     * <p>The current number of AWS Managed Microsoft AD directories in the region.</p>
     */
    inline void SetCloudOnlyMicrosoftADCurrentCount(int value) { m_cloudOnlyMicrosoftADCurrentCountHasBeenSet = true; m_cloudOnlyMicrosoftADCurrentCount = value; }

    /**
     * <p>The current number of AWS Managed Microsoft AD directories in the region.</p>
     */
    inline DirectoryLimits& WithCloudOnlyMicrosoftADCurrentCount(int value) { SetCloudOnlyMicrosoftADCurrentCount(value); return *this;}


    /**
     * <p>Indicates if the AWS Managed Microsoft AD directory limit has been
     * reached.</p>
     */
    inline bool GetCloudOnlyMicrosoftADLimitReached() const{ return m_cloudOnlyMicrosoftADLimitReached; }

    /**
     * <p>Indicates if the AWS Managed Microsoft AD directory limit has been
     * reached.</p>
     */
    inline bool CloudOnlyMicrosoftADLimitReachedHasBeenSet() const { return m_cloudOnlyMicrosoftADLimitReachedHasBeenSet; }

    /**
     * <p>Indicates if the AWS Managed Microsoft AD directory limit has been
     * reached.</p>
     */
    inline void SetCloudOnlyMicrosoftADLimitReached(bool value) { m_cloudOnlyMicrosoftADLimitReachedHasBeenSet = true; m_cloudOnlyMicrosoftADLimitReached = value; }

    /**
     * <p>Indicates if the AWS Managed Microsoft AD directory limit has been
     * reached.</p>
     */
    inline DirectoryLimits& WithCloudOnlyMicrosoftADLimitReached(bool value) { SetCloudOnlyMicrosoftADLimitReached(value); return *this;}


    /**
     * <p>The maximum number of connected directories allowed in the region.</p>
     */
    inline int GetConnectedDirectoriesLimit() const{ return m_connectedDirectoriesLimit; }

    /**
     * <p>The maximum number of connected directories allowed in the region.</p>
     */
    inline bool ConnectedDirectoriesLimitHasBeenSet() const { return m_connectedDirectoriesLimitHasBeenSet; }

    /**
     * <p>The maximum number of connected directories allowed in the region.</p>
     */
    inline void SetConnectedDirectoriesLimit(int value) { m_connectedDirectoriesLimitHasBeenSet = true; m_connectedDirectoriesLimit = value; }

    /**
     * <p>The maximum number of connected directories allowed in the region.</p>
     */
    inline DirectoryLimits& WithConnectedDirectoriesLimit(int value) { SetConnectedDirectoriesLimit(value); return *this;}


    /**
     * <p>The current number of connected directories in the region.</p>
     */
    inline int GetConnectedDirectoriesCurrentCount() const{ return m_connectedDirectoriesCurrentCount; }

    /**
     * <p>The current number of connected directories in the region.</p>
     */
    inline bool ConnectedDirectoriesCurrentCountHasBeenSet() const { return m_connectedDirectoriesCurrentCountHasBeenSet; }

    /**
     * <p>The current number of connected directories in the region.</p>
     */
    inline void SetConnectedDirectoriesCurrentCount(int value) { m_connectedDirectoriesCurrentCountHasBeenSet = true; m_connectedDirectoriesCurrentCount = value; }

    /**
     * <p>The current number of connected directories in the region.</p>
     */
    inline DirectoryLimits& WithConnectedDirectoriesCurrentCount(int value) { SetConnectedDirectoriesCurrentCount(value); return *this;}


    /**
     * <p>Indicates if the connected directory limit has been reached.</p>
     */
    inline bool GetConnectedDirectoriesLimitReached() const{ return m_connectedDirectoriesLimitReached; }

    /**
     * <p>Indicates if the connected directory limit has been reached.</p>
     */
    inline bool ConnectedDirectoriesLimitReachedHasBeenSet() const { return m_connectedDirectoriesLimitReachedHasBeenSet; }

    /**
     * <p>Indicates if the connected directory limit has been reached.</p>
     */
    inline void SetConnectedDirectoriesLimitReached(bool value) { m_connectedDirectoriesLimitReachedHasBeenSet = true; m_connectedDirectoriesLimitReached = value; }

    /**
     * <p>Indicates if the connected directory limit has been reached.</p>
     */
    inline DirectoryLimits& WithConnectedDirectoriesLimitReached(bool value) { SetConnectedDirectoriesLimitReached(value); return *this;}

  private:

    int m_cloudOnlyDirectoriesLimit;
    bool m_cloudOnlyDirectoriesLimitHasBeenSet;

    int m_cloudOnlyDirectoriesCurrentCount;
    bool m_cloudOnlyDirectoriesCurrentCountHasBeenSet;

    bool m_cloudOnlyDirectoriesLimitReached;
    bool m_cloudOnlyDirectoriesLimitReachedHasBeenSet;

    int m_cloudOnlyMicrosoftADLimit;
    bool m_cloudOnlyMicrosoftADLimitHasBeenSet;

    int m_cloudOnlyMicrosoftADCurrentCount;
    bool m_cloudOnlyMicrosoftADCurrentCountHasBeenSet;

    bool m_cloudOnlyMicrosoftADLimitReached;
    bool m_cloudOnlyMicrosoftADLimitReachedHasBeenSet;

    int m_connectedDirectoriesLimit;
    bool m_connectedDirectoriesLimitHasBeenSet;

    int m_connectedDirectoriesCurrentCount;
    bool m_connectedDirectoriesCurrentCountHasBeenSet;

    bool m_connectedDirectoriesLimitReached;
    bool m_connectedDirectoriesLimitReachedHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
