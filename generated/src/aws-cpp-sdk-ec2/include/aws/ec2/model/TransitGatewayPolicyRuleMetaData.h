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
   * <p>Describes the meta data tags associated with a transit gateway policy
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPolicyRuleMetaData">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPolicyRuleMetaData
  {
  public:
    AWS_EC2_API TransitGatewayPolicyRuleMetaData();
    AWS_EC2_API TransitGatewayPolicyRuleMetaData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPolicyRuleMetaData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The key name for the transit gateway policy rule meta data tag.</p>
     */
    inline const Aws::String& GetMetaDataKey() const{ return m_metaDataKey; }

    /**
     * <p>The key name for the transit gateway policy rule meta data tag.</p>
     */
    inline bool MetaDataKeyHasBeenSet() const { return m_metaDataKeyHasBeenSet; }

    /**
     * <p>The key name for the transit gateway policy rule meta data tag.</p>
     */
    inline void SetMetaDataKey(const Aws::String& value) { m_metaDataKeyHasBeenSet = true; m_metaDataKey = value; }

    /**
     * <p>The key name for the transit gateway policy rule meta data tag.</p>
     */
    inline void SetMetaDataKey(Aws::String&& value) { m_metaDataKeyHasBeenSet = true; m_metaDataKey = std::move(value); }

    /**
     * <p>The key name for the transit gateway policy rule meta data tag.</p>
     */
    inline void SetMetaDataKey(const char* value) { m_metaDataKeyHasBeenSet = true; m_metaDataKey.assign(value); }

    /**
     * <p>The key name for the transit gateway policy rule meta data tag.</p>
     */
    inline TransitGatewayPolicyRuleMetaData& WithMetaDataKey(const Aws::String& value) { SetMetaDataKey(value); return *this;}

    /**
     * <p>The key name for the transit gateway policy rule meta data tag.</p>
     */
    inline TransitGatewayPolicyRuleMetaData& WithMetaDataKey(Aws::String&& value) { SetMetaDataKey(std::move(value)); return *this;}

    /**
     * <p>The key name for the transit gateway policy rule meta data tag.</p>
     */
    inline TransitGatewayPolicyRuleMetaData& WithMetaDataKey(const char* value) { SetMetaDataKey(value); return *this;}


    /**
     * <p>The value of the key for the transit gateway policy rule meta data tag.</p>
     */
    inline const Aws::String& GetMetaDataValue() const{ return m_metaDataValue; }

    /**
     * <p>The value of the key for the transit gateway policy rule meta data tag.</p>
     */
    inline bool MetaDataValueHasBeenSet() const { return m_metaDataValueHasBeenSet; }

    /**
     * <p>The value of the key for the transit gateway policy rule meta data tag.</p>
     */
    inline void SetMetaDataValue(const Aws::String& value) { m_metaDataValueHasBeenSet = true; m_metaDataValue = value; }

    /**
     * <p>The value of the key for the transit gateway policy rule meta data tag.</p>
     */
    inline void SetMetaDataValue(Aws::String&& value) { m_metaDataValueHasBeenSet = true; m_metaDataValue = std::move(value); }

    /**
     * <p>The value of the key for the transit gateway policy rule meta data tag.</p>
     */
    inline void SetMetaDataValue(const char* value) { m_metaDataValueHasBeenSet = true; m_metaDataValue.assign(value); }

    /**
     * <p>The value of the key for the transit gateway policy rule meta data tag.</p>
     */
    inline TransitGatewayPolicyRuleMetaData& WithMetaDataValue(const Aws::String& value) { SetMetaDataValue(value); return *this;}

    /**
     * <p>The value of the key for the transit gateway policy rule meta data tag.</p>
     */
    inline TransitGatewayPolicyRuleMetaData& WithMetaDataValue(Aws::String&& value) { SetMetaDataValue(std::move(value)); return *this;}

    /**
     * <p>The value of the key for the transit gateway policy rule meta data tag.</p>
     */
    inline TransitGatewayPolicyRuleMetaData& WithMetaDataValue(const char* value) { SetMetaDataValue(value); return *this;}

  private:

    Aws::String m_metaDataKey;
    bool m_metaDataKeyHasBeenSet = false;

    Aws::String m_metaDataValue;
    bool m_metaDataValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
