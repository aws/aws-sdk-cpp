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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_REDSHIFT_API DescribeEventCategoriesRequest : public RedshiftRequest
  {
  public:
    DescribeEventCategoriesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(Aws::String&& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type, such as cluster or parameter group, to which the described
     * event categories apply.</p> <p>Valid values: cluster, cluster-snapshot,
     * cluster-parameter-group, and cluster-security-group.</p>
     */
    inline DescribeEventCategoriesRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}

  private:
    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
