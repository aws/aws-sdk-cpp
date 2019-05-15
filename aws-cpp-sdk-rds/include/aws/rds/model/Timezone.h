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
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>A time zone associated with a <code>DBInstance</code> or a
   * <code>DBSnapshot</code>. This data type is an element in the response to the
   * <code>DescribeDBInstances</code>, the <code>DescribeDBSnapshots</code>, and the
   * <code>DescribeDBEngineVersions</code> actions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Timezone">AWS API
   * Reference</a></p>
   */
  class AWS_RDS_API Timezone
  {
  public:
    Timezone();
    Timezone(const Aws::Utils::Xml::XmlNode& xmlNode);
    Timezone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the time zone.</p>
     */
    inline const Aws::String& GetTimezoneName() const{ return m_timezoneName; }

    /**
     * <p>The name of the time zone.</p>
     */
    inline bool TimezoneNameHasBeenSet() const { return m_timezoneNameHasBeenSet; }

    /**
     * <p>The name of the time zone.</p>
     */
    inline void SetTimezoneName(const Aws::String& value) { m_timezoneNameHasBeenSet = true; m_timezoneName = value; }

    /**
     * <p>The name of the time zone.</p>
     */
    inline void SetTimezoneName(Aws::String&& value) { m_timezoneNameHasBeenSet = true; m_timezoneName = std::move(value); }

    /**
     * <p>The name of the time zone.</p>
     */
    inline void SetTimezoneName(const char* value) { m_timezoneNameHasBeenSet = true; m_timezoneName.assign(value); }

    /**
     * <p>The name of the time zone.</p>
     */
    inline Timezone& WithTimezoneName(const Aws::String& value) { SetTimezoneName(value); return *this;}

    /**
     * <p>The name of the time zone.</p>
     */
    inline Timezone& WithTimezoneName(Aws::String&& value) { SetTimezoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the time zone.</p>
     */
    inline Timezone& WithTimezoneName(const char* value) { SetTimezoneName(value); return *this;}

  private:

    Aws::String m_timezoneName;
    bool m_timezoneNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
