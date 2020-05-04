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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/S3ObjectLockRetentionMode.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3Retention">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3Retention
  {
  public:
    S3Retention();
    S3Retention(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3Retention& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The date when the applied Object Retention will expire on all objects in the
     * Batch Operations job.</p>
     */
    inline const Aws::Utils::DateTime& GetRetainUntilDate() const{ return m_retainUntilDate; }

    /**
     * <p>The date when the applied Object Retention will expire on all objects in the
     * Batch Operations job.</p>
     */
    inline bool RetainUntilDateHasBeenSet() const { return m_retainUntilDateHasBeenSet; }

    /**
     * <p>The date when the applied Object Retention will expire on all objects in the
     * Batch Operations job.</p>
     */
    inline void SetRetainUntilDate(const Aws::Utils::DateTime& value) { m_retainUntilDateHasBeenSet = true; m_retainUntilDate = value; }

    /**
     * <p>The date when the applied Object Retention will expire on all objects in the
     * Batch Operations job.</p>
     */
    inline void SetRetainUntilDate(Aws::Utils::DateTime&& value) { m_retainUntilDateHasBeenSet = true; m_retainUntilDate = std::move(value); }

    /**
     * <p>The date when the applied Object Retention will expire on all objects in the
     * Batch Operations job.</p>
     */
    inline S3Retention& WithRetainUntilDate(const Aws::Utils::DateTime& value) { SetRetainUntilDate(value); return *this;}

    /**
     * <p>The date when the applied Object Retention will expire on all objects in the
     * Batch Operations job.</p>
     */
    inline S3Retention& WithRetainUntilDate(Aws::Utils::DateTime&& value) { SetRetainUntilDate(std::move(value)); return *this;}


    /**
     * <p>The Retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline const S3ObjectLockRetentionMode& GetMode() const{ return m_mode; }

    /**
     * <p>The Retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The Retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline void SetMode(const S3ObjectLockRetentionMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The Retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline void SetMode(S3ObjectLockRetentionMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The Retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline S3Retention& WithMode(const S3ObjectLockRetentionMode& value) { SetMode(value); return *this;}

    /**
     * <p>The Retention mode to be applied to all objects in the Batch Operations
     * job.</p>
     */
    inline S3Retention& WithMode(S3ObjectLockRetentionMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_retainUntilDate;
    bool m_retainUntilDateHasBeenSet;

    S3ObjectLockRetentionMode m_mode;
    bool m_modeHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
