/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the permissions settings of the bucket-level
   * access control list (ACL) for an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AccessControlList">AWS
   * API Reference</a></p>
   */
  class AccessControlList
  {
  public:
    AWS_MACIE2_API AccessControlList();
    AWS_MACIE2_API AccessControlList(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AccessControlList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the ACL grants the general public with read access
     * permissions for the bucket.</p>
     */
    inline bool GetAllowsPublicReadAccess() const{ return m_allowsPublicReadAccess; }

    /**
     * <p>Specifies whether the ACL grants the general public with read access
     * permissions for the bucket.</p>
     */
    inline bool AllowsPublicReadAccessHasBeenSet() const { return m_allowsPublicReadAccessHasBeenSet; }

    /**
     * <p>Specifies whether the ACL grants the general public with read access
     * permissions for the bucket.</p>
     */
    inline void SetAllowsPublicReadAccess(bool value) { m_allowsPublicReadAccessHasBeenSet = true; m_allowsPublicReadAccess = value; }

    /**
     * <p>Specifies whether the ACL grants the general public with read access
     * permissions for the bucket.</p>
     */
    inline AccessControlList& WithAllowsPublicReadAccess(bool value) { SetAllowsPublicReadAccess(value); return *this;}


    /**
     * <p>Specifies whether the ACL grants the general public with write access
     * permissions for the bucket.</p>
     */
    inline bool GetAllowsPublicWriteAccess() const{ return m_allowsPublicWriteAccess; }

    /**
     * <p>Specifies whether the ACL grants the general public with write access
     * permissions for the bucket.</p>
     */
    inline bool AllowsPublicWriteAccessHasBeenSet() const { return m_allowsPublicWriteAccessHasBeenSet; }

    /**
     * <p>Specifies whether the ACL grants the general public with write access
     * permissions for the bucket.</p>
     */
    inline void SetAllowsPublicWriteAccess(bool value) { m_allowsPublicWriteAccessHasBeenSet = true; m_allowsPublicWriteAccess = value; }

    /**
     * <p>Specifies whether the ACL grants the general public with write access
     * permissions for the bucket.</p>
     */
    inline AccessControlList& WithAllowsPublicWriteAccess(bool value) { SetAllowsPublicWriteAccess(value); return *this;}

  private:

    bool m_allowsPublicReadAccess;
    bool m_allowsPublicReadAccessHasBeenSet = false;

    bool m_allowsPublicWriteAccess;
    bool m_allowsPublicWriteAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
