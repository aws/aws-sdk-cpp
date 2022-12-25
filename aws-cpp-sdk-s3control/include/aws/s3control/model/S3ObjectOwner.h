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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3ObjectOwner">AWS
   * API Reference</a></p>
   */
  class S3ObjectOwner
  {
  public:
    AWS_S3CONTROL_API S3ObjectOwner();
    AWS_S3CONTROL_API S3ObjectOwner(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3ObjectOwner& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const Aws::String& GetID() const{ return m_iD; }

    /**
     * <p/>
     */
    inline bool IDHasBeenSet() const { return m_iDHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetID(const Aws::String& value) { m_iDHasBeenSet = true; m_iD = value; }

    /**
     * <p/>
     */
    inline void SetID(Aws::String&& value) { m_iDHasBeenSet = true; m_iD = std::move(value); }

    /**
     * <p/>
     */
    inline void SetID(const char* value) { m_iDHasBeenSet = true; m_iD.assign(value); }

    /**
     * <p/>
     */
    inline S3ObjectOwner& WithID(const Aws::String& value) { SetID(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectOwner& WithID(Aws::String&& value) { SetID(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectOwner& WithID(const char* value) { SetID(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p/>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p/>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p/>
     */
    inline S3ObjectOwner& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectOwner& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline S3ObjectOwner& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_iD;
    bool m_iDHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
