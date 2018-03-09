/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API PrincipalIdFormat
  {
  public:
    PrincipalIdFormat();
    PrincipalIdFormat(const Aws::Utils::Xml::XmlNode& xmlNode);
    PrincipalIdFormat& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>PrincipalIdFormatARN description</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

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
    bool m_arnHasBeenSet;

    Aws::Vector<IdFormat> m_statuses;
    bool m_statusesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
