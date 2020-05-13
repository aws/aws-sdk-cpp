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
#include <aws/macie2/Macie2_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>The total number of objects that are in the bucket, grouped by server-side
   * encryption type. This includes a grouping that reports the total number of
   * objects that aren't encrypted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/ObjectCountByEncryptionType">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API ObjectCountByEncryptionType
  {
  public:
    ObjectCountByEncryptionType();
    ObjectCountByEncryptionType(Aws::Utils::Json::JsonView jsonValue);
    ObjectCountByEncryptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetCustomerManaged() const{ return m_customerManaged; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool CustomerManagedHasBeenSet() const { return m_customerManagedHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetCustomerManaged(long long value) { m_customerManagedHasBeenSet = true; m_customerManaged = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ObjectCountByEncryptionType& WithCustomerManaged(long long value) { SetCustomerManaged(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetKmsManaged() const{ return m_kmsManaged; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool KmsManagedHasBeenSet() const { return m_kmsManagedHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetKmsManaged(long long value) { m_kmsManagedHasBeenSet = true; m_kmsManaged = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ObjectCountByEncryptionType& WithKmsManaged(long long value) { SetKmsManaged(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetS3Managed() const{ return m_s3Managed; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool S3ManagedHasBeenSet() const { return m_s3ManagedHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetS3Managed(long long value) { m_s3ManagedHasBeenSet = true; m_s3Managed = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ObjectCountByEncryptionType& WithS3Managed(long long value) { SetS3Managed(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetUnencrypted() const{ return m_unencrypted; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool UnencryptedHasBeenSet() const { return m_unencryptedHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetUnencrypted(long long value) { m_unencryptedHasBeenSet = true; m_unencrypted = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ObjectCountByEncryptionType& WithUnencrypted(long long value) { SetUnencrypted(value); return *this;}

  private:

    long long m_customerManaged;
    bool m_customerManagedHasBeenSet;

    long long m_kmsManaged;
    bool m_kmsManagedHasBeenSet;

    long long m_s3Managed;
    bool m_s3ManagedHasBeenSet;

    long long m_unencrypted;
    bool m_unencryptedHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
