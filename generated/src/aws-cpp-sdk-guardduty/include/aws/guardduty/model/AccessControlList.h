/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on the current access control policies for the
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccessControlList">AWS
   * API Reference</a></p>
   */
  class AccessControlList
  {
  public:
    AWS_GUARDDUTY_API AccessControlList();
    AWS_GUARDDUTY_API AccessControlList(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccessControlList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates whether public read access for the bucket is enabled
     * through an Access Control List (ACL).</p>
     */
    inline bool GetAllowsPublicReadAccess() const{ return m_allowsPublicReadAccess; }

    /**
     * <p>A value that indicates whether public read access for the bucket is enabled
     * through an Access Control List (ACL).</p>
     */
    inline bool AllowsPublicReadAccessHasBeenSet() const { return m_allowsPublicReadAccessHasBeenSet; }

    /**
     * <p>A value that indicates whether public read access for the bucket is enabled
     * through an Access Control List (ACL).</p>
     */
    inline void SetAllowsPublicReadAccess(bool value) { m_allowsPublicReadAccessHasBeenSet = true; m_allowsPublicReadAccess = value; }

    /**
     * <p>A value that indicates whether public read access for the bucket is enabled
     * through an Access Control List (ACL).</p>
     */
    inline AccessControlList& WithAllowsPublicReadAccess(bool value) { SetAllowsPublicReadAccess(value); return *this;}


    /**
     * <p>A value that indicates whether public write access for the bucket is enabled
     * through an Access Control List (ACL).</p>
     */
    inline bool GetAllowsPublicWriteAccess() const{ return m_allowsPublicWriteAccess; }

    /**
     * <p>A value that indicates whether public write access for the bucket is enabled
     * through an Access Control List (ACL).</p>
     */
    inline bool AllowsPublicWriteAccessHasBeenSet() const { return m_allowsPublicWriteAccessHasBeenSet; }

    /**
     * <p>A value that indicates whether public write access for the bucket is enabled
     * through an Access Control List (ACL).</p>
     */
    inline void SetAllowsPublicWriteAccess(bool value) { m_allowsPublicWriteAccessHasBeenSet = true; m_allowsPublicWriteAccess = value; }

    /**
     * <p>A value that indicates whether public write access for the bucket is enabled
     * through an Access Control List (ACL).</p>
     */
    inline AccessControlList& WithAllowsPublicWriteAccess(bool value) { SetAllowsPublicWriteAccess(value); return *this;}

  private:

    bool m_allowsPublicReadAccess;
    bool m_allowsPublicReadAccessHasBeenSet = false;

    bool m_allowsPublicWriteAccess;
    bool m_allowsPublicWriteAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
