/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * Summary of an invalidation request.
   */
  class AWS_CLOUDFRONT_API InvalidationSummary
  {
  public:
    InvalidationSummary();
    InvalidationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    InvalidationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The unique ID for an invalidation request.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique ID for an invalidation request.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique ID for an invalidation request.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The unique ID for an invalidation request.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The unique ID for an invalidation request.
     */
    inline InvalidationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique ID for an invalidation request.
     */
    inline InvalidationSummary& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The unique ID for an invalidation request.
     */
    inline InvalidationSummary& WithId(const char* value) { SetId(value); return *this;}

    
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    
    inline InvalidationSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    
    inline InvalidationSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(value); return *this;}

    /**
     * The status of an invalidation request.
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * The status of an invalidation request.
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The status of an invalidation request.
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The status of an invalidation request.
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * The status of an invalidation request.
     */
    inline InvalidationSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * The status of an invalidation request.
     */
    inline InvalidationSummary& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * The status of an invalidation request.
     */
    inline InvalidationSummary& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
