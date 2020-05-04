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
#include <aws/s3control/model/S3Retention.h>
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
   * <p>Contains the configuration parameters for a Set Object Retention operation.
   * Amazon S3 Batch Operations passes each value through to the underlying PUT
   * Object Retention API. For more information about the parameters for this
   * operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock-overview.html#object-lock-retention-modes">PUT
   * Object Retention</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3SetObjectRetentionOperation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3SetObjectRetentionOperation
  {
  public:
    S3SetObjectRetentionOperation();
    S3SetObjectRetentionOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3SetObjectRetentionOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Indicates if the operation should be applied to objects in the Batch
     * Operations job even if they have Governance-type Object Lock in place.</p>
     */
    inline bool GetBypassGovernanceRetention() const{ return m_bypassGovernanceRetention; }

    /**
     * <p>Indicates if the operation should be applied to objects in the Batch
     * Operations job even if they have Governance-type Object Lock in place.</p>
     */
    inline bool BypassGovernanceRetentionHasBeenSet() const { return m_bypassGovernanceRetentionHasBeenSet; }

    /**
     * <p>Indicates if the operation should be applied to objects in the Batch
     * Operations job even if they have Governance-type Object Lock in place.</p>
     */
    inline void SetBypassGovernanceRetention(bool value) { m_bypassGovernanceRetentionHasBeenSet = true; m_bypassGovernanceRetention = value; }

    /**
     * <p>Indicates if the operation should be applied to objects in the Batch
     * Operations job even if they have Governance-type Object Lock in place.</p>
     */
    inline S3SetObjectRetentionOperation& WithBypassGovernanceRetention(bool value) { SetBypassGovernanceRetention(value); return *this;}


    /**
     * <p>Amazon S3 object lock Retention contains the retention mode to be applied to
     * all objects in the Batch Operations job.</p>
     */
    inline const S3Retention& GetRetention() const{ return m_retention; }

    /**
     * <p>Amazon S3 object lock Retention contains the retention mode to be applied to
     * all objects in the Batch Operations job.</p>
     */
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }

    /**
     * <p>Amazon S3 object lock Retention contains the retention mode to be applied to
     * all objects in the Batch Operations job.</p>
     */
    inline void SetRetention(const S3Retention& value) { m_retentionHasBeenSet = true; m_retention = value; }

    /**
     * <p>Amazon S3 object lock Retention contains the retention mode to be applied to
     * all objects in the Batch Operations job.</p>
     */
    inline void SetRetention(S3Retention&& value) { m_retentionHasBeenSet = true; m_retention = std::move(value); }

    /**
     * <p>Amazon S3 object lock Retention contains the retention mode to be applied to
     * all objects in the Batch Operations job.</p>
     */
    inline S3SetObjectRetentionOperation& WithRetention(const S3Retention& value) { SetRetention(value); return *this;}

    /**
     * <p>Amazon S3 object lock Retention contains the retention mode to be applied to
     * all objects in the Batch Operations job.</p>
     */
    inline S3SetObjectRetentionOperation& WithRetention(S3Retention&& value) { SetRetention(std::move(value)); return *this;}

  private:

    bool m_bypassGovernanceRetention;
    bool m_bypassGovernanceRetentionHasBeenSet;

    S3Retention m_retention;
    bool m_retentionHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
