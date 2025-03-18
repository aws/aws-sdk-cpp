/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains directory limit information for a Region.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DirectoryLimits">AWS
   * API Reference</a></p>
   */
  class DirectoryLimits
  {
  public:
    AWS_DIRECTORYSERVICE_API DirectoryLimits() = default;
    AWS_DIRECTORYSERVICE_API DirectoryLimits(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API DirectoryLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of cloud directories allowed in the Region.</p>
     */
    inline int GetCloudOnlyDirectoriesLimit() const { return m_cloudOnlyDirectoriesLimit; }
    inline bool CloudOnlyDirectoriesLimitHasBeenSet() const { return m_cloudOnlyDirectoriesLimitHasBeenSet; }
    inline void SetCloudOnlyDirectoriesLimit(int value) { m_cloudOnlyDirectoriesLimitHasBeenSet = true; m_cloudOnlyDirectoriesLimit = value; }
    inline DirectoryLimits& WithCloudOnlyDirectoriesLimit(int value) { SetCloudOnlyDirectoriesLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of cloud directories in the Region.</p>
     */
    inline int GetCloudOnlyDirectoriesCurrentCount() const { return m_cloudOnlyDirectoriesCurrentCount; }
    inline bool CloudOnlyDirectoriesCurrentCountHasBeenSet() const { return m_cloudOnlyDirectoriesCurrentCountHasBeenSet; }
    inline void SetCloudOnlyDirectoriesCurrentCount(int value) { m_cloudOnlyDirectoriesCurrentCountHasBeenSet = true; m_cloudOnlyDirectoriesCurrentCount = value; }
    inline DirectoryLimits& WithCloudOnlyDirectoriesCurrentCount(int value) { SetCloudOnlyDirectoriesCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the cloud directory limit has been reached.</p>
     */
    inline bool GetCloudOnlyDirectoriesLimitReached() const { return m_cloudOnlyDirectoriesLimitReached; }
    inline bool CloudOnlyDirectoriesLimitReachedHasBeenSet() const { return m_cloudOnlyDirectoriesLimitReachedHasBeenSet; }
    inline void SetCloudOnlyDirectoriesLimitReached(bool value) { m_cloudOnlyDirectoriesLimitReachedHasBeenSet = true; m_cloudOnlyDirectoriesLimitReached = value; }
    inline DirectoryLimits& WithCloudOnlyDirectoriesLimitReached(bool value) { SetCloudOnlyDirectoriesLimitReached(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Managed Microsoft AD directories allowed in the
     * region.</p>
     */
    inline int GetCloudOnlyMicrosoftADLimit() const { return m_cloudOnlyMicrosoftADLimit; }
    inline bool CloudOnlyMicrosoftADLimitHasBeenSet() const { return m_cloudOnlyMicrosoftADLimitHasBeenSet; }
    inline void SetCloudOnlyMicrosoftADLimit(int value) { m_cloudOnlyMicrosoftADLimitHasBeenSet = true; m_cloudOnlyMicrosoftADLimit = value; }
    inline DirectoryLimits& WithCloudOnlyMicrosoftADLimit(int value) { SetCloudOnlyMicrosoftADLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of Managed Microsoft AD directories in the region.</p>
     */
    inline int GetCloudOnlyMicrosoftADCurrentCount() const { return m_cloudOnlyMicrosoftADCurrentCount; }
    inline bool CloudOnlyMicrosoftADCurrentCountHasBeenSet() const { return m_cloudOnlyMicrosoftADCurrentCountHasBeenSet; }
    inline void SetCloudOnlyMicrosoftADCurrentCount(int value) { m_cloudOnlyMicrosoftADCurrentCountHasBeenSet = true; m_cloudOnlyMicrosoftADCurrentCount = value; }
    inline DirectoryLimits& WithCloudOnlyMicrosoftADCurrentCount(int value) { SetCloudOnlyMicrosoftADCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the Managed Microsoft AD directory limit has been reached.</p>
     */
    inline bool GetCloudOnlyMicrosoftADLimitReached() const { return m_cloudOnlyMicrosoftADLimitReached; }
    inline bool CloudOnlyMicrosoftADLimitReachedHasBeenSet() const { return m_cloudOnlyMicrosoftADLimitReachedHasBeenSet; }
    inline void SetCloudOnlyMicrosoftADLimitReached(bool value) { m_cloudOnlyMicrosoftADLimitReachedHasBeenSet = true; m_cloudOnlyMicrosoftADLimitReached = value; }
    inline DirectoryLimits& WithCloudOnlyMicrosoftADLimitReached(bool value) { SetCloudOnlyMicrosoftADLimitReached(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of connected directories allowed in the Region.</p>
     */
    inline int GetConnectedDirectoriesLimit() const { return m_connectedDirectoriesLimit; }
    inline bool ConnectedDirectoriesLimitHasBeenSet() const { return m_connectedDirectoriesLimitHasBeenSet; }
    inline void SetConnectedDirectoriesLimit(int value) { m_connectedDirectoriesLimitHasBeenSet = true; m_connectedDirectoriesLimit = value; }
    inline DirectoryLimits& WithConnectedDirectoriesLimit(int value) { SetConnectedDirectoriesLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current number of connected directories in the Region.</p>
     */
    inline int GetConnectedDirectoriesCurrentCount() const { return m_connectedDirectoriesCurrentCount; }
    inline bool ConnectedDirectoriesCurrentCountHasBeenSet() const { return m_connectedDirectoriesCurrentCountHasBeenSet; }
    inline void SetConnectedDirectoriesCurrentCount(int value) { m_connectedDirectoriesCurrentCountHasBeenSet = true; m_connectedDirectoriesCurrentCount = value; }
    inline DirectoryLimits& WithConnectedDirectoriesCurrentCount(int value) { SetConnectedDirectoriesCurrentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the connected directory limit has been reached.</p>
     */
    inline bool GetConnectedDirectoriesLimitReached() const { return m_connectedDirectoriesLimitReached; }
    inline bool ConnectedDirectoriesLimitReachedHasBeenSet() const { return m_connectedDirectoriesLimitReachedHasBeenSet; }
    inline void SetConnectedDirectoriesLimitReached(bool value) { m_connectedDirectoriesLimitReachedHasBeenSet = true; m_connectedDirectoriesLimitReached = value; }
    inline DirectoryLimits& WithConnectedDirectoriesLimitReached(bool value) { SetConnectedDirectoriesLimitReached(value); return *this;}
    ///@}
  private:

    int m_cloudOnlyDirectoriesLimit{0};
    bool m_cloudOnlyDirectoriesLimitHasBeenSet = false;

    int m_cloudOnlyDirectoriesCurrentCount{0};
    bool m_cloudOnlyDirectoriesCurrentCountHasBeenSet = false;

    bool m_cloudOnlyDirectoriesLimitReached{false};
    bool m_cloudOnlyDirectoriesLimitReachedHasBeenSet = false;

    int m_cloudOnlyMicrosoftADLimit{0};
    bool m_cloudOnlyMicrosoftADLimitHasBeenSet = false;

    int m_cloudOnlyMicrosoftADCurrentCount{0};
    bool m_cloudOnlyMicrosoftADCurrentCountHasBeenSet = false;

    bool m_cloudOnlyMicrosoftADLimitReached{false};
    bool m_cloudOnlyMicrosoftADLimitReachedHasBeenSet = false;

    int m_connectedDirectoriesLimit{0};
    bool m_connectedDirectoriesLimitHasBeenSet = false;

    int m_connectedDirectoriesCurrentCount{0};
    bool m_connectedDirectoriesCurrentCountHasBeenSet = false;

    bool m_connectedDirectoriesLimitReached{false};
    bool m_connectedDirectoriesLimitReachedHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
