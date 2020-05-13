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
   * <p>The total number of buckets that are publicly accessible, based on a
   * combination of permissions settings for each bucket.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/BucketCountByEffectivePermission">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API BucketCountByEffectivePermission
  {
  public:
    BucketCountByEffectivePermission();
    BucketCountByEffectivePermission(Aws::Utils::Json::JsonView jsonValue);
    BucketCountByEffectivePermission& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPubliclyAccessible(long long value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline BucketCountByEffectivePermission& WithPubliclyAccessible(long long value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetPubliclyReadable() const{ return m_publiclyReadable; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool PubliclyReadableHasBeenSet() const { return m_publiclyReadableHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPubliclyReadable(long long value) { m_publiclyReadableHasBeenSet = true; m_publiclyReadable = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline BucketCountByEffectivePermission& WithPubliclyReadable(long long value) { SetPubliclyReadable(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetPubliclyWritable() const{ return m_publiclyWritable; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool PubliclyWritableHasBeenSet() const { return m_publiclyWritableHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPubliclyWritable(long long value) { m_publiclyWritableHasBeenSet = true; m_publiclyWritable = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline BucketCountByEffectivePermission& WithPubliclyWritable(long long value) { SetPubliclyWritable(value); return *this;}

  private:

    long long m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    long long m_publiclyReadable;
    bool m_publiclyReadableHasBeenSet;

    long long m_publiclyWritable;
    bool m_publiclyWritableHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
