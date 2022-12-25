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
   * <p>An entry for a prefix list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AddPrefixListEntry">AWS
   * API Reference</a></p>
   */
  class AddPrefixListEntry
  {
  public:
    AWS_EC2_API AddPrefixListEntry();
    AWS_EC2_API AddPrefixListEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AddPrefixListEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The CIDR block.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The CIDR block.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The CIDR block.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The CIDR block.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The CIDR block.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The CIDR block.</p>
     */
    inline AddPrefixListEntry& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The CIDR block.</p>
     */
    inline AddPrefixListEntry& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR block.</p>
     */
    inline AddPrefixListEntry& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>A description for the entry.</p> <p>Constraints: Up to 255 characters in
     * length.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the entry.</p> <p>Constraints: Up to 255 characters in
     * length.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the entry.</p> <p>Constraints: Up to 255 characters in
     * length.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the entry.</p> <p>Constraints: Up to 255 characters in
     * length.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the entry.</p> <p>Constraints: Up to 255 characters in
     * length.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the entry.</p> <p>Constraints: Up to 255 characters in
     * length.</p>
     */
    inline AddPrefixListEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the entry.</p> <p>Constraints: Up to 255 characters in
     * length.</p>
     */
    inline AddPrefixListEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the entry.</p> <p>Constraints: Up to 255 characters in
     * length.</p>
     */
    inline AddPrefixListEntry& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
