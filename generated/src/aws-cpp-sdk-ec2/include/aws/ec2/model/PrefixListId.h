/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a prefix list ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrefixListId">AWS
   * API Reference</a></p>
   */
  class PrefixListId
  {
  public:
    AWS_EC2_API PrefixListId();
    AWS_EC2_API PrefixListId(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PrefixListId& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A description for the security group rule that references this prefix list
     * ID.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the security group rule that references this prefix list
     * ID.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the security group rule that references this prefix list
     * ID.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the security group rule that references this prefix list
     * ID.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the security group rule that references this prefix list
     * ID.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the security group rule that references this prefix list
     * ID.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline PrefixListId& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the security group rule that references this prefix list
     * ID.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline PrefixListId& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the security group rule that references this prefix list
     * ID.</p> <p>Constraints: Up to 255 characters in length. Allowed characters are
     * a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline PrefixListId& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the prefix.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix.</p>
     */
    inline PrefixListId& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix.</p>
     */
    inline PrefixListId& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix.</p>
     */
    inline PrefixListId& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
