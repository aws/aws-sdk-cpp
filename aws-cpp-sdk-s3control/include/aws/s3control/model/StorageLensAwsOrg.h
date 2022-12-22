/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The Amazon Web Services organization for your S3 Storage Lens.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensAwsOrg">AWS
   * API Reference</a></p>
   */
  class StorageLensAwsOrg
  {
  public:
    AWS_S3CONTROL_API StorageLensAwsOrg();
    AWS_S3CONTROL_API StorageLensAwsOrg(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensAwsOrg& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the Amazon Resource Name (ARN) of the Amazon Web Services
     * organization. This property is read-only and follows the following format:
     * <code>
     * arn:aws:organizations:<i>us-east-1</i>:<i>example-account-id</i>:organization/<i>o-ex2l495dck</i>
     * </code> </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>A container for the Amazon Resource Name (ARN) of the Amazon Web Services
     * organization. This property is read-only and follows the following format:
     * <code>
     * arn:aws:organizations:<i>us-east-1</i>:<i>example-account-id</i>:organization/<i>o-ex2l495dck</i>
     * </code> </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>A container for the Amazon Resource Name (ARN) of the Amazon Web Services
     * organization. This property is read-only and follows the following format:
     * <code>
     * arn:aws:organizations:<i>us-east-1</i>:<i>example-account-id</i>:organization/<i>o-ex2l495dck</i>
     * </code> </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>A container for the Amazon Resource Name (ARN) of the Amazon Web Services
     * organization. This property is read-only and follows the following format:
     * <code>
     * arn:aws:organizations:<i>us-east-1</i>:<i>example-account-id</i>:organization/<i>o-ex2l495dck</i>
     * </code> </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>A container for the Amazon Resource Name (ARN) of the Amazon Web Services
     * organization. This property is read-only and follows the following format:
     * <code>
     * arn:aws:organizations:<i>us-east-1</i>:<i>example-account-id</i>:organization/<i>o-ex2l495dck</i>
     * </code> </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>A container for the Amazon Resource Name (ARN) of the Amazon Web Services
     * organization. This property is read-only and follows the following format:
     * <code>
     * arn:aws:organizations:<i>us-east-1</i>:<i>example-account-id</i>:organization/<i>o-ex2l495dck</i>
     * </code> </p>
     */
    inline StorageLensAwsOrg& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>A container for the Amazon Resource Name (ARN) of the Amazon Web Services
     * organization. This property is read-only and follows the following format:
     * <code>
     * arn:aws:organizations:<i>us-east-1</i>:<i>example-account-id</i>:organization/<i>o-ex2l495dck</i>
     * </code> </p>
     */
    inline StorageLensAwsOrg& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>A container for the Amazon Resource Name (ARN) of the Amazon Web Services
     * organization. This property is read-only and follows the following format:
     * <code>
     * arn:aws:organizations:<i>us-east-1</i>:<i>example-account-id</i>:organization/<i>o-ex2l495dck</i>
     * </code> </p>
     */
    inline StorageLensAwsOrg& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
