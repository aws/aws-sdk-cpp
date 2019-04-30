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
   * <p>Contains the configuration parameters for an Initiate Glacier Restore job.
   * Amazon S3 batch operations passes each value through to the underlying POST
   * Object restore API. For more information about the parameters for this
   * operation, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectPOSTrestore.html#RESTObjectPOSTrestore-restore-request">Restoring
   * Archives</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3InitiateRestoreObjectOperation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3InitiateRestoreObjectOperation
  {
  public:
    S3InitiateRestoreObjectOperation();
    S3InitiateRestoreObjectOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3InitiateRestoreObjectOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline int GetExpirationInDays() const{ return m_expirationInDays; }

    /**
     * <p/>
     */
    inline bool ExpirationInDaysHasBeenSet() const { return m_expirationInDaysHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetExpirationInDays(int value) { m_expirationInDaysHasBeenSet = true; m_expirationInDays = value; }

    /**
     * <p/>
     */
    inline S3InitiateRestoreObjectOperation& WithExpirationInDays(int value) { SetExpirationInDays(value); return *this;}


    /**
     * <p/>
     */
    inline const S3GlacierJobTier& GetGlacierJobTier() const{ return m_glacierJobTier; }

    /**
     * <p/>
     */
    inline bool GlacierJobTierHasBeenSet() const { return m_glacierJobTierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetGlacierJobTier(const S3GlacierJobTier& value) { m_glacierJobTierHasBeenSet = true; m_glacierJobTier = value; }

    /**
     * <p/>
     */
    inline void SetGlacierJobTier(S3GlacierJobTier&& value) { m_glacierJobTierHasBeenSet = true; m_glacierJobTier = std::move(value); }

    /**
     * <p/>
     */
    inline S3InitiateRestoreObjectOperation& WithGlacierJobTier(const S3GlacierJobTier& value) { SetGlacierJobTier(value); return *this;}

    /**
     * <p/>
     */
    inline S3InitiateRestoreObjectOperation& WithGlacierJobTier(S3GlacierJobTier&& value) { SetGlacierJobTier(std::move(value)); return *this;}

  private:

    int m_expirationInDays;
    bool m_expirationInDaysHasBeenSet;

    S3GlacierJobTier m_glacierJobTier;
    bool m_glacierJobTierHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
