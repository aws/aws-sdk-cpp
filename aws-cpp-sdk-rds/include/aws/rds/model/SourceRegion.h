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
   * <p>Contains an AWS Region name as the result of a successful call to the
   * <code>DescribeSourceRegions</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SourceRegion">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API SourceRegion
  {
  public:
    SourceRegion();
    SourceRegion(const Aws::Utils::Xml::XmlNode& xmlNode);
    SourceRegion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the source AWS Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }

    /**
     * <p>The name of the source AWS Region.</p>
     */
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }

    /**
     * <p>The name of the source AWS Region.</p>
     */
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }

    /**
     * <p>The name of the source AWS Region.</p>
     */
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }

    /**
     * <p>The name of the source AWS Region.</p>
     */
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }

    /**
     * <p>The name of the source AWS Region.</p>
     */
    inline SourceRegion& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}

    /**
     * <p>The name of the source AWS Region.</p>
     */
    inline SourceRegion& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}

    /**
     * <p>The name of the source AWS Region.</p>
     */
    inline SourceRegion& WithRegionName(const char* value) { SetRegionName(value); return *this;}


    /**
     * <p>The endpoint for the source AWS Region endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint for the source AWS Region endpoint.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint for the source AWS Region endpoint.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint for the source AWS Region endpoint.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint for the source AWS Region endpoint.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint for the source AWS Region endpoint.</p>
     */
    inline SourceRegion& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint for the source AWS Region endpoint.</p>
     */
    inline SourceRegion& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint for the source AWS Region endpoint.</p>
     */
    inline SourceRegion& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The status of the source AWS Region.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the source AWS Region.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the source AWS Region.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the source AWS Region.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the source AWS Region.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the source AWS Region.</p>
     */
    inline SourceRegion& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the source AWS Region.</p>
     */
    inline SourceRegion& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the source AWS Region.</p>
     */
    inline SourceRegion& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
