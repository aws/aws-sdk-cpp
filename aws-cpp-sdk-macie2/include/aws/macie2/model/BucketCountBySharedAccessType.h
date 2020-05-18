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
   * <p>The total number of buckets that are shared with another AWS account or
   * configured to support cross-origin resource sharing (CORS).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCountBySharedAccessType">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API BucketCountBySharedAccessType
  {
  public:
    BucketCountBySharedAccessType();
    BucketCountBySharedAccessType(Aws::Utils::Json::JsonView jsonValue);
    BucketCountBySharedAccessType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetExternal() const{ return m_external; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ExternalHasBeenSet() const { return m_externalHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetExternal(long long value) { m_externalHasBeenSet = true; m_external = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline BucketCountBySharedAccessType& WithExternal(long long value) { SetExternal(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetInternal() const{ return m_internal; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool InternalHasBeenSet() const { return m_internalHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetInternal(long long value) { m_internalHasBeenSet = true; m_internal = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline BucketCountBySharedAccessType& WithInternal(long long value) { SetInternal(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetNotShared() const{ return m_notShared; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool NotSharedHasBeenSet() const { return m_notSharedHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNotShared(long long value) { m_notSharedHasBeenSet = true; m_notShared = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline BucketCountBySharedAccessType& WithNotShared(long long value) { SetNotShared(value); return *this;}

  private:

    long long m_external;
    bool m_externalHasBeenSet;

    long long m_internal;
    bool m_internalHasBeenSet;

    long long m_notShared;
    bool m_notSharedHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
