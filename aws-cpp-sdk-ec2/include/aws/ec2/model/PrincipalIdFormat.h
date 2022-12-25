/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IdFormat.h>
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
   * <p>PrincipalIdFormat description</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrincipalIdFormat">AWS
   * API Reference</a></p>
   */
  class PrincipalIdFormat
  {
  public:
    AWS_EC2_API PrincipalIdFormat();
    AWS_EC2_API PrincipalIdFormat(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PrincipalIdFormat& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline PrincipalIdFormat& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline PrincipalIdFormat& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline PrincipalIdFormat& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>PrincipalIdFormatStatuses description</p>
     */
    inline const Aws::Vector<IdFormat>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>PrincipalIdFormatStatuses description</p>
     */
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }

    /**
     * <p>PrincipalIdFormatStatuses description</p>
     */
    inline void SetStatuses(const Aws::Vector<IdFormat>& value) { m_statusesHasBeenSet = true; m_statuses = value; }

    /**
     * <p>PrincipalIdFormatStatuses description</p>
     */
    inline void SetStatuses(Aws::Vector<IdFormat>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }

    /**
     * <p>PrincipalIdFormatStatuses description</p>
     */
    inline PrincipalIdFormat& WithStatuses(const Aws::Vector<IdFormat>& value) { SetStatuses(value); return *this;}

    /**
     * <p>PrincipalIdFormatStatuses description</p>
     */
    inline PrincipalIdFormat& WithStatuses(Aws::Vector<IdFormat>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p>PrincipalIdFormatStatuses description</p>
     */
    inline PrincipalIdFormat& AddStatuses(const IdFormat& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }

    /**
     * <p>PrincipalIdFormatStatuses description</p>
     */
    inline PrincipalIdFormat& AddStatuses(IdFormat&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<IdFormat> m_statuses;
    bool m_statusesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
