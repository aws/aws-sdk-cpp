/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Usage-specific statistics about the domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/DomainStats">AWS
   * API Reference</a></p>
   */
  class DomainStats
  {
  public:
    AWS_CUSTOMERPROFILES_API DomainStats();
    AWS_CUSTOMERPROFILES_API DomainStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API DomainStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of profiles currently in the domain.</p>
     */
    inline long long GetProfileCount() const{ return m_profileCount; }

    /**
     * <p>The total number of profiles currently in the domain.</p>
     */
    inline bool ProfileCountHasBeenSet() const { return m_profileCountHasBeenSet; }

    /**
     * <p>The total number of profiles currently in the domain.</p>
     */
    inline void SetProfileCount(long long value) { m_profileCountHasBeenSet = true; m_profileCount = value; }

    /**
     * <p>The total number of profiles currently in the domain.</p>
     */
    inline DomainStats& WithProfileCount(long long value) { SetProfileCount(value); return *this;}


    /**
     * <p>The number of profiles that you are currently paying for in the domain. If
     * you have more than 100 objects associated with a single profile, that profile
     * counts as two profiles. If you have more than 200 objects, that profile counts
     * as three, and so on.</p>
     */
    inline long long GetMeteringProfileCount() const{ return m_meteringProfileCount; }

    /**
     * <p>The number of profiles that you are currently paying for in the domain. If
     * you have more than 100 objects associated with a single profile, that profile
     * counts as two profiles. If you have more than 200 objects, that profile counts
     * as three, and so on.</p>
     */
    inline bool MeteringProfileCountHasBeenSet() const { return m_meteringProfileCountHasBeenSet; }

    /**
     * <p>The number of profiles that you are currently paying for in the domain. If
     * you have more than 100 objects associated with a single profile, that profile
     * counts as two profiles. If you have more than 200 objects, that profile counts
     * as three, and so on.</p>
     */
    inline void SetMeteringProfileCount(long long value) { m_meteringProfileCountHasBeenSet = true; m_meteringProfileCount = value; }

    /**
     * <p>The number of profiles that you are currently paying for in the domain. If
     * you have more than 100 objects associated with a single profile, that profile
     * counts as two profiles. If you have more than 200 objects, that profile counts
     * as three, and so on.</p>
     */
    inline DomainStats& WithMeteringProfileCount(long long value) { SetMeteringProfileCount(value); return *this;}


    /**
     * <p>The total number of objects in domain.</p>
     */
    inline long long GetObjectCount() const{ return m_objectCount; }

    /**
     * <p>The total number of objects in domain.</p>
     */
    inline bool ObjectCountHasBeenSet() const { return m_objectCountHasBeenSet; }

    /**
     * <p>The total number of objects in domain.</p>
     */
    inline void SetObjectCount(long long value) { m_objectCountHasBeenSet = true; m_objectCount = value; }

    /**
     * <p>The total number of objects in domain.</p>
     */
    inline DomainStats& WithObjectCount(long long value) { SetObjectCount(value); return *this;}


    /**
     * <p>The total size, in bytes, of all objects in the domain.</p>
     */
    inline long long GetTotalSize() const{ return m_totalSize; }

    /**
     * <p>The total size, in bytes, of all objects in the domain.</p>
     */
    inline bool TotalSizeHasBeenSet() const { return m_totalSizeHasBeenSet; }

    /**
     * <p>The total size, in bytes, of all objects in the domain.</p>
     */
    inline void SetTotalSize(long long value) { m_totalSizeHasBeenSet = true; m_totalSize = value; }

    /**
     * <p>The total size, in bytes, of all objects in the domain.</p>
     */
    inline DomainStats& WithTotalSize(long long value) { SetTotalSize(value); return *this;}

  private:

    long long m_profileCount;
    bool m_profileCountHasBeenSet = false;

    long long m_meteringProfileCount;
    bool m_meteringProfileCountHasBeenSet = false;

    long long m_objectCount;
    bool m_objectCountHasBeenSet = false;

    long long m_totalSize;
    bool m_totalSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
