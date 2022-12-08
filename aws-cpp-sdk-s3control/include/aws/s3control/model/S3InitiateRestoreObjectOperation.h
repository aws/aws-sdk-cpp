/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3GlacierJobTier.h>
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
   * <p>Contains the configuration parameters for an S3 Initiate Restore Object job.
   * S3 Batch Operations passes every object to the underlying POST Object restore
   * API. For more information about the parameters for this operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectPOSTrestore.html#RESTObjectPOSTrestore-restore-request">RestoreObject</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3InitiateRestoreObjectOperation">AWS
   * API Reference</a></p>
   */
  class S3InitiateRestoreObjectOperation
  {
  public:
    AWS_S3CONTROL_API S3InitiateRestoreObjectOperation();
    AWS_S3CONTROL_API S3InitiateRestoreObjectOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3InitiateRestoreObjectOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>This argument specifies how long the S3 Glacier or S3 Glacier Deep Archive
     * object remains available in Amazon S3. S3 Initiate Restore Object jobs that
     * target S3 Glacier and S3 Glacier Deep Archive objects require
     * <code>ExpirationInDays</code> set to 1 or greater.</p> <p>Conversely, do
     * <i>not</i> set <code>ExpirationInDays</code> when creating S3 Initiate Restore
     * Object jobs that target S3 Intelligent-Tiering Archive Access and Deep Archive
     * Access tier objects. Objects in S3 Intelligent-Tiering archive access tiers are
     * not subject to restore expiry, so specifying <code>ExpirationInDays</code>
     * results in restore request failure.</p> <p>S3 Batch Operations jobs can operate
     * either on S3 Glacier and S3 Glacier Deep Archive storage class objects or on S3
     * Intelligent-Tiering Archive Access and Deep Archive Access storage tier objects,
     * but not both types in the same job. If you need to restore objects of both types
     * you <i>must</i> create separate Batch Operations jobs. </p>
     */
    inline int GetExpirationInDays() const{ return m_expirationInDays; }

    /**
     * <p>This argument specifies how long the S3 Glacier or S3 Glacier Deep Archive
     * object remains available in Amazon S3. S3 Initiate Restore Object jobs that
     * target S3 Glacier and S3 Glacier Deep Archive objects require
     * <code>ExpirationInDays</code> set to 1 or greater.</p> <p>Conversely, do
     * <i>not</i> set <code>ExpirationInDays</code> when creating S3 Initiate Restore
     * Object jobs that target S3 Intelligent-Tiering Archive Access and Deep Archive
     * Access tier objects. Objects in S3 Intelligent-Tiering archive access tiers are
     * not subject to restore expiry, so specifying <code>ExpirationInDays</code>
     * results in restore request failure.</p> <p>S3 Batch Operations jobs can operate
     * either on S3 Glacier and S3 Glacier Deep Archive storage class objects or on S3
     * Intelligent-Tiering Archive Access and Deep Archive Access storage tier objects,
     * but not both types in the same job. If you need to restore objects of both types
     * you <i>must</i> create separate Batch Operations jobs. </p>
     */
    inline bool ExpirationInDaysHasBeenSet() const { return m_expirationInDaysHasBeenSet; }

    /**
     * <p>This argument specifies how long the S3 Glacier or S3 Glacier Deep Archive
     * object remains available in Amazon S3. S3 Initiate Restore Object jobs that
     * target S3 Glacier and S3 Glacier Deep Archive objects require
     * <code>ExpirationInDays</code> set to 1 or greater.</p> <p>Conversely, do
     * <i>not</i> set <code>ExpirationInDays</code> when creating S3 Initiate Restore
     * Object jobs that target S3 Intelligent-Tiering Archive Access and Deep Archive
     * Access tier objects. Objects in S3 Intelligent-Tiering archive access tiers are
     * not subject to restore expiry, so specifying <code>ExpirationInDays</code>
     * results in restore request failure.</p> <p>S3 Batch Operations jobs can operate
     * either on S3 Glacier and S3 Glacier Deep Archive storage class objects or on S3
     * Intelligent-Tiering Archive Access and Deep Archive Access storage tier objects,
     * but not both types in the same job. If you need to restore objects of both types
     * you <i>must</i> create separate Batch Operations jobs. </p>
     */
    inline void SetExpirationInDays(int value) { m_expirationInDaysHasBeenSet = true; m_expirationInDays = value; }

    /**
     * <p>This argument specifies how long the S3 Glacier or S3 Glacier Deep Archive
     * object remains available in Amazon S3. S3 Initiate Restore Object jobs that
     * target S3 Glacier and S3 Glacier Deep Archive objects require
     * <code>ExpirationInDays</code> set to 1 or greater.</p> <p>Conversely, do
     * <i>not</i> set <code>ExpirationInDays</code> when creating S3 Initiate Restore
     * Object jobs that target S3 Intelligent-Tiering Archive Access and Deep Archive
     * Access tier objects. Objects in S3 Intelligent-Tiering archive access tiers are
     * not subject to restore expiry, so specifying <code>ExpirationInDays</code>
     * results in restore request failure.</p> <p>S3 Batch Operations jobs can operate
     * either on S3 Glacier and S3 Glacier Deep Archive storage class objects or on S3
     * Intelligent-Tiering Archive Access and Deep Archive Access storage tier objects,
     * but not both types in the same job. If you need to restore objects of both types
     * you <i>must</i> create separate Batch Operations jobs. </p>
     */
    inline S3InitiateRestoreObjectOperation& WithExpirationInDays(int value) { SetExpirationInDays(value); return *this;}


    /**
     * <p>S3 Batch Operations supports <code>STANDARD</code> and <code>BULK</code>
     * retrieval tiers, but not the <code>EXPEDITED</code> retrieval tier.</p>
     */
    inline const S3GlacierJobTier& GetGlacierJobTier() const{ return m_glacierJobTier; }

    /**
     * <p>S3 Batch Operations supports <code>STANDARD</code> and <code>BULK</code>
     * retrieval tiers, but not the <code>EXPEDITED</code> retrieval tier.</p>
     */
    inline bool GlacierJobTierHasBeenSet() const { return m_glacierJobTierHasBeenSet; }

    /**
     * <p>S3 Batch Operations supports <code>STANDARD</code> and <code>BULK</code>
     * retrieval tiers, but not the <code>EXPEDITED</code> retrieval tier.</p>
     */
    inline void SetGlacierJobTier(const S3GlacierJobTier& value) { m_glacierJobTierHasBeenSet = true; m_glacierJobTier = value; }

    /**
     * <p>S3 Batch Operations supports <code>STANDARD</code> and <code>BULK</code>
     * retrieval tiers, but not the <code>EXPEDITED</code> retrieval tier.</p>
     */
    inline void SetGlacierJobTier(S3GlacierJobTier&& value) { m_glacierJobTierHasBeenSet = true; m_glacierJobTier = std::move(value); }

    /**
     * <p>S3 Batch Operations supports <code>STANDARD</code> and <code>BULK</code>
     * retrieval tiers, but not the <code>EXPEDITED</code> retrieval tier.</p>
     */
    inline S3InitiateRestoreObjectOperation& WithGlacierJobTier(const S3GlacierJobTier& value) { SetGlacierJobTier(value); return *this;}

    /**
     * <p>S3 Batch Operations supports <code>STANDARD</code> and <code>BULK</code>
     * retrieval tiers, but not the <code>EXPEDITED</code> retrieval tier.</p>
     */
    inline S3InitiateRestoreObjectOperation& WithGlacierJobTier(S3GlacierJobTier&& value) { SetGlacierJobTier(std::move(value)); return *this;}

  private:

    int m_expirationInDays;
    bool m_expirationInDaysHasBeenSet = false;

    S3GlacierJobTier m_glacierJobTier;
    bool m_glacierJobTierHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
