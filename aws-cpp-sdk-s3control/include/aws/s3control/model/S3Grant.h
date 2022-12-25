/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3Grantee.h>
#include <aws/s3control/model/S3Permission.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3Grant">AWS
   * API Reference</a></p>
   */
  class S3Grant
  {
  public:
    AWS_S3CONTROL_API S3Grant();
    AWS_S3CONTROL_API S3Grant(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3Grant& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const S3Grantee& GetGrantee() const{ return m_grantee; }

    /**
     * <p/>
     */
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetGrantee(const S3Grantee& value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p/>
     */
    inline void SetGrantee(S3Grantee&& value) { m_granteeHasBeenSet = true; m_grantee = std::move(value); }

    /**
     * <p/>
     */
    inline S3Grant& WithGrantee(const S3Grantee& value) { SetGrantee(value); return *this;}

    /**
     * <p/>
     */
    inline S3Grant& WithGrantee(S3Grantee&& value) { SetGrantee(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const S3Permission& GetPermission() const{ return m_permission; }

    /**
     * <p/>
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPermission(const S3Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * <p/>
     */
    inline void SetPermission(S3Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * <p/>
     */
    inline S3Grant& WithPermission(const S3Permission& value) { SetPermission(value); return *this;}

    /**
     * <p/>
     */
    inline S3Grant& WithPermission(S3Permission&& value) { SetPermission(std::move(value)); return *this;}

  private:

    S3Grantee m_grantee;
    bool m_granteeHasBeenSet = false;

    S3Permission m_permission;
    bool m_permissionHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
