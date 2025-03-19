/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/AccessType.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the anonymous access permissions for an Amazon Lightsail bucket and
   * its objects.</p> <p>For more information about bucket access permissions, see <a
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-understanding-bucket-permissions">Understanding
   * bucket permissions in Amazon Lightsail</a> in the </p> <p> <i>Amazon Lightsail
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AccessRules">AWS
   * API Reference</a></p>
   */
  class AccessRules
  {
  public:
    AWS_LIGHTSAIL_API AccessRules() = default;
    AWS_LIGHTSAIL_API AccessRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AccessRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the anonymous access to all objects in a bucket.</p> <p>The
     * following options can be specified:</p> <ul> <li> <p> <code>public</code> - Sets
     * all objects in the bucket to public (read-only), making them readable by anyone
     * in the world.</p> <p>If the <code>getObject</code> value is set to
     * <code>public</code>, then all objects in the bucket default to public regardless
     * of the <code>allowPublicOverrides</code> value.</p> </li> <li> <p>
     * <code>private</code> - Sets all objects in the bucket to private, making them
     * readable only by you or anyone you give access to.</p> <p>If the
     * <code>getObject</code> value is set to <code>private</code>, and the
     * <code>allowPublicOverrides</code> value is set to <code>true</code>, then all
     * objects in the bucket default to private unless they are configured with a
     * <code>public-read</code> ACL. Individual objects with a <code>public-read</code>
     * ACL are readable by anyone in the world.</p> </li> </ul>
     */
    inline AccessType GetGetObject() const { return m_getObject; }
    inline bool GetObjectHasBeenSet() const { return m_getObjectHasBeenSet; }
    inline void SetGetObject(AccessType value) { m_getObjectHasBeenSet = true; m_getObject = value; }
    inline AccessRules& WithGetObject(AccessType value) { SetGetObject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the access control list (ACL)
     * permissions that are applied to individual objects override the
     * <code>getObject</code> option that is currently specified.</p> <p>When this is
     * true, you can use the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutObjectAcl.html">PutObjectAcl</a>
     * Amazon S3 API action to set individual objects to public (read-only) using the
     * <code>public-read</code> ACL, or to private using the <code>private</code>
     * ACL.</p>
     */
    inline bool GetAllowPublicOverrides() const { return m_allowPublicOverrides; }
    inline bool AllowPublicOverridesHasBeenSet() const { return m_allowPublicOverridesHasBeenSet; }
    inline void SetAllowPublicOverrides(bool value) { m_allowPublicOverridesHasBeenSet = true; m_allowPublicOverrides = value; }
    inline AccessRules& WithAllowPublicOverrides(bool value) { SetAllowPublicOverrides(value); return *this;}
    ///@}
  private:

    AccessType m_getObject{AccessType::NOT_SET};
    bool m_getObjectHasBeenSet = false;

    bool m_allowPublicOverrides{false};
    bool m_allowPublicOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
