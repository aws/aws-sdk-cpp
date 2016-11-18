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
#include <aws/cloudfront/model/InvalidationBatch.h>

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
   * An invalidation.
   */
  class AWS_CLOUDFRONT_API Invalidation
  {
  public:
    Invalidation();
    Invalidation(const Aws::Utils::Xml::XmlNode& xmlNode);
    Invalidation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The identifier for the invalidation request. For example: IDFDVBD632BHDS5.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The identifier for the invalidation request. For example: IDFDVBD632BHDS5.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identifier for the invalidation request. For example: IDFDVBD632BHDS5.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identifier for the invalidation request. For example: IDFDVBD632BHDS5.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The identifier for the invalidation request. For example: IDFDVBD632BHDS5.
     */
    inline Invalidation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The identifier for the invalidation request. For example: IDFDVBD632BHDS5.
     */
    inline Invalidation& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * The identifier for the invalidation request. For example: IDFDVBD632BHDS5.
     */
    inline Invalidation& WithId(const char* value) { SetId(value); return *this;}

    /**
     * The status of the invalidation request. When the invalidation batch is finished,
     * the status is Completed.
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * The status of the invalidation request. When the invalidation batch is finished,
     * the status is Completed.
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The status of the invalidation request. When the invalidation batch is finished,
     * the status is Completed.
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * The status of the invalidation request. When the invalidation batch is finished,
     * the status is Completed.
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * The status of the invalidation request. When the invalidation batch is finished,
     * the status is Completed.
     */
    inline Invalidation& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * The status of the invalidation request. When the invalidation batch is finished,
     * the status is Completed.
     */
    inline Invalidation& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * The status of the invalidation request. When the invalidation batch is finished,
     * the status is Completed.
     */
    inline Invalidation& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * The date and time the invalidation request was first made.
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * The date and time the invalidation request was first made.
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * The date and time the invalidation request was first made.
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * The date and time the invalidation request was first made.
     */
    inline Invalidation& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * The date and time the invalidation request was first made.
     */
    inline Invalidation& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(value); return *this;}

    /**
     * The current invalidation information for the batch request.
     */
    inline const InvalidationBatch& GetInvalidationBatch() const{ return m_invalidationBatch; }

    /**
     * The current invalidation information for the batch request.
     */
    inline void SetInvalidationBatch(const InvalidationBatch& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = value; }

    /**
     * The current invalidation information for the batch request.
     */
    inline void SetInvalidationBatch(InvalidationBatch&& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = value; }

    /**
     * The current invalidation information for the batch request.
     */
    inline Invalidation& WithInvalidationBatch(const InvalidationBatch& value) { SetInvalidationBatch(value); return *this;}

    /**
     * The current invalidation information for the batch request.
     */
    inline Invalidation& WithInvalidationBatch(InvalidationBatch&& value) { SetInvalidationBatch(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;
    InvalidationBatch m_invalidationBatch;
    bool m_invalidationBatchHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
