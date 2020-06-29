/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3ObjectLockLegalHold.h>
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
   * <p>Contains the configuration parameters for a Set Object Legal Hold operation.
   * Amazon S3 Batch Operations passes each value through to the underlying PUT
   * Object Legal Hold API. For more information about the parameters for this
   * operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/object-lock-overview.htmll#object-lock-legal-holds">PUT
   * Object Legal Hold</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3SetObjectLegalHoldOperation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3SetObjectLegalHoldOperation
  {
  public:
    S3SetObjectLegalHoldOperation();
    S3SetObjectLegalHoldOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3SetObjectLegalHoldOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The Legal Hold contains the status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline const S3ObjectLockLegalHold& GetLegalHold() const{ return m_legalHold; }

    /**
     * <p>The Legal Hold contains the status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline bool LegalHoldHasBeenSet() const { return m_legalHoldHasBeenSet; }

    /**
     * <p>The Legal Hold contains the status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline void SetLegalHold(const S3ObjectLockLegalHold& value) { m_legalHoldHasBeenSet = true; m_legalHold = value; }

    /**
     * <p>The Legal Hold contains the status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline void SetLegalHold(S3ObjectLockLegalHold&& value) { m_legalHoldHasBeenSet = true; m_legalHold = std::move(value); }

    /**
     * <p>The Legal Hold contains the status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline S3SetObjectLegalHoldOperation& WithLegalHold(const S3ObjectLockLegalHold& value) { SetLegalHold(value); return *this;}

    /**
     * <p>The Legal Hold contains the status to be applied to all objects in the Batch
     * Operations job.</p>
     */
    inline S3SetObjectLegalHoldOperation& WithLegalHold(S3ObjectLockLegalHold&& value) { SetLegalHold(std::move(value)); return *this;}

  private:

    S3ObjectLockLegalHold m_legalHold;
    bool m_legalHoldHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
