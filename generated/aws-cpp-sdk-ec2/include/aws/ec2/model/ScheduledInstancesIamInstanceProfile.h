﻿/**
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
   * <p>Describes an IAM instance profile for a Scheduled Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ScheduledInstancesIamInstanceProfile">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ScheduledInstancesIamInstanceProfile
  {
  public:
    ScheduledInstancesIamInstanceProfile();
    ScheduledInstancesIamInstanceProfile(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledInstancesIamInstanceProfile& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline ScheduledInstancesIamInstanceProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline ScheduledInstancesIamInstanceProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline ScheduledInstancesIamInstanceProfile& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name.</p>
     */
    inline ScheduledInstancesIamInstanceProfile& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name.</p>
     */
    inline ScheduledInstancesIamInstanceProfile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name.</p>
     */
    inline ScheduledInstancesIamInstanceProfile& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
